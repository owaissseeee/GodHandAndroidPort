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

// Function: ADXT_GetNumSctIbuf
// Address: 0x32ad48 - 0x32ada8
void ADXT_GetNumSctIbuf_0x32ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_GetNumSctIbuf_0x32ad48");
#endif

    switch (ctx->pc) {
        case 0x32ad48u: goto label_32ad48;
        case 0x32ad4cu: goto label_32ad4c;
        case 0x32ad50u: goto label_32ad50;
        case 0x32ad54u: goto label_32ad54;
        case 0x32ad58u: goto label_32ad58;
        case 0x32ad5cu: goto label_32ad5c;
        case 0x32ad60u: goto label_32ad60;
        case 0x32ad64u: goto label_32ad64;
        case 0x32ad68u: goto label_32ad68;
        case 0x32ad6cu: goto label_32ad6c;
        case 0x32ad70u: goto label_32ad70;
        case 0x32ad74u: goto label_32ad74;
        case 0x32ad78u: goto label_32ad78;
        case 0x32ad7cu: goto label_32ad7c;
        case 0x32ad80u: goto label_32ad80;
        case 0x32ad84u: goto label_32ad84;
        case 0x32ad88u: goto label_32ad88;
        case 0x32ad8cu: goto label_32ad8c;
        case 0x32ad90u: goto label_32ad90;
        case 0x32ad94u: goto label_32ad94;
        case 0x32ad98u: goto label_32ad98;
        case 0x32ad9cu: goto label_32ad9c;
        case 0x32ada0u: goto label_32ada0;
        case 0x32ada4u: goto label_32ada4;
        default: break;
    }

    ctx->pc = 0x32ad48u;

label_32ad48:
    // 0x32ad48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32ad4c:
    // 0x32ad4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_32ad50:
    if (ctx->pc == 0x32AD50u) {
        ctx->pc = 0x32AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD4Cu;
        // 0x32ad50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD54u;
        goto label_32ad54;
    }
    ctx->pc = 0x32AD4Cu;
    {
        const bool branch_taken_0x32ad4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD4Cu;
        // 0x32ad50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad4c) {
            ctx->pc = 0x32AD68u;
            goto label_32ad68;
        }
    }
    ctx->pc = 0x32AD54u;
label_32ad54:
    // 0x32ad54: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32ad58:
    // 0x32ad58: 0xc0cfc4c  jal         func_33F130
label_32ad5c:
    if (ctx->pc == 0x32AD5Cu) {
        ctx->pc = 0x32AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD58u;
        // 0x32ad5c: 0x248423d8  addiu       $a0, $a0, 0x23D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD60u;
        goto label_32ad60;
    }
    ctx->pc = 0x32AD58u;
    SET_GPR_U32(ctx, 31, 0x32AD60u);
    ctx->pc = 0x32AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD58u;
    // 0x32ad5c: 0x248423d8  addiu       $a0, $a0, 0x23D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32AD58u, 0x32AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD60u;
label_32ad60:
    // 0x32ad60: 0x1000000e  b           . + 4 + (0xE << 2)
label_32ad64:
    if (ctx->pc == 0x32AD64u) {
        ctx->pc = 0x32AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD60u;
        // 0x32ad64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD68u;
        goto label_32ad68;
    }
    ctx->pc = 0x32AD60u;
    {
        const bool branch_taken_0x32ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD60u;
        // 0x32ad64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad60) {
            ctx->pc = 0x32AD9Cu;
            goto label_32ad9c;
        }
    }
    ctx->pc = 0x32AD68u;
label_32ad68:
    // 0x32ad68: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x32ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_32ad6c:
    // 0x32ad6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_32ad70:
    if (ctx->pc == 0x32AD70u) {
        ctx->pc = 0x32AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD6Cu;
        // 0x32ad70: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD74u;
        goto label_32ad74;
    }
    ctx->pc = 0x32AD6Cu;
    {
        const bool branch_taken_0x32ad6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD6Cu;
        // 0x32ad70: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad6c) {
            ctx->pc = 0x32AD98u;
            goto label_32ad98;
        }
    }
    ctx->pc = 0x32AD74u;
label_32ad74:
    // 0x32ad74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ad78:
    // 0x32ad78: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32ad7c:
    // 0x32ad7c: 0x40f809  jalr        $v0
label_32ad80:
    if (ctx->pc == 0x32AD80u) {
        ctx->pc = 0x32AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD7Cu;
        // 0x32ad80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD84u;
        goto label_32ad84;
    }
    ctx->pc = 0x32AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AD84u);
        ctx->pc = 0x32AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD7Cu;
        // 0x32ad80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AD7Cu, 0x32AD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AD84u;
label_32ad84:
    // 0x32ad84: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_32ad88:
    // 0x32ad88: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x32ad88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_32ad8c:
    // 0x32ad8c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x32ad8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_32ad90:
    // 0x32ad90: 0x10000002  b           . + 4 + (0x2 << 2)
label_32ad94:
    if (ctx->pc == 0x32AD94u) {
        ctx->pc = 0x32AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD90u;
        // 0x32ad94: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD98u;
        goto label_32ad98;
    }
    ctx->pc = 0x32AD90u;
    {
        const bool branch_taken_0x32ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD90u;
        // 0x32ad94: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad90) {
            ctx->pc = 0x32AD9Cu;
            goto label_32ad9c;
        }
    }
    ctx->pc = 0x32AD98u;
label_32ad98:
    // 0x32ad98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ad98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ad9c:
    // 0x32ad9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ada0:
    // 0x32ada0: 0x3e00008  jr          $ra
label_32ada4:
    if (ctx->pc == 0x32ADA4u) {
        ctx->pc = 0x32ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA0u;
        // 0x32ada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADA8u;
        goto label_fallthrough_0x32ada0;
    }
    ctx->pc = 0x32ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA0u;
        // 0x32ada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ADA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32ada0:
    ctx->pc = 0x32ADA8u;
}
