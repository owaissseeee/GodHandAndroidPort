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

// Function: func_001FD9D8
// Address: 0x1fd9d8 - 0x1fdaf0
void func_001FD9D8_0x1fd9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FD9D8_0x1fd9d8");
#endif

    switch (ctx->pc) {
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        case 0x1fd9f0u: goto label_1fd9f0;
        case 0x1fd9f4u: goto label_1fd9f4;
        case 0x1fd9f8u: goto label_1fd9f8;
        case 0x1fd9fcu: goto label_1fd9fc;
        case 0x1fda00u: goto label_1fda00;
        case 0x1fda04u: goto label_1fda04;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda0cu: goto label_1fda0c;
        case 0x1fda10u: goto label_1fda10;
        case 0x1fda14u: goto label_1fda14;
        case 0x1fda18u: goto label_1fda18;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda20u: goto label_1fda20;
        case 0x1fda24u: goto label_1fda24;
        case 0x1fda28u: goto label_1fda28;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda30u: goto label_1fda30;
        case 0x1fda34u: goto label_1fda34;
        case 0x1fda38u: goto label_1fda38;
        case 0x1fda3cu: goto label_1fda3c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda44u: goto label_1fda44;
        case 0x1fda48u: goto label_1fda48;
        case 0x1fda4cu: goto label_1fda4c;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda54u: goto label_1fda54;
        case 0x1fda58u: goto label_1fda58;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda60u: goto label_1fda60;
        case 0x1fda64u: goto label_1fda64;
        case 0x1fda68u: goto label_1fda68;
        case 0x1fda6cu: goto label_1fda6c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda78u: goto label_1fda78;
        case 0x1fda7cu: goto label_1fda7c;
        case 0x1fda80u: goto label_1fda80;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fda8cu: goto label_1fda8c;
        case 0x1fda90u: goto label_1fda90;
        case 0x1fda94u: goto label_1fda94;
        case 0x1fda98u: goto label_1fda98;
        case 0x1fda9cu: goto label_1fda9c;
        case 0x1fdaa0u: goto label_1fdaa0;
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdaacu: goto label_1fdaac;
        case 0x1fdab0u: goto label_1fdab0;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdab8u: goto label_1fdab8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        default: break;
    }

    ctx->pc = 0x1fd9d8u;

label_1fd9d8:
    // 0x1fd9d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fd9dc:
    // 0x1fd9dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fd9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1fd9e0:
    // 0x1fd9e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fd9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fd9e4:
    // 0x1fd9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9e8:
    // 0x1fd9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd9ec:
    // 0x1fd9ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fd9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9f0:
    // 0x1fd9f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1fd9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1fd9f4:
    // 0x1fd9f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fd9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9f8:
    // 0x1fd9f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1fd9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1fd9fc:
    // 0x1fd9fc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1fd9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fda00:
    // 0x1fda00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fda00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1fda04:
    // 0x1fda04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fda04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fda08:
    // 0x1fda08: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1fda08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1fda0c:
    // 0x1fda0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fda10:
    if (ctx->pc == 0x1FDA10u) {
        ctx->pc = 0x1FDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA0Cu;
        // 0x1fda10: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA14u;
        goto label_1fda14;
    }
    ctx->pc = 0x1FDA0Cu;
    {
        const bool branch_taken_0x1fda0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA0Cu;
        // 0x1fda10: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda0c) {
            ctx->pc = 0x1FDA44u;
            goto label_1fda44;
        }
    }
    ctx->pc = 0x1FDA14u;
label_1fda14:
    // 0x1fda14: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1fda18:
    // 0x1fda18: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1fda1c:
    // 0x1fda1c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1fda20:
    // 0x1fda20: 0x40f809  jalr        $v0
label_1fda24:
    if (ctx->pc == 0x1FDA24u) {
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA28u;
        goto label_1fda28;
    }
    ctx->pc = 0x1FDA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDA28u);
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA20u, 0x1FDA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDA28u;
label_1fda28:
    // 0x1fda28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fda28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fda2c:
    // 0x1fda2c: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1fda30:
    if (ctx->pc == 0x1FDA30u) {
        ctx->pc = 0x1FDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA2Cu;
        // 0x1fda30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA34u;
        goto label_1fda34;
    }
    ctx->pc = 0x1FDA2Cu;
    {
        const bool branch_taken_0x1fda2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA2Cu;
        // 0x1fda30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda2c) {
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDA34u;
label_1fda34:
    // 0x1fda34: 0xc07f642  jal         func_1FD908
label_1fda38:
    if (ctx->pc == 0x1FDA38u) {
        ctx->pc = 0x1FDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA34u;
        // 0x1fda38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA3Cu;
        goto label_1fda3c;
    }
    ctx->pc = 0x1FDA34u;
    SET_GPR_U32(ctx, 31, 0x1FDA3Cu);
    ctx->pc = 0x1FDA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA34u;
    // 0x1fda38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDA34u, 0x1FDA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA3Cu;
label_1fda3c:
    // 0x1fda3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fda40:
    if (ctx->pc == 0x1FDA40u) {
        ctx->pc = 0x1FDA44u;
        goto label_1fda44;
    }
    ctx->pc = 0x1FDA3Cu;
    {
        const bool branch_taken_0x1fda3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda3c) {
            ctx->pc = 0x1FDA4Cu;
            goto label_1fda4c;
        }
    }
    ctx->pc = 0x1FDA44u;
label_1fda44:
    // 0x1fda44: 0x10000021  b           . + 4 + (0x21 << 2)
label_1fda48:
    if (ctx->pc == 0x1FDA48u) {
        ctx->pc = 0x1FDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA44u;
        // 0x1fda48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA4Cu;
        goto label_1fda4c;
    }
    ctx->pc = 0x1FDA44u;
    {
        const bool branch_taken_0x1fda44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA44u;
        // 0x1fda48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda44) {
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDA4Cu;
label_1fda4c:
    // 0x1fda4c: 0xc07f642  jal         func_1FD908
label_1fda50:
    if (ctx->pc == 0x1FDA50u) {
        ctx->pc = 0x1FDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA4Cu;
        // 0x1fda50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA54u;
        goto label_1fda54;
    }
    ctx->pc = 0x1FDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA54u);
    ctx->pc = 0x1FDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA4Cu;
    // 0x1fda50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FDA4Cu, 0x1FDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA54u;
label_1fda54:
    // 0x1fda54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fda54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fda58:
    // 0x1fda58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fda58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fda5c:
    // 0x1fda5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fda5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fda60:
    // 0x1fda60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1fda60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fda64:
    // 0x1fda64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fda64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fda68:
    // 0x1fda68: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fda68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fda6c:
    // 0x1fda6c: 0xc07f262  jal         func_1FC988
label_1fda70:
    if (ctx->pc == 0x1FDA70u) {
        ctx->pc = 0x1FDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA6Cu;
        // 0x1fda70: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA74u;
        goto label_1fda74;
    }
    ctx->pc = 0x1FDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA74u);
    ctx->pc = 0x1FDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA6Cu;
    // 0x1fda70: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC988u, 0x1FDA6Cu, 0x1FDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA74u;
label_1fda74:
    // 0x1fda74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fda74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fda78:
    // 0x1fda78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fda7c:
    // 0x1fda7c: 0x50820014  beql        $a0, $v0, . + 4 + (0x14 << 2)
label_1fda80:
    if (ctx->pc == 0x1FDA80u) {
        ctx->pc = 0x1FDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA7Cu;
        // 0x1fda80: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA84u;
        goto label_1fda84;
    }
    ctx->pc = 0x1FDA7Cu;
    {
        const bool branch_taken_0x1fda7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fda7c) {
            ctx->pc = 0x1FDA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA7Cu;
            // 0x1fda80: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDA84u;
label_1fda84:
    // 0x1fda84: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1fda88:
    // 0x1fda88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fda8c:
    if (ctx->pc == 0x1FDA8Cu) {
        ctx->pc = 0x1FDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA88u;
        // 0x1fda8c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA90u;
        goto label_1fda90;
    }
    ctx->pc = 0x1FDA88u;
    {
        const bool branch_taken_0x1fda88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA88u;
        // 0x1fda8c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda88) {
            ctx->pc = 0x1FDAC4u;
            goto label_1fdac4;
        }
    }
    ctx->pc = 0x1FDA90u;
label_1fda90:
    // 0x1fda90: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fda94:
    // 0x1fda94: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1fda98:
    if (ctx->pc == 0x1FDA98u) {
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA94u;
        // 0x1fda98: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA9Cu;
        goto label_1fda9c;
    }
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA94u;
            // 0x1fda98: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDABCu;
            goto label_1fdabc;
        }
    }
    ctx->pc = 0x1FDA9Cu;
label_1fda9c:
    // 0x1fda9c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdaa0:
    // 0x1fdaa0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fdaa4:
    // 0x1fdaa4: 0x0  nop
    ctx->pc = 0x1fdaa4u;
    // NOP
label_1fdaa8:
    // 0x1fdaa8: 0x0  nop
    ctx->pc = 0x1fdaa8u;
    // NOP
label_1fdaac:
    // 0x1fdaac: 0x0  nop
    ctx->pc = 0x1fdaacu;
    // NOP
label_1fdab0:
    // 0x1fdab0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1fdab4:
    if (ctx->pc == 0x1FDAB4u) {
        ctx->pc = 0x1FDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAB0u;
        // 0x1fdab4: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAB8u;
        goto label_1fdab8;
    }
    ctx->pc = 0x1FDAB0u;
    {
        const bool branch_taken_0x1fdab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdab0) {
            ctx->pc = 0x1FDAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAB0u;
            // 0x1fdab4: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdaa0;
        }
    }
    ctx->pc = 0x1FDAB8u;
label_1fdab8:
    // 0x1fdab8: 0xac710024  sw          $s1, 0x24($v1)
    ctx->pc = 0x1fdab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
label_1fdabc:
    // 0x1fdabc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdac0:
    if (ctx->pc == 0x1FDAC0u) {
        ctx->pc = 0x1FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDABCu;
        // 0x1fdac0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAC4u;
        goto label_1fdac4;
    }
    ctx->pc = 0x1FDABCu;
    {
        const bool branch_taken_0x1fdabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDABCu;
        // 0x1fdac0: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdabc) {
            ctx->pc = 0x1FDAC8u;
            goto label_1fdac8;
        }
    }
    ctx->pc = 0x1FDAC4u;
label_1fdac4:
    // 0x1fdac4: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1fdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_1fdac8:
    // 0x1fdac8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fdac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdacc:
    // 0x1fdacc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fdaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fdad0:
    // 0x1fdad0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fdad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdad4:
    // 0x1fdad4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fdad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdad8:
    // 0x1fdad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fdad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdadc:
    // 0x1fdadc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1fdadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdae0:
    // 0x1fdae0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1fdae0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdae4:
    // 0x1fdae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdae8:
    // 0x1fdae8: 0x3e00008  jr          $ra
label_1fdaec:
    if (ctx->pc == 0x1FDAECu) {
        ctx->pc = 0x1FDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE8u;
        // 0x1fdaec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAF0u;
        goto label_fallthrough_0x1fdae8;
    }
    ctx->pc = 0x1FDAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE8u;
        // 0x1fdaec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fdae8:
    ctx->pc = 0x1FDAF0u;
}
