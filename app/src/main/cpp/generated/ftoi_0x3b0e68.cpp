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

// Function: ftoi
// Address: 0x3b0e68 - 0x3b0ef8
void ftoi_0x3b0e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ftoi_0x3b0e68");
#endif

    ctx->pc = 0x3b0e68u;

    // 0x3b0e68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b0e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e6c: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x3b0e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x3b0e70: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x3b0e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x3b0e74: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x3b0e74u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x3b0e78: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x3b0e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x3b0e7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0E7Cu;
    {
        const bool branch_taken_0x3b0e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E7Cu;
        // 0x3b0e80: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e7c) {
            ctx->pc = 0x3B0E8Cu;
            goto label_3b0e8c;
        }
    }
    ctx->pc = 0x3B0E84u;
    // 0x3b0e84: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E84u;
        // 0x3b0e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0E8Cu;
label_3b0e8c:
    // 0x3b0e8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0E8Cu;
    {
        const bool branch_taken_0x3b0e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E8Cu;
        // 0x3b0e90: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e8c) {
            ctx->pc = 0x3B0E9Cu;
            goto label_3b0e9c;
        }
    }
    ctx->pc = 0x3B0E94u;
    // 0x3b0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E94u;
        // 0x3b0e98: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0E9Cu;
label_3b0e9c:
    // 0x3b0e9c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3b0e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b0ea0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x3b0ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x3b0ea4: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x3b0ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x3b0ea8: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3B0EA8u;
    {
        const bool branch_taken_0x3b0ea8 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3B0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EA8u;
        // 0x3b0eac: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ea8) {
            ctx->pc = 0x3B0EE0u;
            goto label_3b0ee0;
        }
    }
    ctx->pc = 0x3B0EB0u;
    // 0x3b0eb0: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x3b0eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x3b0eb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b0eb8: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x3b0eb8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x3b0ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b0ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b0ec0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b0ec0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b0ec4: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x3b0ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x3b0ec8: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x3b0ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x3b0ecc: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0ECCu;
    {
        const bool branch_taken_0x3b0ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b0ecc) {
            ctx->pc = 0x3B0ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0ECCu;
            // 0x3b0ed0: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0EECu;
            goto label_3b0eec;
        }
    }
    ctx->pc = 0x3B0ED4u;
    // 0x3b0ed4: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x3b0ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x3b0ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0ED8u;
    {
        const bool branch_taken_0x3b0ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0ED8u;
        // 0x3b0edc: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ed8) {
            ctx->pc = 0x3B0EECu;
            goto label_3b0eec;
        }
    }
    ctx->pc = 0x3B0EE0u;
label_3b0ee0:
    // 0x3b0ee0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3b0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b0ee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b0ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b0ee8: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x3b0ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_3b0eec:
    // 0x3b0eec: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3b0eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b0ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EF0u;
        // 0x3b0ef4: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0EF8u;
}
