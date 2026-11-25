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

// Function: Poker_SetDefaultDisp
// Address: 0x1d72d0 - 0x1d7378
void Poker_SetDefaultDisp_0x1d72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_SetDefaultDisp_0x1d72d0");
#endif

    if (__builtin_expect(ctx->pc != 0x1d72d0u, 0)) {
        switch (ctx->pc) {
            case 0x1d72e4u: goto label_1d72e4;
            case 0x1d72f4u: goto label_1d72f4;
            case 0x1d7304u: goto label_1d7304;
            case 0x1d7314u: goto label_1d7314;
            case 0x1d7324u: goto label_1d7324;
            case 0x1d7334u: goto label_1d7334;
            case 0x1d7344u: goto label_1d7344;
            case 0x1d7354u: goto label_1d7354;
            case 0x1d7364u: goto label_1d7364;
            default: break;
        }
    }


    // 0x1d72d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d72d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d72d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d72d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d72dc: 0xc0774d0  jal         func_1DD340
    SET_GPR_U32(ctx, 31, 0x1D72E4u);
    ctx->pc = 0x1D72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72DCu;
    // 0x1d72e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD340_0x1dd340, 0x1dd340u, 0x1d72e4u)) {
        return;
    }
    ctx->pc = 0x1D72E4u;
label_1d72e4:
    // 0x1d72e4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72e8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72ec: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D72F4u);
    ctx->pc = 0x1D72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72ECu;
    // 0x1d72f0: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d72f4u)) {
        return;
    }
    ctx->pc = 0x1D72F4u;
label_1d72f4:
    // 0x1d72f4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72f8: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d72fc: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7304u);
    ctx->pc = 0x1D7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72FCu;
    // 0x1d7300: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7304u)) {
        return;
    }
    ctx->pc = 0x1D7304u;
label_1d7304:
    // 0x1d7304: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7308: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d730c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7314u);
    ctx->pc = 0x1D7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D730Cu;
    // 0x1d7310: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7314u)) {
        return;
    }
    ctx->pc = 0x1D7314u;
label_1d7314:
    // 0x1d7314: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7318: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d731c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7324u);
    ctx->pc = 0x1D7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D731Cu;
    // 0x1d7320: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7324u)) {
        return;
    }
    ctx->pc = 0x1D7324u;
label_1d7324:
    // 0x1d7324: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7328: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d732c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7334u);
    ctx->pc = 0x1D7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D732Cu;
    // 0x1d7330: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7334u)) {
        return;
    }
    ctx->pc = 0x1D7334u;
label_1d7334:
    // 0x1d7334: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7338: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d733c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7344u);
    ctx->pc = 0x1D7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D733Cu;
    // 0x1d7340: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7344u)) {
        return;
    }
    ctx->pc = 0x1D7344u;
label_1d7344:
    // 0x1d7344: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7348: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d734c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7354u);
    ctx->pc = 0x1D7350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D734Cu;
    // 0x1d7350: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7354u)) {
        return;
    }
    ctx->pc = 0x1D7354u;
label_1d7354:
    // 0x1d7354: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7358: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d735c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7364u);
    ctx->pc = 0x1D7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D735Cu;
    // 0x1d7360: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7364u)) {
        return;
    }
    ctx->pc = 0x1D7364u;
label_1d7364:
    // 0x1d7364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d736c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D736Cu;
        // 0x1d7370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D736Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1d7374: 0x0  nop
    // NOP
    ctx->pc = 0x1d7378u;
}