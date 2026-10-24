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

// Function: func_0037B808
// Address: 0x37b808 - 0x37b918
void func_0037B808_0x37b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B808_0x37b808");
#endif

    switch (ctx->pc) {
        case 0x37b8f4u: goto label_37b8f4;
        default: break;
    }

    ctx->pc = 0x37b808u;

    // 0x37b808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b80c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x37b80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37b810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b814: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37b814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37b818: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37b81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b824: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x37b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x37b828: 0x246326e8  addiu       $v1, $v1, 0x26E8
    ctx->pc = 0x37b828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9960));
    // 0x37b82c: 0x82220028  lb          $v0, 0x28($s1)
    ctx->pc = 0x37b82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x37b830: 0x82300027  lb          $s0, 0x27($s1)
    ctx->pc = 0x37b830u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x37b834: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x37b834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37b838: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x37b838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37b83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b840: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x37b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37b844: 0x80830009  lb          $v1, 0x9($a0)
    ctx->pc = 0x37b844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x37b848: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x37B848u;
    {
        const bool branch_taken_0x37b848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B848u;
        // 0x37b84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b848) {
            ctx->pc = 0x37B900u;
            goto label_37b900;
        }
    }
    ctx->pc = 0x37B850u;
    // 0x37b850: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b854: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x37b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x37b858: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x37b858u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37b85c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x37b85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b860: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37b864: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B864u;
    {
        const bool branch_taken_0x37b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B864u;
        // 0x37b868: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b864) {
            ctx->pc = 0x37B874u;
            goto label_37b874;
        }
    }
    ctx->pc = 0x37B86Cu;
    // 0x37b86c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37B86Cu;
    {
        const bool branch_taken_0x37b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B86Cu;
        // 0x37b870: 0x84830010  lh          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b86c) {
            ctx->pc = 0x37B878u;
            goto label_37b878;
        }
    }
    ctx->pc = 0x37B874u;
label_37b874:
    // 0x37b874: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x37b874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_37b878:
    // 0x37b878: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x37b878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x37b87c: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x37b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x37b880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B880u;
    {
        const bool branch_taken_0x37b880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B880u;
        // 0x37b884: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b880) {
            ctx->pc = 0x37B890u;
            goto label_37b890;
        }
    }
    ctx->pc = 0x37B888u;
    // 0x37b888: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b88c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37b88cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37b890:
    // 0x37b890: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x37b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x37b894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B894u;
    {
        const bool branch_taken_0x37b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B894u;
        // 0x37b898: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b894) {
            ctx->pc = 0x37B8A4u;
            goto label_37b8a4;
        }
    }
    ctx->pc = 0x37B89Cu;
    // 0x37b89c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b8a0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37b8a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37b8a4:
    // 0x37b8a4: 0x8486000a  lh          $a2, 0xA($a0)
    ctx->pc = 0x37b8a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x37b8a8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x37b8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37b8ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B8ACu;
    {
        const bool branch_taken_0x37b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8ACu;
        // 0x37b8b0: 0x9483000c  lhu         $v1, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b8ac) {
            ctx->pc = 0x37B8BCu;
            goto label_37b8bc;
        }
    }
    ctx->pc = 0x37B8B4u;
    // 0x37b8b4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37b8b8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37b8b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37b8bc:
    // 0x37b8bc: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37b8c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x37b8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37b8c4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x37b8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37b8c8: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x37b8c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x37b8cc: 0x54a70003  bnel        $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B8CCu;
    {
        const bool branch_taken_0x37b8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x37b8cc) {
            ctx->pc = 0x37B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B8CCu;
            // 0x37b8d0: 0xa5050000  sh          $a1, 0x0($t0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B8DCu;
            goto label_37b8dc;
        }
    }
    ctx->pc = 0x37B8D4u;
    // 0x37b8d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37B8D4u;
    {
        const bool branch_taken_0x37b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8D4u;
        // 0x37b8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b8d4) {
            ctx->pc = 0x37B900u;
            goto label_37b900;
        }
    }
    ctx->pc = 0x37B8DCu;
label_37b8dc:
    // 0x37b8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b8e0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x37b8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x37b8e4: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x37b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b8e8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x37b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x37b8ec: 0xc0dd2b8  jal         func_374AE0
    ctx->pc = 0x37B8ECu;
    SET_GPR_U32(ctx, 31, 0x37B8F4u);
    ctx->pc = 0x37B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8ECu;
    // 0x37b8f0: 0x8444016c  lh          $a0, 0x16C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374AE0u, 0x37B8ECu, 0x37B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8F4u;
label_37b8f4:
    // 0x37b8f4: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x37b8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x37b8f8: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x37b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x37b8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b900:
    // 0x37b900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b90c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B90Cu;
        // 0x37b910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B914u;
    // 0x37b914: 0x0  nop
    ctx->pc = 0x37b914u;
    // NOP
    ctx->pc = 0x37b918u;
}
