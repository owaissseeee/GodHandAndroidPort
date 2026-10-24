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

// Function: func_00124EC0
// Address: 0x124ec0 - 0x124f60
void func_00124EC0_0x124ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00124EC0_0x124ec0");
#endif

    switch (ctx->pc) {
        case 0x124ee8u: goto label_124ee8;
        case 0x124f3cu: goto label_124f3c;
        default: break;
    }

    ctx->pc = 0x124ec0u;

    // 0x124ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x124ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x124ecc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x124eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x124ed0: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x124ed4: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x124ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x124ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124edc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124ee0: 0xc04e38e  jal         func_138E38
    ctx->pc = 0x124EE0u;
    SET_GPR_U32(ctx, 31, 0x124EE8u);
    ctx->pc = 0x124EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EE0u;
    // 0x124ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E38u, 0x124EE0u, 0x124EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EE8u;
label_124ee8:
    // 0x124ee8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x124ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x124eec: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x124ef0: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x124ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x124ef4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x124ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x124ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124EF8u;
    {
        const bool branch_taken_0x124ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ef8) {
            ctx->pc = 0x124F0Cu;
            goto label_124f0c;
        }
    }
    ctx->pc = 0x124F00u;
    // 0x124f00: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x124f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x124f04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124F04u;
    {
        const bool branch_taken_0x124f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F04u;
        // 0x124f08: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f04) {
            ctx->pc = 0x124F10u;
            goto label_124f10;
        }
    }
    ctx->pc = 0x124F0Cu;
label_124f0c:
    // 0x124f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124f10:
    // 0x124f10: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x124f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x124f14: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x124f18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x124f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x124f1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124F1Cu;
    {
        const bool branch_taken_0x124f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F1Cu;
        // 0x124f20: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f1c) {
            ctx->pc = 0x124F30u;
            goto label_124f30;
        }
    }
    ctx->pc = 0x124F24u;
    // 0x124f24: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x124f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x124f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124F28u;
    {
        const bool branch_taken_0x124f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F28u;
        // 0x124f2c: 0x8c470070  lw          $a3, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f28) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124F30u;
label_124f30:
    // 0x124f30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124f34:
    // 0x124f34: 0xc04e6da  jal         func_139B68
    ctx->pc = 0x124F34u;
    SET_GPR_U32(ctx, 31, 0x124F3Cu);
    ctx->pc = 0x124F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F34u;
    // 0x124f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B68u, 0x124F34u, 0x124F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F3Cu;
label_124f3c:
    // 0x124f3c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x124f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x124f40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x124f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124f44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x124f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124f4c: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x124f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
    // 0x124f50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x124f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124f54: 0x3e00008  jr          $ra
    ctx->pc = 0x124F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F54u;
        // 0x124f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F5Cu;
    // 0x124f5c: 0x0  nop
    ctx->pc = 0x124f5cu;
    // NOP
    ctx->pc = 0x124f60u;
}
