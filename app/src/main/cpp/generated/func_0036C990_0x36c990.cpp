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

// Function: func_0036C990
// Address: 0x36c990 - 0x36ca38
void func_0036C990_0x36c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C990_0x36c990");
#endif

    switch (ctx->pc) {
        case 0x36ca00u: goto label_36ca00;
        case 0x36ca18u: goto label_36ca18;
        default: break;
    }

    ctx->pc = 0x36c990u;

    // 0x36c990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c998: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36c998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c99c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c9a0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C9A0u;
    {
        const bool branch_taken_0x36c9a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9A0u;
        // 0x36c9a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9a0) {
            ctx->pc = 0x36C9C8u;
            goto label_36c9c8;
        }
    }
    ctx->pc = 0x36C9A8u;
    // 0x36c9a8: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x36c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x36c9ac: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x36c9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36c9b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x36c9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x36c9b4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x36c9b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36c9b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c9bc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x36c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x36c9c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x36C9C0u;
    {
        const bool branch_taken_0x36c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9C0u;
        // 0x36c9c4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9c0) {
            ctx->pc = 0x36CA24u;
            goto label_36ca24;
        }
    }
    ctx->pc = 0x36C9C8u;
label_36c9c8:
    // 0x36c9c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C9C8u;
    {
        const bool branch_taken_0x36c9c8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x36C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9C8u;
        // 0x36c9cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9c8) {
            ctx->pc = 0x36C9D8u;
            goto label_36c9d8;
        }
    }
    ctx->pc = 0x36C9D0u;
    // 0x36c9d0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x36c9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c9d4: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x36c9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_36c9d8:
    // 0x36c9d8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C9D8u;
    {
        const bool branch_taken_0x36c9d8 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x36c9d8) {
            ctx->pc = 0x36C9E8u;
            goto label_36c9e8;
        }
    }
    ctx->pc = 0x36C9E0u;
    // 0x36c9e0: 0x118823  negu        $s1, $s1
    ctx->pc = 0x36c9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x36c9e4: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x36c9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_36c9e8:
    // 0x36c9e8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C9E8u;
    {
        const bool branch_taken_0x36c9e8 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x36c9e8) {
            ctx->pc = 0x36C9F8u;
            goto label_36c9f8;
        }
    }
    ctx->pc = 0x36C9F0u;
    // 0x36c9f0: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x36c9f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x36c9f4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x36c9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_36c9f8:
    // 0x36c9f8: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x36C9F8u;
    SET_GPR_U32(ctx, 31, 0x36CA00u);
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x36C9F8u, 0x36CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA00u;
label_36ca00:
    // 0x36ca00: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x36ca00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x36ca04: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x36ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x36ca08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca0c: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x36ca0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x36ca10: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x36CA10u;
    SET_GPR_U32(ctx, 31, 0x36CA18u);
    ctx->pc = 0x36CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA10u;
    // 0x36ca14: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x36CA10u, 0x36CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA18u;
label_36ca18:
    // 0x36ca18: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x36ca18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36ca1c: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x36ca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x36ca20: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x36ca20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_36ca24:
    // 0x36ca24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ca24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36ca28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ca2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ca30: 0x3e00008  jr          $ra
    ctx->pc = 0x36CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA30u;
        // 0x36ca34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CA38u;
}
