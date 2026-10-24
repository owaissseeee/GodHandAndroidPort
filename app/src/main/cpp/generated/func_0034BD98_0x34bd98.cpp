#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0034BD98
// Address: 0x34bd98 - 0x34be00
void func_0034BD98_0x34bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BD98_0x34bd98");
#endif

    switch (ctx->pc) {
        case 0x34bd98u: goto label_34bd98;
        case 0x34bd9cu: goto label_34bd9c;
        case 0x34bda0u: goto label_34bda0;
        case 0x34bda4u: goto label_34bda4;
        case 0x34bda8u: goto label_34bda8;
        case 0x34bdacu: goto label_34bdac;
        case 0x34bdb0u: goto label_34bdb0;
        case 0x34bdb4u: goto label_34bdb4;
        case 0x34bdb8u: goto label_34bdb8;
        case 0x34bdbcu: goto label_34bdbc;
        case 0x34bdc0u: goto label_34bdc0;
        case 0x34bdc4u: goto label_34bdc4;
        case 0x34bdc8u: goto label_34bdc8;
        case 0x34bdccu: goto label_34bdcc;
        case 0x34bdd0u: goto label_34bdd0;
        case 0x34bdd4u: goto label_34bdd4;
        case 0x34bdd8u: goto label_34bdd8;
        case 0x34bddcu: goto label_34bddc;
        case 0x34bde0u: goto label_34bde0;
        case 0x34bde4u: goto label_34bde4;
        case 0x34bde8u: goto label_34bde8;
        case 0x34bdecu: goto label_34bdec;
        case 0x34bdf0u: goto label_34bdf0;
        case 0x34bdf4u: goto label_34bdf4;
        case 0x34bdf8u: goto label_34bdf8;
        case 0x34bdfcu: goto label_34bdfc;
        default: break;
    }

    ctx->pc = 0x34bd98u;

label_34bd98:
    // 0x34bd98: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_34bd9c:
    // 0x34bd9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34bd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34bda0:
    // 0x34bda0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_34bda4:
    // 0x34bda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34bda8:
    // 0x34bda8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34bdac:
    // 0x34bdac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_34bdb0:
    // 0x34bdb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_34bdb4:
    // 0x34bdb4: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x34bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
label_34bdb8:
    // 0x34bdb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34bdbc:
    // 0x34bdbc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34bdc0:
    // 0x34bdc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34bdc4:
    // 0x34bdc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34bdc8:
    // 0x34bdc8: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_34bdcc:
    if (ctx->pc == 0x34BDCCu) {
        ctx->pc = 0x34BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDC8u;
        // 0x34bdcc: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDD0u;
        goto label_34bdd0;
    }
    ctx->pc = 0x34BDC8u;
    {
        const bool branch_taken_0x34bdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x34BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDC8u;
        // 0x34bdcc: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdc8) {
            ctx->pc = 0x34BDF0u;
            goto label_34bdf0;
        }
    }
    ctx->pc = 0x34BDD0u;
label_34bdd0:
    // 0x34bdd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_34bdd4:
    // 0x34bdd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34bdd8:
    if (ctx->pc == 0x34BDD8u) {
        ctx->pc = 0x34BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDD4u;
        // 0x34bdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BDDCu;
        goto label_34bddc;
    }
    ctx->pc = 0x34BDD4u;
    {
        const bool branch_taken_0x34bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDD4u;
        // 0x34bdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdd4) {
            ctx->pc = 0x34BDF0u;
            goto label_34bdf0;
        }
    }
    ctx->pc = 0x34BDDCu;
label_34bddc:
    // 0x34bddc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34bde0:
    // 0x34bde0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x34bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34bde4:
    // 0x34bde4: 0x60f809  jalr        $v1
label_34bde8:
    if (ctx->pc == 0x34BDE8u) {
        ctx->pc = 0x34BDECu;
        goto label_34bdec;
    }
    ctx->pc = 0x34BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34BDECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BDE4u, 0x34BDECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BDECu;
label_34bdec:
    // 0x34bdec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_34bdf0:
    // 0x34bdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34bdf4:
    // 0x34bdf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34bdf8:
    // 0x34bdf8: 0x3e00008  jr          $ra
label_34bdfc:
    if (ctx->pc == 0x34BDFCu) {
        ctx->pc = 0x34BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDF8u;
        // 0x34bdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34BE00u;
        goto label_fallthrough_0x34bdf8;
    }
    ctx->pc = 0x34BDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDF8u;
        // 0x34bdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34bdf8:
    ctx->pc = 0x34BE00u;
}
