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

// Function: func_0038D168
// Address: 0x38d168 - 0x38d2b8
void func_0038D168_0x38d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038D168_0x38d168");
#endif

    switch (ctx->pc) {
        case 0x38d1c4u: goto label_38d1c4;
        case 0x38d1d8u: goto label_38d1d8;
        case 0x38d1fcu: goto label_38d1fc;
        case 0x38d228u: goto label_38d228;
        case 0x38d250u: goto label_38d250;
        case 0x38d258u: goto label_38d258;
        default: break;
    }

    ctx->pc = 0x38d168u;

    // 0x38d168: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38d16c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38d170: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38d170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38d174: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38d178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d17c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38d180: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38d180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38d184: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38d188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38d188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38d18c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x38d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38d190: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x38d190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x38d194: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x38d194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x38d198: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x38D198u;
    {
        const bool branch_taken_0x38d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D198u;
        // 0x38d19c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d198) {
            ctx->pc = 0x38D270u;
            goto label_38d270;
        }
    }
    ctx->pc = 0x38D1A0u;
    // 0x38d1a0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x38d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x38d1a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38D1A4u;
    {
        const bool branch_taken_0x38d1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d1a4) {
            ctx->pc = 0x38D1D0u;
            goto label_38d1d0;
        }
    }
    ctx->pc = 0x38D1ACu;
    // 0x38d1ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38d1b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38d1b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D1B4u;
    {
        const bool branch_taken_0x38d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d1b4) {
            ctx->pc = 0x38D1C8u;
            goto label_38d1c8;
        }
    }
    ctx->pc = 0x38D1BCu;
    // 0x38d1bc: 0xc0e30ae  jal         func_38C2B8
    ctx->pc = 0x38D1BCu;
    SET_GPR_U32(ctx, 31, 0x38D1C4u);
    ctx->pc = 0x38D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D1BCu;
    // 0x38d1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2B8u, 0x38D1BCu, 0x38D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1C4u;
label_38d1c4:
    // 0x38d1c4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x38d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_38d1c8:
    // 0x38d1c8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x38D1C8u;
    {
        const bool branch_taken_0x38d1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d1c8) {
            ctx->pc = 0x38D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D1C8u;
            // 0x38d1cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D204u;
            goto label_38d204;
        }
    }
    ctx->pc = 0x38D1D0u;
label_38d1d0:
    // 0x38d1d0: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x38D1D0u;
    SET_GPR_U32(ctx, 31, 0x38D1D8u);
    ctx->pc = 0x38D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D1D0u;
    // 0x38d1d4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x38D1D0u, 0x38D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1D8u;
label_38d1d8:
    // 0x38d1d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38d1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d1dc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x38D1DCu;
    {
        const bool branch_taken_0x38d1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1DCu;
        // 0x38d1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1dc) {
            ctx->pc = 0x38D294u;
            goto label_38d294;
        }
    }
    ctx->pc = 0x38D1E4u;
    // 0x38d1e4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x38d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x38d1e8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x38d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x38d1ec: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x38d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x38d1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d1f4: 0xc0e30ae  jal         func_38C2B8
    ctx->pc = 0x38D1F4u;
    SET_GPR_U32(ctx, 31, 0x38D1FCu);
    ctx->pc = 0x38D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D1F4u;
    // 0x38d1f8: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2B8u, 0x38D1F4u, 0x38D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1FCu;
label_38d1fc:
    // 0x38d1fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x38D1FCu;
    {
        const bool branch_taken_0x38d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1FCu;
        // 0x38d200: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1fc) {
            ctx->pc = 0x38D270u;
            goto label_38d270;
        }
    }
    ctx->pc = 0x38D204u;
label_38d204:
    // 0x38d204: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x38d204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x38d208: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x38d208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x38d20c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38D20Cu;
    {
        const bool branch_taken_0x38d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D20Cu;
        // 0x38d210: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d20c) {
            ctx->pc = 0x38D274u;
            goto label_38d274;
        }
    }
    ctx->pc = 0x38D214u;
    // 0x38d214: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38d218: 0x469823  subu        $s3, $v0, $a2
    ctx->pc = 0x38d218u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x38d21c: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x38d21cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x38d220: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x38D220u;
    SET_GPR_U32(ctx, 31, 0x38D228u);
    ctx->pc = 0x38D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D220u;
    // 0x38d224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x38D220u, 0x38D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D228u;
label_38d228:
    // 0x38d228: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38d228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d22c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D22Cu;
    {
        const bool branch_taken_0x38d22c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D22Cu;
        // 0x38d230: 0x2938023  subu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d22c) {
            ctx->pc = 0x38D23Cu;
            goto label_38d23c;
        }
    }
    ctx->pc = 0x38D234u;
    // 0x38d234: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38D234u;
    {
        const bool branch_taken_0x38d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D234u;
        // 0x38d238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d234) {
            ctx->pc = 0x38D294u;
            goto label_38d294;
        }
    }
    ctx->pc = 0x38D23Cu;
label_38d23c:
    // 0x38d23c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x38d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x38d240: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x38d240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x38d244: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38d244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d248: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38D248u;
    SET_GPR_U32(ctx, 31, 0x38D250u);
    ctx->pc = 0x38D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D248u;
    // 0x38d24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38D248u, 0x38D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D250u;
label_38d250:
    // 0x38d250: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38D250u;
    SET_GPR_U32(ctx, 31, 0x38D258u);
    ctx->pc = 0x38D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D250u;
    // 0x38d254: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38D250u, 0x38D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D258u;
label_38d258:
    // 0x38d258: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x38d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x38d25c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x38d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x38d260: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38d260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x38d264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d268: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x38d268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x38d26c: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x38d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_38d270:
    // 0x38d270: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38d274:
    // 0x38d274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d278: 0x12a30004  beq         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D278u;
    {
        const bool branch_taken_0x38d278 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x38D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D278u;
        // 0x38d27c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d278) {
            ctx->pc = 0x38D28Cu;
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D280u;
    // 0x38d280: 0x8082ffff  lb          $v0, -0x1($a0)
    ctx->pc = 0x38d280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x38d284: 0x54550001  bnel        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x38D284u;
    {
        const bool branch_taken_0x38d284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x38d284) {
            ctx->pc = 0x38D288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D284u;
            // 0x38d288: 0xa095ffff  sb          $s5, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D28Cu;
            goto label_38d28c;
        }
    }
    ctx->pc = 0x38D28Cu;
label_38d28c:
    // 0x38d28c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x38d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38d290: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38d290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38d294:
    // 0x38d294: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38d294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38d298: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38d298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38d29c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38d29cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d2a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38d2a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d2a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38d2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d2a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38d2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38d2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2B0u;
        // 0x38d2b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D2B8u;
}
