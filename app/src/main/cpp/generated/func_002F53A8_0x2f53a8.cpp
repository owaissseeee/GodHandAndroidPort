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

// Function: func_002F53A8
// Address: 0x2f53a8 - 0x2f5448
void func_002F53A8_0x2f53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F53A8_0x2f53a8");
#endif

    ctx->pc = 0x2f53a8u;

    // 0x2f53a8: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x2f53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2f53ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f53b0: 0x8c860114  lw          $a2, 0x114($a0)
    ctx->pc = 0x2f53b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2f53b4: 0x8062018c  lb          $v0, 0x18C($v1)
    ctx->pc = 0x2f53b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x2f53b8: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F53B8u;
    {
        const bool branch_taken_0x2f53b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53B8u;
        // 0x2f53bc: 0xac8202b0  sw          $v0, 0x2B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53b8) {
            ctx->pc = 0x2F53FCu;
            goto label_2f53fc;
        }
    }
    ctx->pc = 0x2F53C0u;
    // 0x2f53c0: 0x806500be  lb          $a1, 0xBE($v1)
    ctx->pc = 0x2f53c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x2f53c4: 0x4a0001e  bltz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F53C4u;
    {
        const bool branch_taken_0x2f53c4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2F53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C4u;
        // 0x2f53c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53c4) {
            ctx->pc = 0x2F5440u;
            goto label_2f5440;
        }
    }
    ctx->pc = 0x2F53CCu;
    // 0x2f53cc: 0x90c202b4  lbu         $v0, 0x2B4($a2)
    ctx->pc = 0x2f53ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x2f53d0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2f53d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f53d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F53D4u;
    {
        const bool branch_taken_0x2f53d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53D4u;
        // 0x2f53d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53d4) {
            ctx->pc = 0x2F53F0u;
            goto label_2f53f0;
        }
    }
    ctx->pc = 0x2F53DCu;
    // 0x2f53dc: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x2f53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x2f53e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f53e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f53e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F53E8u;
    {
        const bool branch_taken_0x2f53e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53E8u;
        // 0x2f53ec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53e8) {
            ctx->pc = 0x2F53F4u;
            goto label_2f53f4;
        }
    }
    ctx->pc = 0x2F53F0u;
label_2f53f0:
    // 0x2f53f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f53f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f53f4:
    // 0x2f53f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F53F4u;
    {
        const bool branch_taken_0x2f53f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f53f4) {
            ctx->pc = 0x2F53F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F53F4u;
            // 0x2f53f8: 0x8c850114  lw          $a1, 0x114($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5404u;
            goto label_2f5404;
        }
    }
    ctx->pc = 0x2F53FCu;
label_2f53fc:
    // 0x2f53fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F53FCu;
    {
        const bool branch_taken_0x2f53fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53FCu;
        // 0x2f5400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53fc) {
            ctx->pc = 0x2F5440u;
            goto label_2f5440;
        }
    }
    ctx->pc = 0x2F5404u;
label_2f5404:
    // 0x2f5404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5408: 0x8c8402b0  lw          $a0, 0x2B0($a0)
    ctx->pc = 0x2f5408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x2f540c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f540cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f5410: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5410u;
    {
        const bool branch_taken_0x2f5410 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5410u;
        // 0x2f5414: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5410) {
            ctx->pc = 0x2F541Cu;
            goto label_2f541c;
        }
    }
    ctx->pc = 0x2F5418u;
    // 0x2f5418: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f5418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f541c:
    // 0x2f541c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5420u;
    {
        const bool branch_taken_0x2f5420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5420u;
        // 0x2f5424: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5420) {
            ctx->pc = 0x2F5438u;
            goto label_2f5438;
        }
    }
    ctx->pc = 0x2F5428u;
    // 0x2f5428: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f5428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f542c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5430u;
    {
        const bool branch_taken_0x2f5430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5430u;
        // 0x2f5434: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5430) {
            ctx->pc = 0x2F543Cu;
            goto label_2f543c;
        }
    }
    ctx->pc = 0x2F5438u;
label_2f5438:
    // 0x2f5438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f543c:
    // 0x2f543c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f543cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f5440:
    // 0x2f5440: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5440u;
        // 0x2f5444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5448u;
}
