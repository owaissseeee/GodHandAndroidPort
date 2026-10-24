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

// Function: func_0035A540
// Address: 0x35a540 - 0x35a5e0
void func_0035A540_0x35a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A540_0x35a540");
#endif

    ctx->pc = 0x35a540u;

    // 0x35a540: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35a540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a544: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35a548: 0x8d060294  lw          $a2, 0x294($t0)
    ctx->pc = 0x35a548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 660)));
    // 0x35a54c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A54Cu;
    {
        const bool branch_taken_0x35a54c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x35A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A54Cu;
        // 0x35a550: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a54c) {
            ctx->pc = 0x35A560u;
            goto label_35a560;
        }
    }
    ctx->pc = 0x35A554u;
    // 0x35a554: 0x3e00008  jr          $ra
    ctx->pc = 0x35A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A554u;
        // 0x35a558: 0xad0a0294  sw          $t2, 0x294($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A55Cu;
    // 0x35a55c: 0x0  nop
    ctx->pc = 0x35a55cu;
    // NOP
label_35a560:
    // 0x35a560: 0x1463823  subu        $a3, $t2, $a2
    ctx->pc = 0x35a560u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x35a564: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x35A564u;
    {
        const bool branch_taken_0x35a564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A564u;
        // 0x35a568: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a564) {
            ctx->pc = 0x35A5D4u;
            goto label_35a5d4;
        }
    }
    ctx->pc = 0x35A56Cu;
    // 0x35a56c: 0x8d03029c  lw          $v1, 0x29C($t0)
    ctx->pc = 0x35a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 668)));
    // 0x35a570: 0x8d0202a0  lw          $v0, 0x2A0($t0)
    ctx->pc = 0x35a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 672)));
    // 0x35a574: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x35a574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x35a578: 0xe3302a  slt         $a2, $a3, $v1
    ctx->pc = 0x35a578u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35a57c: 0x8d090298  lw          $t1, 0x298($t0)
    ctx->pc = 0x35a57cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 664)));
    // 0x35a580: 0x47202a  slt         $a0, $v0, $a3
    ctx->pc = 0x35a580u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35a584: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x35a584u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x35a588: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x35a588u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x35a58c: 0xad0a0294  sw          $t2, 0x294($t0)
    ctx->pc = 0x35a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
    // 0x35a590: 0xad03029c  sw          $v1, 0x29C($t0)
    ctx->pc = 0x35a590u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 3));
    // 0x35a594: 0x1125000e  beq         $t1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x35A594u;
    {
        const bool branch_taken_0x35a594 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x35A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A594u;
        // 0x35a598: 0xad0202a0  sw          $v0, 0x2A0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a594) {
            ctx->pc = 0x35A5D0u;
            goto label_35a5d0;
        }
    }
    ctx->pc = 0x35A59Cu;
    // 0x35a59c: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x35a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x35a5a0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x35A5A0u;
    {
        const bool branch_taken_0x35a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a5a0) {
            ctx->pc = 0x35A5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A5A0u;
            // 0x35a5a4: 0xad070298  sw          $a3, 0x298($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A5D4u;
            goto label_35a5d4;
        }
    }
    ctx->pc = 0x35A5A8u;
    // 0x35a5a8: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x35a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x35a5ac: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x35a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x35a5b0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x35a5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x35a5b4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x35a5b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x35a5b8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35a5b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35a5bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A5BCu;
    {
        const bool branch_taken_0x35a5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A5BCu;
        // 0x35a5c0: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a5bc) {
            ctx->pc = 0x35A5D0u;
            goto label_35a5d0;
        }
    }
    ctx->pc = 0x35A5C4u;
    // 0x35a5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A5C4u;
        // 0x35a5c8: 0xad020298  sw          $v0, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A5CCu;
    // 0x35a5cc: 0x0  nop
    ctx->pc = 0x35a5ccu;
    // NOP
label_35a5d0:
    // 0x35a5d0: 0xad070298  sw          $a3, 0x298($t0)
    ctx->pc = 0x35a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
label_35a5d4:
    // 0x35a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A5DCu;
    // 0x35a5dc: 0x0  nop
    ctx->pc = 0x35a5dcu;
    // NOP
    ctx->pc = 0x35a5e0u;
}
