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

// Function: func_00330080
// Address: 0x330080 - 0x330180
void func_00330080_0x330080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330080_0x330080");
#endif

    switch (ctx->pc) {
        case 0x330080u: goto label_330080;
        case 0x330084u: goto label_330084;
        case 0x330088u: goto label_330088;
        case 0x33008cu: goto label_33008c;
        case 0x330090u: goto label_330090;
        case 0x330094u: goto label_330094;
        case 0x330098u: goto label_330098;
        case 0x33009cu: goto label_33009c;
        case 0x3300a0u: goto label_3300a0;
        case 0x3300a4u: goto label_3300a4;
        case 0x3300a8u: goto label_3300a8;
        case 0x3300acu: goto label_3300ac;
        case 0x3300b0u: goto label_3300b0;
        case 0x3300b4u: goto label_3300b4;
        case 0x3300b8u: goto label_3300b8;
        case 0x3300bcu: goto label_3300bc;
        case 0x3300c0u: goto label_3300c0;
        case 0x3300c4u: goto label_3300c4;
        case 0x3300c8u: goto label_3300c8;
        case 0x3300ccu: goto label_3300cc;
        case 0x3300d0u: goto label_3300d0;
        case 0x3300d4u: goto label_3300d4;
        case 0x3300d8u: goto label_3300d8;
        case 0x3300dcu: goto label_3300dc;
        case 0x3300e0u: goto label_3300e0;
        case 0x3300e4u: goto label_3300e4;
        case 0x3300e8u: goto label_3300e8;
        case 0x3300ecu: goto label_3300ec;
        case 0x3300f0u: goto label_3300f0;
        case 0x3300f4u: goto label_3300f4;
        case 0x3300f8u: goto label_3300f8;
        case 0x3300fcu: goto label_3300fc;
        case 0x330100u: goto label_330100;
        case 0x330104u: goto label_330104;
        case 0x330108u: goto label_330108;
        case 0x33010cu: goto label_33010c;
        case 0x330110u: goto label_330110;
        case 0x330114u: goto label_330114;
        case 0x330118u: goto label_330118;
        case 0x33011cu: goto label_33011c;
        case 0x330120u: goto label_330120;
        case 0x330124u: goto label_330124;
        case 0x330128u: goto label_330128;
        case 0x33012cu: goto label_33012c;
        case 0x330130u: goto label_330130;
        case 0x330134u: goto label_330134;
        case 0x330138u: goto label_330138;
        case 0x33013cu: goto label_33013c;
        case 0x330140u: goto label_330140;
        case 0x330144u: goto label_330144;
        case 0x330148u: goto label_330148;
        case 0x33014cu: goto label_33014c;
        case 0x330150u: goto label_330150;
        case 0x330154u: goto label_330154;
        case 0x330158u: goto label_330158;
        case 0x33015cu: goto label_33015c;
        case 0x330160u: goto label_330160;
        case 0x330164u: goto label_330164;
        case 0x330168u: goto label_330168;
        case 0x33016cu: goto label_33016c;
        case 0x330170u: goto label_330170;
        case 0x330174u: goto label_330174;
        case 0x330178u: goto label_330178;
        case 0x33017cu: goto label_33017c;
        default: break;
    }

    ctx->pc = 0x330080u;

label_330080:
    // 0x330080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_330084:
    // 0x330084: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x330084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_330088:
    // 0x330088: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x330088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_33008c:
    // 0x33008c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33008cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330090:
    // 0x330090: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x330090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_330094:
    // 0x330094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x330094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330098:
    // 0x330098: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x330098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_33009c:
    // 0x33009c: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x33009cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3300a0:
    // 0x3300a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3300a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3300a4:
    // 0x3300a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3300a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3300a8:
    // 0x3300a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3300a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3300ac:
    // 0x3300ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3300acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3300b0:
    // 0x3300b0: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x3300b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3300b4:
    // 0x3300b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3300b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3300b8:
    // 0x3300b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3300b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3300bc:
    // 0x3300bc: 0x40f809  jalr        $v0
label_3300c0:
    if (ctx->pc == 0x3300C0u) {
        ctx->pc = 0x3300C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300BCu;
        // 0x3300c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300C4u;
        goto label_3300c4;
    }
    ctx->pc = 0x3300BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3300C4u);
        ctx->pc = 0x3300C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300BCu;
        // 0x3300c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300BCu, 0x3300C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3300C4u;
label_3300c4:
    // 0x3300c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3300c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3300c8:
    // 0x3300c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3300c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3300cc:
    // 0x3300cc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3300ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3300d0:
    // 0x3300d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3300d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3300d4:
    // 0x3300d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3300d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3300d8:
    // 0x3300d8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3300dc:
    // 0x3300dc: 0x40f809  jalr        $v0
label_3300e0:
    if (ctx->pc == 0x3300E0u) {
        ctx->pc = 0x3300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300DCu;
        // 0x3300e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300E4u;
        goto label_3300e4;
    }
    ctx->pc = 0x3300DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3300E4u);
        ctx->pc = 0x3300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300DCu;
        // 0x3300e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300DCu, 0x3300E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3300E4u;
label_3300e4:
    // 0x3300e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3300e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3300e8:
    // 0x3300e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3300ec:
    // 0x3300ec: 0xc0e9452  jal         func_3A5148
label_3300f0:
    if (ctx->pc == 0x3300F0u) {
        ctx->pc = 0x3300F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300ECu;
        // 0x3300f0: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3300F4u;
        goto label_3300f4;
    }
    ctx->pc = 0x3300ECu;
    SET_GPR_U32(ctx, 31, 0x3300F4u);
    ctx->pc = 0x3300F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300ECu;
    // 0x3300f0: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3300ECu, 0x3300F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300F4u;
label_3300f4:
    // 0x3300f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3300f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3300f8:
    // 0x3300f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3300f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3300fc:
    // 0x3300fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330100:
    // 0x330100: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x330100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_330104:
    // 0x330104: 0x40f809  jalr        $v0
label_330108:
    if (ctx->pc == 0x330108u) {
        ctx->pc = 0x330108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330104u;
        // 0x330108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33010Cu;
        goto label_33010c;
    }
    ctx->pc = 0x330104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33010Cu);
        ctx->pc = 0x330108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330104u;
        // 0x330108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330104u, 0x33010Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33010Cu;
label_33010c:
    // 0x33010c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x33010cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_330110:
    // 0x330110: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x330110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_330114:
    // 0x330114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_330118:
    // 0x330118: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x330118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33011c:
    // 0x33011c: 0xc0ceb28  jal         func_33ACA0
label_330120:
    if (ctx->pc == 0x330120u) {
        ctx->pc = 0x330120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33011Cu;
        // 0x330120: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330124u;
        goto label_330124;
    }
    ctx->pc = 0x33011Cu;
    SET_GPR_U32(ctx, 31, 0x330124u);
    ctx->pc = 0x330120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33011Cu;
    // 0x330120: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x33011Cu, 0x330124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330124u;
label_330124:
    // 0x330124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x330124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330128:
    // 0x330128: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x330128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33012c:
    // 0x33012c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330130:
    // 0x330130: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x330130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_330134:
    // 0x330134: 0x40f809  jalr        $v0
label_330138:
    if (ctx->pc == 0x330138u) {
        ctx->pc = 0x330138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330134u;
        // 0x330138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33013Cu;
        goto label_33013c;
    }
    ctx->pc = 0x330134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33013Cu);
        ctx->pc = 0x330138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330134u;
        // 0x330138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330134u, 0x33013Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33013Cu;
label_33013c:
    // 0x33013c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330140:
    // 0x330140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330144:
    // 0x330144: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330148:
    // 0x330148: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x330148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_33014c:
    // 0x33014c: 0x60f809  jalr        $v1
label_330150:
    if (ctx->pc == 0x330150u) {
        ctx->pc = 0x330150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33014Cu;
        // 0x330150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330154u;
        goto label_330154;
    }
    ctx->pc = 0x33014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x330154u);
        ctx->pc = 0x330150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33014Cu;
        // 0x330150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33014Cu, 0x330154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330154u;
label_330154:
    // 0x330154: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x330154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_330158:
    // 0x330158: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x330158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_33015c:
    // 0x33015c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x33015cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_330160:
    // 0x330160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330164:
    // 0x330164: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x330164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_330168:
    // 0x330168: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x330168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_33016c:
    // 0x33016c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x33016cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_330170:
    // 0x330170: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x330170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_330174:
    // 0x330174: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x330174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_330178:
    // 0x330178: 0x3e00008  jr          $ra
label_33017c:
    if (ctx->pc == 0x33017Cu) {
        ctx->pc = 0x33017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330178u;
        // 0x33017c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330180u;
        goto label_fallthrough_0x330178;
    }
    ctx->pc = 0x330178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330178u;
        // 0x33017c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330178:
    ctx->pc = 0x330180u;
}
