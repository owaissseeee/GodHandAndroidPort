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

// Function: GameInitObj_start
// Address: 0x2a5b18 - 0x2a5bb8
void GameInitObj_start_0x2a5b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GameInitObj_start_0x2a5b18");
#endif

    switch (ctx->pc) {
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b68u: goto label_2a5b68;
        case 0x2a5b74u: goto label_2a5b74;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b8cu: goto label_2a5b8c;
        case 0x2a5b98u: goto label_2a5b98;
        default: break;
    }

    ctx->pc = 0x2a5b18u;

    // 0x2a5b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5b1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5b28: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2a5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2a5b2c: 0xc0b66f0  jal         func_2D9BC0
    ctx->pc = 0x2A5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B34u);
    ctx->pc = 0x2A5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B2Cu;
    // 0x2a5b30: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BC0u, 0x2A5B2Cu, 0x2A5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B34u;
label_2a5b34:
    // 0x2a5b34: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a5b38: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2a5b3c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x2a5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2a5b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b44: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2a5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2a5b48: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2a5b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2a5b4c: 0xc04e350  jal         func_138D40
    ctx->pc = 0x2A5B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B54u);
    ctx->pc = 0x2A5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B4Cu;
    // 0x2a5b50: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x2A5B4Cu, 0x2A5B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B54u;
label_2a5b54:
    // 0x2a5b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5b58: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a5b5c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a5b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a5b60: 0xc0a4044  jal         func_290110
    ctx->pc = 0x2A5B60u;
    SET_GPR_U32(ctx, 31, 0x2A5B68u);
    ctx->pc = 0x2A5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B60u;
    // 0x2a5b64: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290110u, 0x2A5B60u, 0x2A5B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B68u;
label_2a5b68:
    // 0x2a5b68: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2a5b6c: 0xc07f7aa  jal         func_1FDEA8
    ctx->pc = 0x2A5B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B74u);
    ctx->pc = 0x2A5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B6Cu;
    // 0x2a5b70: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDEA8u, 0x2A5B6Cu, 0x2A5B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B74u;
label_2a5b74:
    // 0x2a5b74: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a5b78: 0xc0aa642  jal         func_2A9908
    ctx->pc = 0x2A5B78u;
    SET_GPR_U32(ctx, 31, 0x2A5B80u);
    ctx->pc = 0x2A5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B78u;
    // 0x2a5b7c: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9908u, 0x2A5B78u, 0x2A5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B80u;
label_2a5b80:
    // 0x2a5b80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2a5b84: 0xc07db3e  jal         func_1F6CF8
    ctx->pc = 0x2A5B84u;
    SET_GPR_U32(ctx, 31, 0x2A5B8Cu);
    ctx->pc = 0x2A5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B84u;
    // 0x2a5b88: 0x24848240  addiu       $a0, $a0, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6CF8u, 0x2A5B84u, 0x2A5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B8Cu;
label_2a5b8c:
    // 0x2a5b8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2a5b90: 0xc07e634  jal         func_1F98D0
    ctx->pc = 0x2A5B90u;
    SET_GPR_U32(ctx, 31, 0x2A5B98u);
    ctx->pc = 0x2A5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B90u;
    // 0x2a5b94: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D0u, 0x2A5B90u, 0x2A5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B98u;
label_2a5b98:
    // 0x2a5b98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a5b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a5b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a5b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5ba4: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2a5ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x2a5ba8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BACu;
        // 0x2a5bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5BB4u;
    // 0x2a5bb4: 0x0  nop
    ctx->pc = 0x2a5bb4u;
    // NOP
    ctx->pc = 0x2a5bb8u;
}
