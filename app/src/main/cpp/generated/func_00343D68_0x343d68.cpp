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

// Function: func_00343D68
// Address: 0x343d68 - 0x343e00
void func_00343D68_0x343d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343D68_0x343d68");
#endif

    switch (ctx->pc) {
        case 0x343d8cu: goto label_343d8c;
        case 0x343db8u: goto label_343db8;
        case 0x343dc8u: goto label_343dc8;
        case 0x343dd8u: goto label_343dd8;
        case 0x343de8u: goto label_343de8;
        default: break;
    }

    ctx->pc = 0x343d68u;

    // 0x343d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x343d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x343d7c: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x343d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x343d80: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x343d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x343d84: 0xc0d625a  jal         func_358968
    ctx->pc = 0x343D84u;
    SET_GPR_U32(ctx, 31, 0x343D8Cu);
    ctx->pc = 0x343D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D84u;
    // 0x343d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358968u, 0x343D84u, 0x343D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D8Cu;
label_343d8c:
    // 0x343d8c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x343d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x343d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d94: 0x24a55848  addiu       $a1, $a1, 0x5848
    ctx->pc = 0x343d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22600));
    // 0x343d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343D98u;
    {
        const bool branch_taken_0x343d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D98u;
        // 0x343d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d98) {
            ctx->pc = 0x343DB0u;
            goto label_343db0;
        }
    }
    ctx->pc = 0x343DA0u;
    // 0x343da0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343da4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x343DA4u;
    {
        const bool branch_taken_0x343da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DA4u;
        // 0x343da8: 0x248473d8  addiu       $a0, $a0, 0x73D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343da4) {
            ctx->pc = 0x343DD0u;
            goto label_343dd0;
        }
    }
    ctx->pc = 0x343DACu;
    // 0x343dac: 0x0  nop
    ctx->pc = 0x343dacu;
    // NOP
label_343db0:
    // 0x343db0: 0xc0d3788  jal         func_34DE20
    ctx->pc = 0x343DB0u;
    SET_GPR_U32(ctx, 31, 0x343DB8u);
    ctx->pc = 0x343DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DB0u;
    // 0x343db4: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DE20u, 0x343DB0u, 0x343DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DB8u;
label_343db8:
    // 0x343db8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343DB8u;
    {
        const bool branch_taken_0x343db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DB8u;
        // 0x343dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343db8) {
            ctx->pc = 0x343DE0u;
            goto label_343de0;
        }
    }
    ctx->pc = 0x343DC0u;
    // 0x343dc0: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x343DC0u;
    SET_GPR_U32(ctx, 31, 0x343DC8u);
    ctx->pc = 0x343DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DC0u;
    // 0x343dc4: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x343DC0u, 0x343DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DC8u;
label_343dc8:
    // 0x343dc8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343dcc: 0x24847410  addiu       $a0, $a0, 0x7410
    ctx->pc = 0x343dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
label_343dd0:
    // 0x343dd0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x343DD0u;
    SET_GPR_U32(ctx, 31, 0x343DD8u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x343DD0u, 0x343DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DD8u;
label_343dd8:
    // 0x343dd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x343DD8u;
    {
        const bool branch_taken_0x343dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DD8u;
        // 0x343ddc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343dd8) {
            ctx->pc = 0x343DECu;
            goto label_343dec;
        }
    }
    ctx->pc = 0x343DE0u;
label_343de0:
    // 0x343de0: 0xc0d0eba  jal         func_343AE8
    ctx->pc = 0x343DE0u;
    SET_GPR_U32(ctx, 31, 0x343DE8u);
    ctx->pc = 0x343AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343AE8u, 0x343DE0u, 0x343DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DE8u;
label_343de8:
    // 0x343de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343dec:
    // 0x343dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343df8: 0x3e00008  jr          $ra
    ctx->pc = 0x343DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DF8u;
        // 0x343dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343E00u;
}
