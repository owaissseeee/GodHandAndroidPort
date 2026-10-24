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

// Function: func_0036BDA0
// Address: 0x36bda0 - 0x36be00
void func_0036BDA0_0x36bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BDA0_0x36bda0");
#endif

    switch (ctx->pc) {
        case 0x36bda0u: goto label_36bda0;
        case 0x36bda4u: goto label_36bda4;
        case 0x36bda8u: goto label_36bda8;
        case 0x36bdacu: goto label_36bdac;
        case 0x36bdb0u: goto label_36bdb0;
        case 0x36bdb4u: goto label_36bdb4;
        case 0x36bdb8u: goto label_36bdb8;
        case 0x36bdbcu: goto label_36bdbc;
        case 0x36bdc0u: goto label_36bdc0;
        case 0x36bdc4u: goto label_36bdc4;
        case 0x36bdc8u: goto label_36bdc8;
        case 0x36bdccu: goto label_36bdcc;
        case 0x36bdd0u: goto label_36bdd0;
        case 0x36bdd4u: goto label_36bdd4;
        case 0x36bdd8u: goto label_36bdd8;
        case 0x36bddcu: goto label_36bddc;
        case 0x36bde0u: goto label_36bde0;
        case 0x36bde4u: goto label_36bde4;
        case 0x36bde8u: goto label_36bde8;
        case 0x36bdecu: goto label_36bdec;
        case 0x36bdf0u: goto label_36bdf0;
        case 0x36bdf4u: goto label_36bdf4;
        case 0x36bdf8u: goto label_36bdf8;
        case 0x36bdfcu: goto label_36bdfc;
        default: break;
    }

    ctx->pc = 0x36bda0u;

label_36bda0:
    // 0x36bda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36bda4:
    // 0x36bda4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36bda8:
    // 0x36bda8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36bdac:
    // 0x36bdac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36bdb0:
    // 0x36bdb0: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x36bdb0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_36bdb4:
    // 0x36bdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36bdb8:
    // 0x36bdb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bdbc:
    // 0x36bdbc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36bdc0:
    // 0x36bdc0: 0x40f809  jalr        $v0
label_36bdc4:
    if (ctx->pc == 0x36BDC4u) {
        ctx->pc = 0x36BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDC0u;
        // 0x36bdc4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BDC8u;
        goto label_36bdc8;
    }
    ctx->pc = 0x36BDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BDC8u);
        ctx->pc = 0x36BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDC0u;
        // 0x36bdc4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BDC0u, 0x36BDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BDC8u;
label_36bdc8:
    // 0x36bdc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bdcc:
    // 0x36bdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bdd0:
    // 0x36bdd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36bdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bdd4:
    // 0x36bdd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36bdd8:
    // 0x36bdd8: 0x40f809  jalr        $v0
label_36bddc:
    if (ctx->pc == 0x36BDDCu) {
        ctx->pc = 0x36BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDD8u;
        // 0x36bddc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BDE0u;
        goto label_36bde0;
    }
    ctx->pc = 0x36BDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BDE0u);
        ctx->pc = 0x36BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDD8u;
        // 0x36bddc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BDD8u, 0x36BDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BDE0u;
label_36bde0:
    // 0x36bde0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36bde4:
    // 0x36bde4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36bde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36bde8:
    // 0x36bde8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36bde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36bdec:
    // 0x36bdec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36bdf0:
    // 0x36bdf0: 0x3e00008  jr          $ra
label_36bdf4:
    if (ctx->pc == 0x36BDF4u) {
        ctx->pc = 0x36BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDF0u;
        // 0x36bdf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BDF8u;
        goto label_36bdf8;
    }
    ctx->pc = 0x36BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BDF0u;
        // 0x36bdf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BDF8u;
label_36bdf8:
    // 0x36bdf8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x36bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_36bdfc:
    // 0x36bdfc: 0x0  nop
    ctx->pc = 0x36bdfcu;
    // NOP
    ctx->pc = 0x36be00u;
}
