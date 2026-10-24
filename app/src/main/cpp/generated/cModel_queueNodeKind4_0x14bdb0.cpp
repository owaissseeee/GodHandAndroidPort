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

// Function: cModel_queueNodeKind4
// Address: 0x14bdb0 - 0x14be38
void cModel_queueNodeKind4_0x14bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_queueNodeKind4_0x14bdb0");
#endif

    switch (ctx->pc) {
        case 0x14be00u: goto label_14be00;
        case 0x14be28u: goto label_14be28;
        default: break;
    }

    ctx->pc = 0x14bdb0u;

    // 0x14bdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bdb4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14bdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bdbc: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14bdc0: 0x8ca20380  lw          $v0, 0x380($a1)
    ctx->pc = 0x14bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x14bdc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14bdc8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14BDC8u;
    {
        const bool branch_taken_0x14bdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDC8u;
        // 0x14bdcc: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdc8) {
            ctx->pc = 0x14BE28u;
            goto label_14be28;
        }
    }
    ctx->pc = 0x14BDD0u;
    // 0x14bdd0: 0x8c8802c0  lw          $t0, 0x2C0($a0)
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x14bdd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bdd8: 0x1502000b  bne         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14BDD8u;
    {
        const bool branch_taken_0x14bdd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDD8u;
        // 0x14bddc: 0x240700b0  addiu       $a3, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdd8) {
            ctx->pc = 0x14BE08u;
            goto label_14be08;
        }
    }
    ctx->pc = 0x14BDE0u;
    // 0x14bde0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14bde4: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x14bde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14bde8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14bdec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14bdf0: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14bdf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bdf8: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14BDF8u;
    SET_GPR_U32(ctx, 31, 0x14BE00u);
    ctx->pc = 0x14BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDF8u;
    // 0x14bdfc: 0x24e800a0  addiu       $t0, $a3, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14BDF8u, 0x14BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE00u;
label_14be00:
    // 0x14be00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14BE00u;
    {
        const bool branch_taken_0x14be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE00u;
        // 0x14be04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be00) {
            ctx->pc = 0x14BE2Cu;
            goto label_14be2c;
        }
    }
    ctx->pc = 0x14BE08u;
label_14be08:
    // 0x14be08: 0x848602ac  lh          $a2, 0x2AC($a0)
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x14be0c: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x14be0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14be10: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14be14: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14be18: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x14be18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14be1c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x14be1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be20: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14BE20u;
    SET_GPR_U32(ctx, 31, 0x14BE28u);
    ctx->pc = 0x14BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE20u;
    // 0x14be24: 0x24e800a0  addiu       $t0, $a3, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14BE20u, 0x14BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE28u;
label_14be28:
    // 0x14be28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14be2c:
    // 0x14be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE2Cu;
        // 0x14be30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BE34u;
    // 0x14be34: 0x0  nop
    ctx->pc = 0x14be34u;
    // NOP
    ctx->pc = 0x14be38u;
}
