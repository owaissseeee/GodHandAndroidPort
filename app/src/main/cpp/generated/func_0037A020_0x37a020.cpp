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

// Function: func_0037A020
// Address: 0x37a020 - 0x37a0f0
void func_0037A020_0x37a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A020_0x37a020");
#endif

    switch (ctx->pc) {
        case 0x37a078u: goto label_37a078;
        case 0x37a0a4u: goto label_37a0a4;
        default: break;
    }

    ctx->pc = 0x37a020u;

    // 0x37a020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a024: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37a028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37a02c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37a030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a034: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37a034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37a038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a03c: 0x26120016  addiu       $s2, $s0, 0x16
    ctx->pc = 0x37a03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x37a040: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x37a040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a044: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x37a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37a048: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37a048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x37a04c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x37a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37a050: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x37a050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x37a054: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x37a054u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a058: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37A058u;
    {
        const bool branch_taken_0x37a058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A058u;
        // 0x37a05c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a058) {
            ctx->pc = 0x37A07Cu;
            goto label_37a07c;
        }
    }
    ctx->pc = 0x37A060u;
    // 0x37a060: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x37a064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a068: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37a068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37a06c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a070: 0xc0de83c  jal         func_37A0F0
    ctx->pc = 0x37A070u;
    SET_GPR_U32(ctx, 31, 0x37A078u);
    ctx->pc = 0x37A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A070u;
    // 0x37a074: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0F0u, 0x37A070u, 0x37A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A078u;
label_37a078:
    // 0x37a078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37a078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a07c:
    // 0x37a07c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x37a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37a080: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37a080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x37a084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37a084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x37a088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A088u;
    {
        const bool branch_taken_0x37a088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A088u;
        // 0x37a08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a088) {
            ctx->pc = 0x37A0A8u;
            goto label_37a0a8;
        }
    }
    ctx->pc = 0x37A090u;
    // 0x37a090: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x37a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37a094: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37a094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37a098: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a09c: 0xc0de83c  jal         func_37A0F0
    ctx->pc = 0x37A09Cu;
    SET_GPR_U32(ctx, 31, 0x37A0A4u);
    ctx->pc = 0x37A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A09Cu;
    // 0x37a0a0: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0F0u, 0x37A09Cu, 0x37A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0A4u;
label_37a0a4:
    // 0x37a0a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37a0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a0a8:
    // 0x37a0a8: 0x54b10003  bnel        $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A0A8u;
    {
        const bool branch_taken_0x37a0a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        if (branch_taken_0x37a0a8) {
            ctx->pc = 0x37A0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A0A8u;
            // 0x37a0ac: 0x82040007  lb          $a0, 0x7($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A0B8u;
            goto label_37a0b8;
        }
    }
    ctx->pc = 0x37A0B0u;
    // 0x37a0b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37A0B0u;
    {
        const bool branch_taken_0x37a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0B0u;
        // 0x37a0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a0b0) {
            ctx->pc = 0x37A0D8u;
            goto label_37a0d8;
        }
    }
    ctx->pc = 0x37A0B8u;
label_37a0b8:
    // 0x37a0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a0bc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x37a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x37a0c0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x37a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x37a0c4: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x37a0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x37a0c8: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x37a0c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a0cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x37a0d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x37a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37a0d4: 0xa460001c  sh          $zero, 0x1C($v1)
    ctx->pc = 0x37a0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
label_37a0d8:
    // 0x37a0d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37a0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a0dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37a0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a0e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37a0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A0E8u;
        // 0x37a0ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A0F0u;
}
