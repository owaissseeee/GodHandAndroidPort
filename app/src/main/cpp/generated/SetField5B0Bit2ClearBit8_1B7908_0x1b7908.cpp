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

// Function: SetField5B0Bit2ClearBit8_1B7908
// Address: 0x1b7908 - 0x1b79b0
void SetField5B0Bit2ClearBit8_1B7908_0x1b7908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField5B0Bit2ClearBit8_1B7908_0x1b7908");
#endif

    switch (ctx->pc) {
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7974u: goto label_1b7974;
        case 0x1b7984u: goto label_1b7984;
        case 0x1b798cu: goto label_1b798c;
        default: break;
    }

    ctx->pc = 0x1b7908u;

    // 0x1b7908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b790c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7918: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b7918u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b791c: 0x2127b  dsra        $v0, $v0, 9
    ctx->pc = 0x1b791cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 9);
    // 0x1b7920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7924: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7924u;
    {
        const bool branch_taken_0x1b7924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7924u;
        // 0x1b7928: 0x8e0505b8  lw          $a1, 0x5B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7924) {
            ctx->pc = 0x1B7950u;
            goto label_1b7950;
        }
    }
    ctx->pc = 0x1B792Cu;
    // 0x1b792c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b7930: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b7930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b7934: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1b7934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1b7938: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b7938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b793c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B793Cu;
    {
        const bool branch_taken_0x1b793c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b793c) {
            ctx->pc = 0x1B7940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B793Cu;
            // 0x1b7940: 0xde050538  ld          $a1, 0x538($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7954u;
            goto label_1b7954;
        }
    }
    ctx->pc = 0x1B7944u;
    // 0x1b7944: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1b7948: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b794c: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1b794cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_1b7950:
    // 0x1b7950: 0xde050538  ld          $a1, 0x538($s0)
    ctx->pc = 0x1b7950u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1336)));
label_1b7954:
    // 0x1b7954: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1b7958: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x1B7958u, 0x1B7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x1b7960u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x1b7964: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b7968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b796c: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1B796Cu;
    SET_GPR_U32(ctx, 31, 0x1B7974u);
    ctx->pc = 0x1B7970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B796Cu;
    // 0x1b7970: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1B796Cu, 0x1B7974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7974u;
label_1b7974:
    // 0x1b7974: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b7978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b797c: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x1B797Cu;
    SET_GPR_U32(ctx, 31, 0x1B7984u);
    ctx->pc = 0x1B7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B797Cu;
    // 0x1b7980: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x1B797Cu, 0x1B7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7984u;
label_1b7984:
    // 0x1b7984: 0xc06deee  jal         func_1B7BB8
    ctx->pc = 0x1B7984u;
    SET_GPR_U32(ctx, 31, 0x1B798Cu);
    ctx->pc = 0x1B7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7984u;
    // 0x1b7988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BB8u, 0x1B7984u, 0x1B798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B798Cu;
label_1b798c:
    // 0x1b798c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1b798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1b7990: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1b7990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1b7994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7998: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b7998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b799c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b799cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b79a0: 0xae0205b0  sw          $v0, 0x5B0($s0)
    ctx->pc = 0x1b79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
    // 0x1b79a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b79a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b79a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B79A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A8u;
        // 0x1b79ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B79A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B79B0u;
}
