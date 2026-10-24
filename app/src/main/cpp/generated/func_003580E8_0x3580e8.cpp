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

// Function: func_003580E8
// Address: 0x3580e8 - 0x3581e0
void func_003580E8_0x3580e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003580E8_0x3580e8");
#endif

    switch (ctx->pc) {
        case 0x358134u: goto label_358134;
        case 0x358158u: goto label_358158;
        case 0x3581b0u: goto label_3581b0;
        case 0x3581c4u: goto label_3581c4;
        default: break;
    }

    ctx->pc = 0x3580e8u;

    // 0x3580e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3580e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3580ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3580f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3580f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3580f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3580f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3580f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3580f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3580fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3580fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x358100: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x358100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x358104: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x358104u;
    {
        const bool branch_taken_0x358104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x358108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358104u;
        // 0x358108: 0x26250950  addiu       $a1, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358104) {
            ctx->pc = 0x35813Cu;
            goto label_35813c;
        }
    }
    ctx->pc = 0x35810Cu;
    // 0x35810c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x35810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x358110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358114: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x358114u;
    {
        const bool branch_taken_0x358114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x358118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358114u;
        // 0x358118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358114) {
            ctx->pc = 0x3581C8u;
            goto label_3581c8;
        }
    }
    ctx->pc = 0x35811Cu;
    // 0x35811c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x35811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x358120: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x358120u;
    {
        const bool branch_taken_0x358120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x358120) {
            ctx->pc = 0x358124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358120u;
            // 0x358124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581C8u;
            goto label_3581c8;
        }
    }
    ctx->pc = 0x358128u;
    // 0x358128: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35812c: 0xc0d6ab2  jal         func_35AAC8
    ctx->pc = 0x35812Cu;
    SET_GPR_U32(ctx, 31, 0x358134u);
    ctx->pc = 0x358130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35812Cu;
    // 0x358130: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAC8u, 0x35812Cu, 0x358134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358134u;
label_358134:
    // 0x358134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358134u;
    {
        const bool branch_taken_0x358134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358134u;
        // 0x358138: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358134) {
            ctx->pc = 0x358148u;
            goto label_358148;
        }
    }
    ctx->pc = 0x35813Cu;
label_35813c:
    // 0x35813c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35813Cu;
    {
        const bool branch_taken_0x35813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35813Cu;
        // 0x358140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35813c) {
            ctx->pc = 0x3581C8u;
            goto label_3581c8;
        }
    }
    ctx->pc = 0x358144u;
    // 0x358144: 0x0  nop
    ctx->pc = 0x358144u;
    // NOP
label_358148:
    // 0x358148: 0x460001f  bltz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x358148u;
    {
        const bool branch_taken_0x358148 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x35814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358148u;
        // 0x35814c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358148) {
            ctx->pc = 0x3581C8u;
            goto label_3581c8;
        }
    }
    ctx->pc = 0x358150u;
    // 0x358150: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x358150u;
    SET_GPR_U32(ctx, 31, 0x358158u);
    ctx->pc = 0x358154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358150u;
    // 0x358154: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x358150u, 0x358158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358158u;
label_358158:
    // 0x358158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35815c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x358160: 0x56020014  bnel        $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x358160u;
    {
        const bool branch_taken_0x358160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x358160) {
            ctx->pc = 0x358164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358160u;
            // 0x358164: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581B4u;
            goto label_3581b4;
        }
    }
    ctx->pc = 0x358168u;
    // 0x358168: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x358168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35816c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x35816cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x358170: 0x8c46e278  lw          $a2, -0x1D88($v0)
    ctx->pc = 0x358170u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EE278u));
    // 0x358174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35817c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x35817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x358180: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x358180u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x358184: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x358184u;
    {
        const bool branch_taken_0x358184 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x358184) {
            ctx->pc = 0x358188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358184u;
            // 0x358188: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35818Cu;
            goto label_35818c;
        }
    }
    ctx->pc = 0x35818Cu;
label_35818c:
    // 0x35818c: 0x1812  mflo        $v1
    ctx->pc = 0x35818cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x358190: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x358190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x358194: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x358198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x358198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35819c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3581a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3581a4: 0x2450fc18  addiu       $s0, $v0, -0x3E8
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
    // 0x3581a8: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x3581A8u;
    SET_GPR_U32(ctx, 31, 0x3581B0u);
    ctx->pc = 0x3581ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581A8u;
    // 0x3581ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x3581A8u, 0x3581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581B0u;
label_3581b0:
    // 0x3581b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3581b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3581b4:
    // 0x3581b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3581b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581b8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3581bc: 0xc0d6bb2  jal         func_35AEC8
    ctx->pc = 0x3581BCu;
    SET_GPR_U32(ctx, 31, 0x3581C4u);
    ctx->pc = 0x3581C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581BCu;
    // 0x3581c0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AEC8u, 0x3581BCu, 0x3581C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581C4u;
label_3581c4:
    // 0x3581c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3581c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3581c8:
    // 0x3581c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3581c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3581cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3581ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3581d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3581d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3581d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3581D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3581D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581D4u;
        // 0x3581d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3581D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3581DCu;
    // 0x3581dc: 0x0  nop
    ctx->pc = 0x3581dcu;
    // NOP
    ctx->pc = 0x3581e0u;
}
