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

// Function: func_0024F638
// Address: 0x24f638 - 0x2508d8
void func_0024F638_0x24f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024F638_0x24f638");
#endif

    switch (ctx->pc) {
        case 0x24f738u: goto label_24f738;
        case 0x24f74cu: goto label_24f74c;
        case 0x24f7d8u: goto label_24f7d8;
        case 0x24f7f8u: goto label_24f7f8;
        case 0x24f808u: goto label_24f808;
        case 0x24f810u: goto label_24f810;
        case 0x24f880u: goto label_24f880;
        case 0x24f8a8u: goto label_24f8a8;
        case 0x24f8ecu: goto label_24f8ec;
        case 0x24f8f8u: goto label_24f8f8;
        case 0x24f908u: goto label_24f908;
        case 0x24f928u: goto label_24f928;
        case 0x24f960u: goto label_24f960;
        case 0x24f9c0u: goto label_24f9c0;
        case 0x24fa20u: goto label_24fa20;
        case 0x24fa80u: goto label_24fa80;
        case 0x24fae8u: goto label_24fae8;
        case 0x24fb14u: goto label_24fb14;
        case 0x24fb68u: goto label_24fb68;
        case 0x24fba0u: goto label_24fba0;
        case 0x24fbb0u: goto label_24fbb0;
        case 0x24fc04u: goto label_24fc04;
        case 0x24fc30u: goto label_24fc30;
        case 0x24fc90u: goto label_24fc90;
        case 0x24fca0u: goto label_24fca0;
        case 0x24fcf4u: goto label_24fcf4;
        case 0x24fd2cu: goto label_24fd2c;
        case 0x24fd64u: goto label_24fd64;
        case 0x24fd74u: goto label_24fd74;
        case 0x24fdc8u: goto label_24fdc8;
        case 0x24fdf4u: goto label_24fdf4;
        case 0x24fe04u: goto label_24fe04;
        case 0x24fe3cu: goto label_24fe3c;
        case 0x24fe74u: goto label_24fe74;
        case 0x24fed4u: goto label_24fed4;
        case 0x24ff34u: goto label_24ff34;
        case 0x24ffb4u: goto label_24ffb4;
        case 0x24ffbcu: goto label_24ffbc;
        case 0x24ffe8u: goto label_24ffe8;
        case 0x250004u: goto label_250004;
        case 0x250020u: goto label_250020;
        case 0x250040u: goto label_250040;
        case 0x250080u: goto label_250080;
        case 0x2500c4u: goto label_2500c4;
        case 0x2500ecu: goto label_2500ec;
        case 0x250168u: goto label_250168;
        case 0x250174u: goto label_250174;
        case 0x25018cu: goto label_25018c;
        case 0x250198u: goto label_250198;
        case 0x2501c8u: goto label_2501c8;
        case 0x2501d0u: goto label_2501d0;
        case 0x2501e0u: goto label_2501e0;
        case 0x250218u: goto label_250218;
        case 0x250278u: goto label_250278;
        case 0x2502b0u: goto label_2502b0;
        case 0x250310u: goto label_250310;
        case 0x250370u: goto label_250370;
        case 0x2503d0u: goto label_2503d0;
        case 0x250430u: goto label_250430;
        case 0x250468u: goto label_250468;
        case 0x2504a0u: goto label_2504a0;
        case 0x250500u: goto label_250500;
        case 0x250560u: goto label_250560;
        case 0x2505d0u: goto label_2505d0;
        case 0x2505e4u: goto label_2505e4;
        case 0x25065cu: goto label_25065c;
        case 0x250690u: goto label_250690;
        case 0x2506a0u: goto label_2506a0;
        case 0x2506f4u: goto label_2506f4;
        case 0x250700u: goto label_250700;
        case 0x250778u: goto label_250778;
        case 0x2507c8u: goto label_2507c8;
        case 0x25082cu: goto label_25082c;
        case 0x250838u: goto label_250838;
        case 0x250858u: goto label_250858;
        case 0x250860u: goto label_250860;
        default: break;
    }

    ctx->pc = 0x24f638u;

    // 0x24f638: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24f63c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x24f640: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24f640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x24f644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24f644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f648: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x24f64c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24f650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24f654: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x24f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x24f658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24f65c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x24f65cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24f660: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x24f660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24f664: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x24f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24f668: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x24f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f66c: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x24f66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x24f670: 0xc6550104  lwc1        $f21, 0x104($s2)
    ctx->pc = 0x24f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24f674: 0x38420223  xori        $v0, $v0, 0x223
    ctx->pc = 0x24f674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)547);
    // 0x24f678: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24F678u;
    {
        const bool branch_taken_0x24f678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F678u;
        // 0x24f67c: 0xae4416d0  sw          $a0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f678) {
            ctx->pc = 0x24F6D0u;
            goto label_24f6d0;
        }
    }
    ctx->pc = 0x24F680u;
    // 0x24f680: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x24f680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24f684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f688: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F688u;
    {
        const bool branch_taken_0x24f688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24f688) {
            ctx->pc = 0x24F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F688u;
            // 0x24f68c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F690u;
    // 0x24f690: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x24f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x24f694: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x24f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24f698: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F698u;
    {
        const bool branch_taken_0x24f698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f698) {
            ctx->pc = 0x24F69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F698u;
            // 0x24f69c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F6A0u;
    // 0x24f6a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f6a4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24f6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f6a8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24f6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24f6ac:
    // 0x24f6ac: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x24f6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x24f6b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F6B0u;
    {
        const bool branch_taken_0x24f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f6b0) {
            ctx->pc = 0x24F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6B0u;
            // 0x24f6b4: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6D4u;
            goto label_24f6d4;
        }
    }
    ctx->pc = 0x24F6B8u;
    // 0x24f6b8: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x24f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24f6bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x24f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x24f6c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24f6c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F6C4u;
    {
        const bool branch_taken_0x24f6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6C4u;
        // 0x24f6c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6c4) {
            ctx->pc = 0x24F6D0u;
            goto label_24f6d0;
        }
    }
    ctx->pc = 0x24F6CCu;
    // 0x24f6cc: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24f6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24f6d0:
    // 0x24f6d0: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x24f6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_24f6d4:
    // 0x24f6d4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24f6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24f6d8: 0x10400474  beqz        $v0, . + 4 + (0x474 << 2)
    ctx->pc = 0x24F6D8u;
    {
        const bool branch_taken_0x24f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6D8u;
        // 0x24f6dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6d8) {
            ctx->pc = 0x2508ACu;
            goto label_2508ac;
        }
    }
    ctx->pc = 0x24F6E0u;
    // 0x24f6e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f6e4: 0x2442e770  addiu       $v0, $v0, -0x1890
    ctx->pc = 0x24f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x24f6e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f6ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f6f0: 0x800008  jr          $a0
    ctx->pc = 0x24F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F6F8u: goto label_24f6f8;
            case 0x25002Cu: goto label_25002c;
            case 0x2501D8u: goto label_2501d8;
            case 0x2505DCu: goto label_2505dc;
            case 0x2507A4u: goto label_2507a4;
            case 0x2507B4u: goto label_2507b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F6F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F6F8u;
label_24f6f8:
    // 0x24f6f8: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x24f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x24f6fc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x24F6FCu;
    {
        const bool branch_taken_0x24f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f6fc) {
            ctx->pc = 0x24F700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6FCu;
            // 0x24f700: 0x924302f7  lbu         $v1, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F750u;
            goto label_24f750;
        }
    }
    ctx->pc = 0x24F704u;
    // 0x24f704: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x24f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f708: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x24f708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x24f70c: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x24f70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x24f710: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F710u;
    {
        const bool branch_taken_0x24f710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F710u;
        // 0x24f714: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f710) {
            ctx->pc = 0x24F730u;
            goto label_24f730;
        }
    }
    ctx->pc = 0x24F718u;
    // 0x24f718: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24f718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24f71c: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x24f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x24f720: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f724: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f728: 0x800008  jr          $a0
    ctx->pc = 0x24F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F730u: goto label_24f730;
            case 0x24F74Cu: goto label_24f74c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F728u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F730u;
label_24f730:
    // 0x24f730: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F730u;
    SET_GPR_U32(ctx, 31, 0x24F738u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F730u, 0x24F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F738u;
label_24f738:
    // 0x24f738: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24f73c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F73Cu;
    {
        const bool branch_taken_0x24f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f73c) {
            ctx->pc = 0x24F740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F73Cu;
            // 0x24f740: 0x924302f7  lbu         $v1, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F750u;
            goto label_24f750;
        }
    }
    ctx->pc = 0x24F744u;
    // 0x24f744: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x24F744u;
    SET_GPR_U32(ctx, 31, 0x24F74Cu);
    ctx->pc = 0x24F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F744u;
    // 0x24f748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24F744u, 0x24F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F74Cu;
label_24f74c:
    // 0x24f74c: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x24f74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_24f750:
    // 0x24f750: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x24f750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24f754: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F754u;
    {
        const bool branch_taken_0x24f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F754u;
        // 0x24f758: 0xae401710  sw          $zero, 0x1710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f754) {
            ctx->pc = 0x24F764u;
            goto label_24f764;
        }
    }
    ctx->pc = 0x24F75Cu;
    // 0x24f75c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F75Cu;
    {
        const bool branch_taken_0x24f75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f75c) {
            ctx->pc = 0x24F774u;
            goto label_24f774;
        }
    }
    ctx->pc = 0x24F764u;
label_24f764:
    // 0x24f764: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x24f764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x24f768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f76c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F76Cu;
    {
        const bool branch_taken_0x24f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f76c) {
            ctx->pc = 0x24F780u;
            goto label_24f780;
        }
    }
    ctx->pc = 0x24F774u;
label_24f774:
    // 0x24f774: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x24f774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
    // 0x24f778: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24f778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24f77c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24f780:
    // 0x24f780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f788: 0xe64005c8  swc1        $f0, 0x5C8($s2)
    ctx->pc = 0x24f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x24f78c: 0xe64105cc  swc1        $f1, 0x5CC($s2)
    ctx->pc = 0x24f78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1484), bits); }
    // 0x24f790: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x24f790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x24f794: 0xae4005c4  sw          $zero, 0x5C4($s2)
    ctx->pc = 0x24f794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1476), GPR_U32(ctx, 0));
    // 0x24f798: 0x8e430698  lw          $v1, 0x698($s2)
    ctx->pc = 0x24f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x24f79c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x24F79Cu;
    {
        const bool branch_taken_0x24f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F79Cu;
        // 0x24f7a0: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f79c) {
            ctx->pc = 0x24F8F0u;
            goto label_24f8f0;
        }
    }
    ctx->pc = 0x24F7A4u;
    // 0x24f7a4: 0x924402f7  lbu         $a0, 0x2F7($s2)
    ctx->pc = 0x24f7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24f7a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F7A8u;
    {
        const bool branch_taken_0x24f7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7A8u;
        // 0x24f7ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7a8) {
            ctx->pc = 0x24F7B8u;
            goto label_24f7b8;
        }
    }
    ctx->pc = 0x24F7B0u;
    // 0x24f7b0: 0x1482004f  bne         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x24F7B0u;
    {
        const bool branch_taken_0x24f7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24f7b0) {
            ctx->pc = 0x24F8F0u;
            goto label_24f8f0;
        }
    }
    ctx->pc = 0x24F7B8u;
label_24f7b8:
    // 0x24f7b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x24f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x24f7bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24F7BCu;
    {
        const bool branch_taken_0x24f7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7BCu;
        // 0x24f7c0: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7bc) {
            ctx->pc = 0x24F7FCu;
            goto label_24f7fc;
        }
    }
    ctx->pc = 0x24F7C4u;
    // 0x24f7c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24f7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f7c8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x24f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24f7cc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x24f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24f7d0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24F7D0u;
    SET_GPR_U32(ctx, 31, 0x24F7D8u);
    ctx->pc = 0x24F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7D0u;
    // 0x24f7d4: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24F7D0u, 0x24F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7D8u;
label_24f7d8:
    // 0x24f7d8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24f7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24f7dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24f7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24f7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f7e4: 0x0  nop
    ctx->pc = 0x24f7e4u;
    // NOP
    // 0x24f7e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24f7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24f7ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24f7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x24f7f0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24F7F0u;
    SET_GPR_U32(ctx, 31, 0x24F7F8u);
    ctx->pc = 0x24F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7F0u;
    // 0x24f7f4: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24F7F0u, 0x24F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7F8u;
label_24f7f8:
    // 0x24f7f8: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_24f7fc:
    // 0x24f7fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x24f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x24f800: 0xc0a4ba0  jal         func_292E80
    ctx->pc = 0x24F800u;
    SET_GPR_U32(ctx, 31, 0x24F808u);
    ctx->pc = 0x24F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F800u;
    // 0x24f804: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E80u, 0x24F800u, 0x24F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F808u;
label_24f808:
    // 0x24f808: 0xc09c5f4  jal         func_2717D0
    ctx->pc = 0x24F808u;
    SET_GPR_U32(ctx, 31, 0x24F810u);
    ctx->pc = 0x24F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F808u;
    // 0x24f80c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717D0u, 0x24F808u, 0x24F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F810u;
label_24f810:
    // 0x24f810: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f814: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x24f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x24f818: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24F818u;
    {
        const bool branch_taken_0x24f818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F818u;
        // 0x24f81c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f818) {
            ctx->pc = 0x24F8B0u;
            goto label_24f8b0;
        }
    }
    ctx->pc = 0x24F820u;
    // 0x24f820: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F820u;
    {
        const bool branch_taken_0x24f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F820u;
        // 0x24f824: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f820) {
            ctx->pc = 0x24F840u;
            goto label_24f840;
        }
    }
    ctx->pc = 0x24F828u;
    // 0x24f828: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F828u;
    {
        const bool branch_taken_0x24f828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F828u;
        // 0x24f82c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f828) {
            ctx->pc = 0x24F854u;
            goto label_24f854;
        }
    }
    ctx->pc = 0x24F830u;
    // 0x24f830: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F830u;
    {
        const bool branch_taken_0x24f830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F830u;
        // 0x24f834: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f830) {
            ctx->pc = 0x24F858u;
            goto label_24f858;
        }
    }
    ctx->pc = 0x24F838u;
    // 0x24f838: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24F838u;
    {
        const bool branch_taken_0x24f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F838u;
        // 0x24f83c: 0xc640170c  lwc1        $f0, 0x170C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f838) {
            ctx->pc = 0x24F8B4u;
            goto label_24f8b4;
        }
    }
    ctx->pc = 0x24F840u;
label_24f840:
    // 0x24f840: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x24f840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x24f844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F844u;
    {
        const bool branch_taken_0x24f844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F844u;
        // 0x24f848: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f844) {
            ctx->pc = 0x24F854u;
            goto label_24f854;
        }
    }
    ctx->pc = 0x24F84Cu;
    // 0x24f84c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F84Cu;
    {
        const bool branch_taken_0x24f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f84c) {
            ctx->pc = 0x24F850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F84Cu;
            // 0x24f850: 0xc640170c  lwc1        $f0, 0x170C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F8B4u;
            goto label_24f8b4;
        }
    }
    ctx->pc = 0x24F854u;
label_24f854:
    // 0x24f854: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x24f854u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_24f858:
    // 0x24f858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f85c: 0x2630ee00  addiu       $s0, $s1, -0x1200
    ctx->pc = 0x24f85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x24f860: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x24f860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x24f864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f868: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24f868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f86c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f874: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f878: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24F878u;
    SET_GPR_U32(ctx, 31, 0x24F880u);
    ctx->pc = 0x24F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F878u;
    // 0x24f87c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24F878u, 0x24F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F880u;
label_24f880:
    // 0x24f880: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x24f880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f88c: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x24f890: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24f890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f898: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f89c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8a0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24F8A0u;
    SET_GPR_U32(ctx, 31, 0x24F8A8u);
    ctx->pc = 0x24F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8A0u;
    // 0x24f8a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24F8A0u, 0x24F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8A8u;
label_24f8a8:
    // 0x24f8a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24F8A8u;
    {
        const bool branch_taken_0x24f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f8a8) {
            ctx->pc = 0x24F8F0u;
            goto label_24f8f0;
        }
    }
    ctx->pc = 0x24F8B0u;
label_24f8b0:
    // 0x24f8b0: 0xc640170c  lwc1        $f0, 0x170C($s2)
    ctx->pc = 0x24f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24f8b4:
    // 0x24f8b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x24f8b8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24f8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24f8bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f8c0: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x24f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x24f8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f8c8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x24f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24f8cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f8d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24f8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24f8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f8dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24f8e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24F8E4u;
    SET_GPR_U32(ctx, 31, 0x24F8ECu);
    ctx->pc = 0x24F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8E4u;
    // 0x24f8e8: 0xe6401710  swc1        $f0, 0x1710($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5904), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24F8E4u, 0x24F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8ECu;
label_24f8ec:
    // 0x24f8ec: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x24f8ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f8f0:
    // 0x24f8f0: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x24F8F0u;
    SET_GPR_U32(ctx, 31, 0x24F8F8u);
    ctx->pc = 0x24F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8F0u;
    // 0x24f8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x24F8F0u, 0x24F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8F8u;
label_24f8f8:
    // 0x24f8f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F8F8u;
    {
        const bool branch_taken_0x24f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f8f8) {
            ctx->pc = 0x24F920u;
            goto label_24f920;
        }
    }
    ctx->pc = 0x24F900u;
    // 0x24f900: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F900u;
    SET_GPR_U32(ctx, 31, 0x24F908u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F900u, 0x24F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F908u;
label_24f908:
    // 0x24f908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24f908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24f90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F90Cu;
    {
        const bool branch_taken_0x24f90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F90Cu;
        // 0x24f910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f90c) {
            ctx->pc = 0x24F91Cu;
            goto label_24f91c;
        }
    }
    ctx->pc = 0x24F914u;
    // 0x24f914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F914u;
    {
        const bool branch_taken_0x24f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F914u;
        // 0x24f918: 0xa24217c3  sb          $v0, 0x17C3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f914) {
            ctx->pc = 0x24F920u;
            goto label_24f920;
        }
    }
    ctx->pc = 0x24F91Cu;
label_24f91c:
    // 0x24f91c: 0xa24017c3  sb          $zero, 0x17C3($s2)
    ctx->pc = 0x24f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 0));
label_24f920:
    // 0x24f920: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24F920u;
    SET_GPR_U32(ctx, 31, 0x24F928u);
    ctx->pc = 0x24F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F920u;
    // 0x24f924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24F920u, 0x24F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F928u;
label_24f928:
    // 0x24f928: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24f92c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x24f92cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f930: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x24f934: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x24f934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x24f938: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F938u;
    {
        const bool branch_taken_0x24f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F938u;
        // 0x24f93c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f938) {
            ctx->pc = 0x24F958u;
            goto label_24f958;
        }
    }
    ctx->pc = 0x24F940u;
    // 0x24f940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f944: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x24f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x24f948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f94c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f950: 0x800008  jr          $a0
    ctx->pc = 0x24F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F958u: goto label_24f958;
            case 0x24F9B8u: goto label_24f9b8;
            case 0x24FA18u: goto label_24fa18;
            case 0x24FA78u: goto label_24fa78;
            case 0x24FB1Cu: goto label_24fb1c;
            case 0x24FB40u: goto label_24fb40;
            case 0x24FC38u: goto label_24fc38;
            case 0x24FDFCu: goto label_24fdfc;
            case 0x24FE34u: goto label_24fe34;
            case 0x24FE6Cu: goto label_24fe6c;
            case 0x24FECCu: goto label_24fecc;
            case 0x24FF2Cu: goto label_24ff2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24F958u;
label_24f958:
    // 0x24f958: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F958u;
    SET_GPR_U32(ctx, 31, 0x24F960u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F958u, 0x24F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F960u;
label_24f960:
    // 0x24f960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f968: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f968u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f96c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F96Cu;
    {
        const bool branch_taken_0x24f96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f96c) {
            ctx->pc = 0x24F970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F96Cu;
            // 0x24f970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F974u;
            goto label_24f974;
        }
    }
    ctx->pc = 0x24F974u;
label_24f974:
    // 0x24f974: 0x2810  mfhi        $a1
    ctx->pc = 0x24f974u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24f978: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F978u;
    {
        const bool branch_taken_0x24f978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24f978) {
            ctx->pc = 0x24F97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F978u;
            // 0x24f97c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F9A0u;
            goto label_24f9a0;
        }
    }
    ctx->pc = 0x24F980u;
    // 0x24f980: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F980u;
    {
        const bool branch_taken_0x24f980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F980u;
        // 0x24f984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f980) {
            ctx->pc = 0x24F990u;
            goto label_24f990;
        }
    }
    ctx->pc = 0x24F988u;
    // 0x24f988: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F988u;
    {
        const bool branch_taken_0x24f988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f988) {
            ctx->pc = 0x24F98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F988u;
            // 0x24f98c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F9ACu;
            goto label_24f9ac;
        }
    }
    ctx->pc = 0x24F990u;
label_24f990:
    // 0x24f990: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24f994: 0x8c430548  lw          $v1, 0x548($v0)
    ctx->pc = 0x24f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x24f998: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x24F998u;
    {
        const bool branch_taken_0x24f998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F998u;
        // 0x24f99c: 0x8c44054c  lw          $a0, 0x54C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f998) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24F9A0u;
label_24f9a0:
    // 0x24f9a0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
    // 0x24f9a4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x24F9A4u;
    {
        const bool branch_taken_0x24f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9A4u;
        // 0x24f9a8: 0x8c440554  lw          $a0, 0x554($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9a4) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24F9ACu;
label_24f9ac:
    // 0x24f9ac: 0x8c430558  lw          $v1, 0x558($v0)
    ctx->pc = 0x24f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
    // 0x24f9b0: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x24F9B0u;
    {
        const bool branch_taken_0x24f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9B0u;
        // 0x24f9b4: 0x8c44055c  lw          $a0, 0x55C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9b0) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24F9B8u;
label_24f9b8:
    // 0x24f9b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24F9B8u;
    SET_GPR_U32(ctx, 31, 0x24F9C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24F9B8u, 0x24F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9C0u;
label_24f9c0:
    // 0x24f9c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f9c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24f9c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24f9cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F9CCu;
    {
        const bool branch_taken_0x24f9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f9cc) {
            ctx->pc = 0x24F9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9CCu;
            // 0x24f9d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F9D4u;
            goto label_24f9d4;
        }
    }
    ctx->pc = 0x24F9D4u;
label_24f9d4:
    // 0x24f9d4: 0x2810  mfhi        $a1
    ctx->pc = 0x24f9d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24f9d8: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F9D8u;
    {
        const bool branch_taken_0x24f9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24f9d8) {
            ctx->pc = 0x24F9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9D8u;
            // 0x24f9dc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA00u;
            goto label_24fa00;
        }
    }
    ctx->pc = 0x24F9E0u;
    // 0x24f9e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F9E0u;
    {
        const bool branch_taken_0x24f9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9E0u;
        // 0x24f9e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9e0) {
            ctx->pc = 0x24F9F0u;
            goto label_24f9f0;
        }
    }
    ctx->pc = 0x24F9E8u;
    // 0x24f9e8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F9E8u;
    {
        const bool branch_taken_0x24f9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f9e8) {
            ctx->pc = 0x24F9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9E8u;
            // 0x24f9ec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA0Cu;
            goto label_24fa0c;
        }
    }
    ctx->pc = 0x24F9F0u;
label_24f9f0:
    // 0x24f9f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24f9f4: 0x8c430e3c  lw          $v1, 0xE3C($v0)
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3644)));
    // 0x24f9f8: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x24F9F8u;
    {
        const bool branch_taken_0x24f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9F8u;
        // 0x24f9fc: 0x8c440e40  lw          $a0, 0xE40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9f8) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA00u;
label_24fa00:
    // 0x24fa00: 0x8c430e44  lw          $v1, 0xE44($v0)
    ctx->pc = 0x24fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3652)));
    // 0x24fa04: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x24FA04u;
    {
        const bool branch_taken_0x24fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA04u;
        // 0x24fa08: 0x8c440e48  lw          $a0, 0xE48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa04) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA0Cu;
label_24fa0c:
    // 0x24fa0c: 0x8c430e4c  lw          $v1, 0xE4C($v0)
    ctx->pc = 0x24fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x24fa10: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x24FA10u;
    {
        const bool branch_taken_0x24fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA10u;
        // 0x24fa14: 0x8c440e50  lw          $a0, 0xE50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa10) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA18u;
label_24fa18:
    // 0x24fa18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FA18u;
    SET_GPR_U32(ctx, 31, 0x24FA20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FA18u, 0x24FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA20u;
label_24fa20:
    // 0x24fa20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fa24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fa28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24fa28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24fa2c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FA2Cu;
    {
        const bool branch_taken_0x24fa2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa2c) {
            ctx->pc = 0x24FA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA2Cu;
            // 0x24fa30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24FA34u;
label_24fa34:
    // 0x24fa34: 0x2810  mfhi        $a1
    ctx->pc = 0x24fa34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24fa38: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FA38u;
    {
        const bool branch_taken_0x24fa38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24fa38) {
            ctx->pc = 0x24FA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA38u;
            // 0x24fa3c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA60u;
            goto label_24fa60;
        }
    }
    ctx->pc = 0x24FA40u;
    // 0x24fa40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA40u;
    {
        const bool branch_taken_0x24fa40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA40u;
        // 0x24fa44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa40) {
            ctx->pc = 0x24FA50u;
            goto label_24fa50;
        }
    }
    ctx->pc = 0x24FA48u;
    // 0x24fa48: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FA48u;
    {
        const bool branch_taken_0x24fa48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fa48) {
            ctx->pc = 0x24FA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA48u;
            // 0x24fa4c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA6Cu;
            goto label_24fa6c;
        }
    }
    ctx->pc = 0x24FA50u;
label_24fa50:
    // 0x24fa50: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fa54: 0x8c4309f8  lw          $v1, 0x9F8($v0)
    ctx->pc = 0x24fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x24fa58: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x24FA58u;
    {
        const bool branch_taken_0x24fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA58u;
        // 0x24fa5c: 0x8c4409fc  lw          $a0, 0x9FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa58) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA60u;
label_24fa60:
    // 0x24fa60: 0x8c430a00  lw          $v1, 0xA00($v0)
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x24fa64: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x24FA64u;
    {
        const bool branch_taken_0x24fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA64u;
        // 0x24fa68: 0x8c440a04  lw          $a0, 0xA04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa64) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA6Cu;
label_24fa6c:
    // 0x24fa6c: 0x8c430a08  lw          $v1, 0xA08($v0)
    ctx->pc = 0x24fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2568)));
    // 0x24fa70: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x24FA70u;
    {
        const bool branch_taken_0x24fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA70u;
        // 0x24fa74: 0x8c440a0c  lw          $a0, 0xA0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa70) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FA78u;
label_24fa78:
    // 0x24fa78: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FA78u;
    SET_GPR_U32(ctx, 31, 0x24FA80u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FA78u, 0x24FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA80u;
label_24fa80:
    // 0x24fa80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fa84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fa88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24fa88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24fa8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FA8Cu;
    {
        const bool branch_taken_0x24fa8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa8c) {
            ctx->pc = 0x24FA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA8Cu;
            // 0x24fa90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA94u;
            goto label_24fa94;
        }
    }
    ctx->pc = 0x24FA94u;
label_24fa94:
    // 0x24fa94: 0x2810  mfhi        $a1
    ctx->pc = 0x24fa94u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24fa98: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FA98u;
    {
        const bool branch_taken_0x24fa98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24fa98) {
            ctx->pc = 0x24FA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA98u;
            // 0x24fa9c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FAC0u;
            goto label_24fac0;
        }
    }
    ctx->pc = 0x24FAA0u;
    // 0x24faa0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FAA0u;
    {
        const bool branch_taken_0x24faa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAA0u;
        // 0x24faa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24faa0) {
            ctx->pc = 0x24FAB0u;
            goto label_24fab0;
        }
    }
    ctx->pc = 0x24FAA8u;
    // 0x24faa8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FAA8u;
    {
        const bool branch_taken_0x24faa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24faa8) {
            ctx->pc = 0x24FAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FAA8u;
            // 0x24faac: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FACCu;
            goto label_24facc;
        }
    }
    ctx->pc = 0x24FAB0u;
label_24fab0:
    // 0x24fab0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fab4: 0x8c4309f8  lw          $v1, 0x9F8($v0)
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x24fab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24FAB8u;
    {
        const bool branch_taken_0x24fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAB8u;
        // 0x24fabc: 0x8c4409fc  lw          $a0, 0x9FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fab8) {
            ctx->pc = 0x24FAD4u;
            goto label_24fad4;
        }
    }
    ctx->pc = 0x24FAC0u;
label_24fac0:
    // 0x24fac0: 0x8c430a00  lw          $v1, 0xA00($v0)
    ctx->pc = 0x24fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x24fac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24FAC4u;
    {
        const bool branch_taken_0x24fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAC4u;
        // 0x24fac8: 0x8c440a04  lw          $a0, 0xA04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fac4) {
            ctx->pc = 0x24FAD4u;
            goto label_24fad4;
        }
    }
    ctx->pc = 0x24FACCu;
label_24facc:
    // 0x24facc: 0x8c430a08  lw          $v1, 0xA08($v0)
    ctx->pc = 0x24faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2568)));
    // 0x24fad0: 0x8c440a0c  lw          $a0, 0xA0C($v0)
    ctx->pc = 0x24fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2572)));
label_24fad4:
    // 0x24fad4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fad4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fad8: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24fadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24fadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fae0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24FAE0u;
    SET_GPR_U32(ctx, 31, 0x24FAE8u);
    ctx->pc = 0x24FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FAE0u;
    // 0x24fae4: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24FAE0u, 0x24FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FAE8u;
label_24fae8:
    // 0x24fae8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24faec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24faf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24faf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24faf8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24faf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24fafc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24fafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24fb00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24fb04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24fb08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb0c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24FB0Cu;
    SET_GPR_U32(ctx, 31, 0x24FB14u);
    ctx->pc = 0x24FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB0Cu;
    // 0x24fb10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24FB0Cu, 0x24FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB14u;
label_24fb14:
    // 0x24fb14: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x24FB14u;
    {
        const bool branch_taken_0x24fb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fb14) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FB1Cu;
label_24fb1c:
    // 0x24fb1c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x24fb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x24fb20: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FB20u;
    {
        const bool branch_taken_0x24fb20 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x24FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB20u;
        // 0x24fb24: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb20) {
            ctx->pc = 0x24FB34u;
            goto label_24fb34;
        }
    }
    ctx->pc = 0x24FB28u;
    // 0x24fb28: 0x8c43315c  lw          $v1, 0x315C($v0)
    ctx->pc = 0x24fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12636)));
    // 0x24fb2c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x24FB2Cu;
    {
        const bool branch_taken_0x24fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB2Cu;
        // 0x24fb30: 0x8c443160  lw          $a0, 0x3160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb2c) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FB34u;
label_24fb34:
    // 0x24fb34: 0x8c433154  lw          $v1, 0x3154($v0)
    ctx->pc = 0x24fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12628)));
    // 0x24fb38: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x24FB38u;
    {
        const bool branch_taken_0x24fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB38u;
        // 0x24fb3c: 0x8c443158  lw          $a0, 0x3158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb38) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FB40u;
label_24fb40:
    // 0x24fb40: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fb44: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x24fb44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x24fb48: 0x8c433328  lw          $v1, 0x3328($v0)
    ctx->pc = 0x24fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13096)));
    // 0x24fb4c: 0x8c44332c  lw          $a0, 0x332C($v0)
    ctx->pc = 0x24fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13100)));
    // 0x24fb50: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fb54: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FB54u;
    {
        const bool branch_taken_0x24fb54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB54u;
        // 0x24fb58: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb54) {
            ctx->pc = 0x24FB68u;
            goto label_24fb68;
        }
    }
    ctx->pc = 0x24FB5Cu;
    // 0x24fb5c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb60: 0xc09f6c8  jal         func_27DB20
    ctx->pc = 0x24FB60u;
    SET_GPR_U32(ctx, 31, 0x24FB68u);
    ctx->pc = 0x24FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB60u;
    // 0x24fb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB20u, 0x24FB60u, 0x24FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB68u;
label_24fb68:
    // 0x24fb68: 0x8e430698  lw          $v1, 0x698($s2)
    ctx->pc = 0x24fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x24fb6c: 0x10600108  beqz        $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x24FB6Cu;
    {
        const bool branch_taken_0x24fb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fb6c) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FB74u;
    // 0x24fb74: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24fb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24fb78: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x24FB78u;
    {
        const bool branch_taken_0x24fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB78u;
        // 0x24fb7c: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb78) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FB80u;
    // 0x24fb80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24fb80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fb84: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x24fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24fb88: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x24fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24fb8c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24fb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24fb90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fb90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fb94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24fb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fb98: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24FB98u;
    SET_GPR_U32(ctx, 31, 0x24FBA0u);
    ctx->pc = 0x24FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB98u;
    // 0x24fb9c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24FB98u, 0x24FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBA0u;
label_24fba0:
    // 0x24fba0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24fba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24fba4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24fba4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x24fba8: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x24FBA8u;
    SET_GPR_U32(ctx, 31, 0x24FBB0u);
    ctx->pc = 0x24FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBA8u;
    // 0x24fbac: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x24FBA8u, 0x24FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBB0u;
label_24fbb0:
    // 0x24fbb0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24fbb0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24fbb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fbb8: 0x0  nop
    ctx->pc = 0x24fbb8u;
    // NOP
    // 0x24fbbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fbc0: 0x0  nop
    ctx->pc = 0x24fbc0u;
    // NOP
    // 0x24fbc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24FBC4u;
    {
        const bool branch_taken_0x24fbc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBC4u;
        // 0x24fbc8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbc4) {
            ctx->pc = 0x24FBD0u;
            goto label_24fbd0;
        }
    }
    ctx->pc = 0x24FBCCu;
    // 0x24fbcc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x24fbccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_24fbd0:
    // 0x24fbd0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x24fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x24fbd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fbd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fbdc: 0x0  nop
    ctx->pc = 0x24fbdcu;
    // NOP
    // 0x24fbe0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24fbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fbe4: 0x0  nop
    ctx->pc = 0x24fbe4u;
    // NOP
    // 0x24fbe8: 0x450000e9  bc1f        . + 4 + (0xE9 << 2)
    ctx->pc = 0x24FBE8u;
    {
        const bool branch_taken_0x24fbe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fbe8) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FBF0u;
    // 0x24fbf0: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x24fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fbf4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24fbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x24fbf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24fbf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x24fbfc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24FBFCu;
    SET_GPR_U32(ctx, 31, 0x24FC04u);
    ctx->pc = 0x24FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FBFCu;
    // 0x24fc00: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24FBFCu, 0x24FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC04u;
label_24fc04:
    // 0x24fc04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fc08: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x24fc0c: 0x8e450740  lw          $a1, 0x740($s2)
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x24fc10: 0x8c433330  lw          $v1, 0x3330($v0)
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13104)));
    // 0x24fc14: 0x8c443334  lw          $a0, 0x3334($v0)
    ctx->pc = 0x24fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13108)));
    // 0x24fc18: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fc18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fc1c: 0x10a000dc  beqz        $a1, . + 4 + (0xDC << 2)
    ctx->pc = 0x24FC1Cu;
    {
        const bool branch_taken_0x24fc1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC1Cu;
        // 0x24fc20: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc1c) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FC24u;
    // 0x24fc24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24fc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc28: 0xc09f6c8  jal         func_27DB20
    ctx->pc = 0x24FC28u;
    SET_GPR_U32(ctx, 31, 0x24FC30u);
    ctx->pc = 0x24FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC28u;
    // 0x24fc2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB20u, 0x24FC28u, 0x24FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC30u;
label_24fc30:
    // 0x24fc30: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x24FC30u;
    {
        const bool branch_taken_0x24fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fc30) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FC38u;
label_24fc38:
    // 0x24fc38: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x24fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x24fc3c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x24fc40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24fc44: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24FC44u;
    {
        const bool branch_taken_0x24fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC44u;
        // 0x24fc48: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc44) {
            ctx->pc = 0x24FD08u;
            goto label_24fd08;
        }
    }
    ctx->pc = 0x24FC4Cu;
    // 0x24fc4c: 0x8e450698  lw          $a1, 0x698($s2)
    ctx->pc = 0x24fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x24fc50: 0x8c433968  lw          $v1, 0x3968($v0)
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14696)));
    // 0x24fc54: 0x8c44396c  lw          $a0, 0x396C($v0)
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14700)));
    // 0x24fc58: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fc58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fc5c: 0x10a000cc  beqz        $a1, . + 4 + (0xCC << 2)
    ctx->pc = 0x24FC5Cu;
    {
        const bool branch_taken_0x24fc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC5Cu;
        // 0x24fc60: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc5c) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FC64u;
    // 0x24fc64: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24fc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24fc68: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x24FC68u;
    {
        const bool branch_taken_0x24fc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC68u;
        // 0x24fc6c: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc68) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FC70u;
    // 0x24fc70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24fc70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fc74: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x24fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24fc78: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x24fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24fc7c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24fc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24fc80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fc84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24fc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fc88: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24FC88u;
    SET_GPR_U32(ctx, 31, 0x24FC90u);
    ctx->pc = 0x24FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC88u;
    // 0x24fc8c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24FC88u, 0x24FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC90u;
label_24fc90:
    // 0x24fc90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24fc90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24fc94: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24fc94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x24fc98: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x24FC98u;
    SET_GPR_U32(ctx, 31, 0x24FCA0u);
    ctx->pc = 0x24FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC98u;
    // 0x24fc9c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x24FC98u, 0x24FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCA0u;
label_24fca0:
    // 0x24fca0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24fca0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24fca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fca8: 0x0  nop
    ctx->pc = 0x24fca8u;
    // NOP
    // 0x24fcac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fcb0: 0x0  nop
    ctx->pc = 0x24fcb0u;
    // NOP
    // 0x24fcb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24FCB4u;
    {
        const bool branch_taken_0x24fcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCB4u;
        // 0x24fcb8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcb4) {
            ctx->pc = 0x24FCC0u;
            goto label_24fcc0;
        }
    }
    ctx->pc = 0x24FCBCu;
    // 0x24fcbc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x24fcbcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_24fcc0:
    // 0x24fcc0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x24fcc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fcc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fccc: 0x0  nop
    ctx->pc = 0x24fcccu;
    // NOP
    // 0x24fcd0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24fcd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fcd4: 0x0  nop
    ctx->pc = 0x24fcd4u;
    // NOP
    // 0x24fcd8: 0x450000ad  bc1f        . + 4 + (0xAD << 2)
    ctx->pc = 0x24FCD8u;
    {
        const bool branch_taken_0x24fcd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fcd8) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FCE0u;
    // 0x24fce0: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x24fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fce4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24fce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x24fce8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24fce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x24fcec: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24FCECu;
    SET_GPR_U32(ctx, 31, 0x24FCF4u);
    ctx->pc = 0x24FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FCECu;
    // 0x24fcf0: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24FCECu, 0x24FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCF4u;
label_24fcf4:
    // 0x24fcf4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fcf8: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x24fcfc: 0x8c433970  lw          $v1, 0x3970($v0)
    ctx->pc = 0x24fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14704)));
    // 0x24fd00: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x24FD00u;
    {
        const bool branch_taken_0x24fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD00u;
        // 0x24fd04: 0x8c443974  lw          $a0, 0x3974($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd00) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FD08u;
label_24fd08:
    // 0x24fd08: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x24fd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24fd0c: 0x8c433840  lw          $v1, 0x3840($v0)
    ctx->pc = 0x24fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14400)));
    // 0x24fd10: 0x8c443844  lw          $a0, 0x3844($v0)
    ctx->pc = 0x24fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14404)));
    // 0x24fd14: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fd18: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FD18u;
    {
        const bool branch_taken_0x24fd18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD18u;
        // 0x24fd1c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd18) {
            ctx->pc = 0x24FD2Cu;
            goto label_24fd2c;
        }
    }
    ctx->pc = 0x24FD20u;
    // 0x24fd20: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd24: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24FD24u;
    SET_GPR_U32(ctx, 31, 0x24FD2Cu);
    ctx->pc = 0x24FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD24u;
    // 0x24fd28: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24FD24u, 0x24FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD2Cu;
label_24fd2c:
    // 0x24fd2c: 0x8e430698  lw          $v1, 0x698($s2)
    ctx->pc = 0x24fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x24fd30: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x24FD30u;
    {
        const bool branch_taken_0x24fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd30) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FD38u;
    // 0x24fd38: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x24fd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24fd3c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x24FD3Cu;
    {
        const bool branch_taken_0x24fd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD3Cu;
        // 0x24fd40: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd3c) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FD44u;
    // 0x24fd44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24fd44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fd48: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x24fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24fd4c: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x24fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24fd50: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24fd54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fd54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fd58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24fd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fd5c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24FD5Cu;
    SET_GPR_U32(ctx, 31, 0x24FD64u);
    ctx->pc = 0x24FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD5Cu;
    // 0x24fd60: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24FD5Cu, 0x24FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD64u;
label_24fd64:
    // 0x24fd64: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x24fd64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x24fd68: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24fd68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x24fd6c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x24FD6Cu;
    SET_GPR_U32(ctx, 31, 0x24FD74u);
    ctx->pc = 0x24FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD6Cu;
    // 0x24fd70: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x24FD6Cu, 0x24FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD74u;
label_24fd74:
    // 0x24fd74: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24fd74u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24fd78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fd7c: 0x0  nop
    ctx->pc = 0x24fd7cu;
    // NOP
    // 0x24fd80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd84: 0x0  nop
    ctx->pc = 0x24fd84u;
    // NOP
    // 0x24fd88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24FD88u;
    {
        const bool branch_taken_0x24fd88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD88u;
        // 0x24fd8c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd88) {
            ctx->pc = 0x24FD94u;
            goto label_24fd94;
        }
    }
    ctx->pc = 0x24FD90u;
    // 0x24fd90: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x24fd90u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_24fd94:
    // 0x24fd94: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x24fd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x24fd98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24fd98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24fd9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fda0: 0x0  nop
    ctx->pc = 0x24fda0u;
    // NOP
    // 0x24fda4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24fda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fda8: 0x0  nop
    ctx->pc = 0x24fda8u;
    // NOP
    // 0x24fdac: 0x45000078  bc1f        . + 4 + (0x78 << 2)
    ctx->pc = 0x24FDACu;
    {
        const bool branch_taken_0x24fdac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fdac) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FDB4u;
    // 0x24fdb4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x24fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fdb8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24fdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x24fdbc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24fdbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x24fdc0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24FDC0u;
    SET_GPR_U32(ctx, 31, 0x24FDC8u);
    ctx->pc = 0x24FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDC0u;
    // 0x24fdc4: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24FDC0u, 0x24FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDC8u;
label_24fdc8:
    // 0x24fdc8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fdcc: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x24fdd0: 0x8e450744  lw          $a1, 0x744($s2)
    ctx->pc = 0x24fdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x24fdd4: 0x8c433848  lw          $v1, 0x3848($v0)
    ctx->pc = 0x24fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14408)));
    // 0x24fdd8: 0x8c44384c  lw          $a0, 0x384C($v0)
    ctx->pc = 0x24fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14412)));
    // 0x24fddc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24fddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fde0: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x24FDE0u;
    {
        const bool branch_taken_0x24fde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDE0u;
        // 0x24fde4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fde0) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FDE8u;
    // 0x24fde8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdec: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24FDECu;
    SET_GPR_U32(ctx, 31, 0x24FDF4u);
    ctx->pc = 0x24FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDECu;
    // 0x24fdf0: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24FDECu, 0x24FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDF4u;
label_24fdf4:
    // 0x24fdf4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x24FDF4u;
    {
        const bool branch_taken_0x24fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fdf4) {
            ctx->pc = 0x24FF90u;
            goto label_24ff90;
        }
    }
    ctx->pc = 0x24FDFCu;
label_24fdfc:
    // 0x24fdfc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FDFCu;
    SET_GPR_U32(ctx, 31, 0x24FE04u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FDFCu, 0x24FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE04u;
label_24fe04:
    // 0x24fe04: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24fe08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FE08u;
    {
        const bool branch_taken_0x24fe08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE08u;
        // 0x24fe0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe08) {
            ctx->pc = 0x24FE18u;
            goto label_24fe18;
        }
    }
    ctx->pc = 0x24FE10u;
    // 0x24fe10: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE10u;
    {
        const bool branch_taken_0x24fe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fe10) {
            ctx->pc = 0x24FE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE10u;
            // 0x24fe14: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FE28u;
            goto label_24fe28;
        }
    }
    ctx->pc = 0x24FE18u;
label_24fe18:
    // 0x24fe18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fe1c: 0x8c4316b0  lw          $v1, 0x16B0($v0)
    ctx->pc = 0x24fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5808)));
    // 0x24fe20: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x24FE20u;
    {
        const bool branch_taken_0x24fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE20u;
        // 0x24fe24: 0x8c4416b4  lw          $a0, 0x16B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe20) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FE28u;
label_24fe28:
    // 0x24fe28: 0x8c4316b8  lw          $v1, 0x16B8($v0)
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
    // 0x24fe2c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x24FE2Cu;
    {
        const bool branch_taken_0x24fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE2Cu;
        // 0x24fe30: 0x8c4416bc  lw          $a0, 0x16BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe2c) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FE34u;
label_24fe34:
    // 0x24fe34: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FE34u;
    SET_GPR_U32(ctx, 31, 0x24FE3Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FE34u, 0x24FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE3Cu;
label_24fe3c:
    // 0x24fe3c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24fe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24fe40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FE40u;
    {
        const bool branch_taken_0x24fe40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE40u;
        // 0x24fe44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe40) {
            ctx->pc = 0x24FE50u;
            goto label_24fe50;
        }
    }
    ctx->pc = 0x24FE48u;
    // 0x24fe48: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE48u;
    {
        const bool branch_taken_0x24fe48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fe48) {
            ctx->pc = 0x24FE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE48u;
            // 0x24fe4c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FE60u;
            goto label_24fe60;
        }
    }
    ctx->pc = 0x24FE50u;
label_24fe50:
    // 0x24fe50: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fe54: 0x8c4316b0  lw          $v1, 0x16B0($v0)
    ctx->pc = 0x24fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5808)));
    // 0x24fe58: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24FE58u;
    {
        const bool branch_taken_0x24fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE58u;
        // 0x24fe5c: 0x8c4416b4  lw          $a0, 0x16B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe58) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FE60u;
label_24fe60:
    // 0x24fe60: 0x8c4316b8  lw          $v1, 0x16B8($v0)
    ctx->pc = 0x24fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
    // 0x24fe64: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x24FE64u;
    {
        const bool branch_taken_0x24fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE64u;
        // 0x24fe68: 0x8c4416bc  lw          $a0, 0x16BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe64) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FE6Cu;
label_24fe6c:
    // 0x24fe6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FE6Cu;
    SET_GPR_U32(ctx, 31, 0x24FE74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FE6Cu, 0x24FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE74u;
label_24fe74:
    // 0x24fe74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fe78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fe7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24fe7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24fe80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FE80u;
    {
        const bool branch_taken_0x24fe80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fe80) {
            ctx->pc = 0x24FE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE80u;
            // 0x24fe84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FE88u;
            goto label_24fe88;
        }
    }
    ctx->pc = 0x24FE88u;
label_24fe88:
    // 0x24fe88: 0x2810  mfhi        $a1
    ctx->pc = 0x24fe88u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24fe8c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FE8Cu;
    {
        const bool branch_taken_0x24fe8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24fe8c) {
            ctx->pc = 0x24FE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE8Cu;
            // 0x24fe90: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEB4u;
            goto label_24feb4;
        }
    }
    ctx->pc = 0x24FE94u;
    // 0x24fe94: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FE94u;
    {
        const bool branch_taken_0x24fe94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE94u;
        // 0x24fe98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe94) {
            ctx->pc = 0x24FEA4u;
            goto label_24fea4;
        }
    }
    ctx->pc = 0x24FE9Cu;
    // 0x24fe9c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FE9Cu;
    {
        const bool branch_taken_0x24fe9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fe9c) {
            ctx->pc = 0x24FEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE9Cu;
            // 0x24fea0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEC0u;
            goto label_24fec0;
        }
    }
    ctx->pc = 0x24FEA4u;
label_24fea4:
    // 0x24fea4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24fea8: 0x8c430548  lw          $v1, 0x548($v0)
    ctx->pc = 0x24fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x24feac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x24FEACu;
    {
        const bool branch_taken_0x24feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEACu;
        // 0x24feb0: 0x8c44054c  lw          $a0, 0x54C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24feac) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FEB4u;
label_24feb4:
    // 0x24feb4: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x24feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
    // 0x24feb8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x24FEB8u;
    {
        const bool branch_taken_0x24feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEB8u;
        // 0x24febc: 0x8c440554  lw          $a0, 0x554($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24feb8) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FEC0u;
label_24fec0:
    // 0x24fec0: 0x8c430558  lw          $v1, 0x558($v0)
    ctx->pc = 0x24fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
    // 0x24fec4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24FEC4u;
    {
        const bool branch_taken_0x24fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEC4u;
        // 0x24fec8: 0x8c44055c  lw          $a0, 0x55C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fec4) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FECCu;
label_24fecc:
    // 0x24fecc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FECCu;
    SET_GPR_U32(ctx, 31, 0x24FED4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FECCu, 0x24FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FED4u;
label_24fed4:
    // 0x24fed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fedc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24fedcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24fee0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FEE0u;
    {
        const bool branch_taken_0x24fee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fee0) {
            ctx->pc = 0x24FEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FEE0u;
            // 0x24fee4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEE8u;
            goto label_24fee8;
        }
    }
    ctx->pc = 0x24FEE8u;
label_24fee8:
    // 0x24fee8: 0x2810  mfhi        $a1
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24feec: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FEECu;
    {
        const bool branch_taken_0x24feec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24feec) {
            ctx->pc = 0x24FEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FEECu;
            // 0x24fef0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF14u;
            goto label_24ff14;
        }
    }
    ctx->pc = 0x24FEF4u;
    // 0x24fef4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FEF4u;
    {
        const bool branch_taken_0x24fef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEF4u;
        // 0x24fef8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fef4) {
            ctx->pc = 0x24FF04u;
            goto label_24ff04;
        }
    }
    ctx->pc = 0x24FEFCu;
    // 0x24fefc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FEFCu;
    {
        const bool branch_taken_0x24fefc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fefc) {
            ctx->pc = 0x24FF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FEFCu;
            // 0x24ff00: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF20u;
            goto label_24ff20;
        }
    }
    ctx->pc = 0x24FF04u;
label_24ff04:
    // 0x24ff04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24ff08: 0x8c432e84  lw          $v1, 0x2E84($v0)
    ctx->pc = 0x24ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11908)));
    // 0x24ff0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24FF0Cu;
    {
        const bool branch_taken_0x24ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF0Cu;
        // 0x24ff10: 0x8c442e88  lw          $a0, 0x2E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff0c) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FF14u;
label_24ff14:
    // 0x24ff14: 0x8c432e84  lw          $v1, 0x2E84($v0)
    ctx->pc = 0x24ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11908)));
    // 0x24ff18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24FF18u;
    {
        const bool branch_taken_0x24ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF18u;
        // 0x24ff1c: 0x8c442e88  lw          $a0, 0x2E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff18) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FF20u;
label_24ff20:
    // 0x24ff20: 0x8c432e84  lw          $v1, 0x2E84($v0)
    ctx->pc = 0x24ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11908)));
    // 0x24ff24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24FF24u;
    {
        const bool branch_taken_0x24ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF24u;
        // 0x24ff28: 0x8c442e88  lw          $a0, 0x2E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff24) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FF2Cu;
label_24ff2c:
    // 0x24ff2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24FF2Cu;
    SET_GPR_U32(ctx, 31, 0x24FF34u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24FF2Cu, 0x24FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF34u;
label_24ff34:
    // 0x24ff34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ff38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ff3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ff3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ff40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FF40u;
    {
        const bool branch_taken_0x24ff40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ff40) {
            ctx->pc = 0x24FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF40u;
            // 0x24ff44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF48u;
            goto label_24ff48;
        }
    }
    ctx->pc = 0x24FF48u;
label_24ff48:
    // 0x24ff48: 0x2810  mfhi        $a1
    ctx->pc = 0x24ff48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24ff4c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FF4Cu;
    {
        const bool branch_taken_0x24ff4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ff4c) {
            ctx->pc = 0x24FF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF4Cu;
            // 0x24ff50: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF74u;
            goto label_24ff74;
        }
    }
    ctx->pc = 0x24FF54u;
    // 0x24ff54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FF54u;
    {
        const bool branch_taken_0x24ff54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF54u;
        // 0x24ff58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff54) {
            ctx->pc = 0x24FF64u;
            goto label_24ff64;
        }
    }
    ctx->pc = 0x24FF5Cu;
    // 0x24ff5c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FF5Cu;
    {
        const bool branch_taken_0x24ff5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ff5c) {
            ctx->pc = 0x24FF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF5Cu;
            // 0x24ff60: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF80u;
            goto label_24ff80;
        }
    }
    ctx->pc = 0x24FF64u;
label_24ff64:
    // 0x24ff64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24ff68: 0x8c431270  lw          $v1, 0x1270($v0)
    ctx->pc = 0x24ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
    // 0x24ff6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24FF6Cu;
    {
        const bool branch_taken_0x24ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF6Cu;
        // 0x24ff70: 0x8c441274  lw          $a0, 0x1274($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff6c) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FF74u;
label_24ff74:
    // 0x24ff74: 0x8c431278  lw          $v1, 0x1278($v0)
    ctx->pc = 0x24ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x24ff78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24FF78u;
    {
        const bool branch_taken_0x24ff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF78u;
        // 0x24ff7c: 0x8c44127c  lw          $a0, 0x127C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff78) {
            ctx->pc = 0x24FF88u;
            goto label_24ff88;
        }
    }
    ctx->pc = 0x24FF80u;
label_24ff80:
    // 0x24ff80: 0x8c431280  lw          $v1, 0x1280($v0)
    ctx->pc = 0x24ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
    // 0x24ff84: 0x8c441284  lw          $a0, 0x1284($v0)
    ctx->pc = 0x24ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
label_24ff88:
    // 0x24ff88: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24ff88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ff8c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x24ff8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24ff90:
    // 0x24ff90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24ff90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ff94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24ff98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff9c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x24ff9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffa0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ffa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24ffa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24FFACu;
    SET_GPR_U32(ctx, 31, 0x24FFB4u);
    ctx->pc = 0x24FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFACu;
    // 0x24ffb0: 0x26b0ee00  addiu       $s0, $s5, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24FFACu, 0x24FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFB4u;
label_24ffb4:
    // 0x24ffb4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24FFB4u;
    SET_GPR_U32(ctx, 31, 0x24FFBCu);
    ctx->pc = 0x24FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFB4u;
    // 0x24ffb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24FFB4u, 0x24FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFBCu;
label_24ffbc:
    // 0x24ffbc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x24ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x24ffc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24ffc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ffc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24ffc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ffccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffd0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24ffd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24ffd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ffd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24ffd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24ffdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffe0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24FFE0u;
    SET_GPR_U32(ctx, 31, 0x24FFE8u);
    ctx->pc = 0x24FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFE0u;
    // 0x24ffe4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24FFE0u, 0x24FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFE8u;
label_24ffe8:
    // 0x24ffe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffec: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x24fff0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fff8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24fff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24fffc: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x24FFFCu;
    SET_GPR_U32(ctx, 31, 0x250004u);
    ctx->pc = 0x250000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFFCu;
    // 0x250000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x24FFFCu, 0x250004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250004u;
label_250004:
    // 0x250004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250008: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x250008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x25000c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x25000cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x250010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x250010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250014: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x250014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250018: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x250018u;
    SET_GPR_U32(ctx, 31, 0x250020u);
    ctx->pc = 0x25001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250018u;
    // 0x25001c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x250018u, 0x250020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250020u;
label_250020:
    // 0x250020: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x250020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x250024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250028: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x250028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_25002c:
    // 0x25002c: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x25002cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x250030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250034: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x250034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x250038: 0xc055f06  jal         func_157C18
    ctx->pc = 0x250038u;
    SET_GPR_U32(ctx, 31, 0x250040u);
    ctx->pc = 0x25003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250038u;
    // 0x25003c: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x250038u, 0x250040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250040u;
label_250040:
    // 0x250040: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x250040u;
    {
        const bool branch_taken_0x250040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250040u;
        // 0x250044: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250040) {
            ctx->pc = 0x2500ECu;
            goto label_2500ec;
        }
    }
    ctx->pc = 0x250048u;
    // 0x250048: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x250048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x25004c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25004Cu;
    {
        const bool branch_taken_0x25004c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25004Cu;
        // 0x250050: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25004c) {
            ctx->pc = 0x2500A0u;
            goto label_2500a0;
        }
    }
    ctx->pc = 0x250054u;
    // 0x250054: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250054u;
    {
        const bool branch_taken_0x250054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250054u;
        // 0x250058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250054) {
            ctx->pc = 0x250074u;
            goto label_250074;
        }
    }
    ctx->pc = 0x25005Cu;
    // 0x25005c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x25005cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x250060: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250060u;
    {
        const bool branch_taken_0x250060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250060u;
        // 0x250064: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250060) {
            ctx->pc = 0x250070u;
            goto label_250070;
        }
    }
    ctx->pc = 0x250068u;
    // 0x250068: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x250068u;
    {
        const bool branch_taken_0x250068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250068) {
            ctx->pc = 0x25006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250068u;
            // 0x25006c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2500CCu;
            goto label_2500cc;
        }
    }
    ctx->pc = 0x250070u;
label_250070:
    // 0x250070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_250074:
    // 0x250074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250078: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x250078u;
    SET_GPR_U32(ctx, 31, 0x250080u);
    ctx->pc = 0x25007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250078u;
    // 0x25007c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x250078u, 0x250080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250080u;
label_250080:
    // 0x250080: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x250080u;
    {
        const bool branch_taken_0x250080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250080u;
        // 0x250084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250080) {
            ctx->pc = 0x2500ECu;
            goto label_2500ec;
        }
    }
    ctx->pc = 0x250088u;
    // 0x250088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x250088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25008c: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x25008cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x250090: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x250090u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x250094: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x250094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x250098: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x250098u;
    {
        const bool branch_taken_0x250098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250098u;
        // 0x25009c: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250098) {
            ctx->pc = 0x2508ACu;
            goto label_2508ac;
        }
    }
    ctx->pc = 0x2500A0u;
label_2500a0:
    // 0x2500a0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2500a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2500a4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2500A4u;
    {
        const bool branch_taken_0x2500a4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2500A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500A4u;
        // 0x2500a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500a4) {
            ctx->pc = 0x2500BCu;
            goto label_2500bc;
        }
    }
    ctx->pc = 0x2500ACu;
    // 0x2500ac: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2500acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2500b0: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x2500b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2500b4: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x2500B4u;
    {
        const bool branch_taken_0x2500b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500B4u;
        // 0x2500b8: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500b4) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x2500BCu;
label_2500bc:
    // 0x2500bc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2500BCu;
    SET_GPR_U32(ctx, 31, 0x2500C4u);
    ctx->pc = 0x2500C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500BCu;
    // 0x2500c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2500BCu, 0x2500C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500C4u;
label_2500c4:
    // 0x2500c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2500C4u;
    {
        const bool branch_taken_0x2500c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C4u;
        // 0x2500c8: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500c4) {
            ctx->pc = 0x2500F0u;
            goto label_2500f0;
        }
    }
    ctx->pc = 0x2500CCu;
label_2500cc:
    // 0x2500cc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2500CCu;
    {
        const bool branch_taken_0x2500cc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2500D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500CCu;
        // 0x2500d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500cc) {
            ctx->pc = 0x2500E4u;
            goto label_2500e4;
        }
    }
    ctx->pc = 0x2500D4u;
    // 0x2500d4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2500d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2500d8: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x2500d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2500dc: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x2500DCu;
    {
        const bool branch_taken_0x2500dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500DCu;
        // 0x2500e0: 0xa24002f5  sb          $zero, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500dc) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x2500E4u;
label_2500e4:
    // 0x2500e4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2500E4u;
    SET_GPR_U32(ctx, 31, 0x2500ECu);
    ctx->pc = 0x2500E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500E4u;
    // 0x2500e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2500E4u, 0x2500ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500ECu;
label_2500ec:
    // 0x2500ec: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2500ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_2500f0:
    // 0x2500f0: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2500f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x2500f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2500F4u;
    {
        const bool branch_taken_0x2500f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500F4u;
        // 0x2500f8: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500f4) {
            ctx->pc = 0x250104u;
            goto label_250104;
        }
    }
    ctx->pc = 0x2500FCu;
    // 0x2500fc: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2500FCu;
    {
        const bool branch_taken_0x2500fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2500fc) {
            ctx->pc = 0x250100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2500FCu;
            // 0x250100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25017Cu;
            goto label_25017c;
        }
    }
    ctx->pc = 0x250104u;
label_250104:
    // 0x250104: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x250104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250108: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x250108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25010c: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x25010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x250110: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x250110u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250114: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x250114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x250118: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x250118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25011c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25011cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x250120: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x250120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x250124: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x250124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250128: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x250128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25012c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25012cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250130: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x250130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x250134: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x250134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x250138: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x250138u;
    {
        const bool branch_taken_0x250138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x25013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250138u;
        // 0x25013c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250138) {
            ctx->pc = 0x250154u;
            goto label_250154;
        }
    }
    ctx->pc = 0x250140u;
    // 0x250140: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x250140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250144: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x250144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x250148: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x250148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25014c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250150: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x250150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_250154:
    // 0x250154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250158: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x250158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25015c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250160: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x250160u;
    SET_GPR_U32(ctx, 31, 0x250168u);
    ctx->pc = 0x250164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250160u;
    // 0x250164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x250160u, 0x250168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250168u;
label_250168:
    // 0x250168: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x250168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25016c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25016Cu;
    SET_GPR_U32(ctx, 31, 0x250174u);
    ctx->pc = 0x250170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25016Cu;
    // 0x250170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25016Cu, 0x250174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250174u;
label_250174:
    // 0x250174: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x250174u;
    {
        const bool branch_taken_0x250174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250174u;
        // 0x250178: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250174) {
            ctx->pc = 0x2501ACu;
            goto label_2501ac;
        }
    }
    ctx->pc = 0x25017Cu;
label_25017c:
    // 0x25017c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x250180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x250184: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x250184u;
    SET_GPR_U32(ctx, 31, 0x25018Cu);
    ctx->pc = 0x250188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250184u;
    // 0x250188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x250184u, 0x25018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25018Cu;
label_25018c:
    // 0x25018c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25018cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x250190: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x250190u;
    SET_GPR_U32(ctx, 31, 0x250198u);
    ctx->pc = 0x250194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250190u;
    // 0x250194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x250190u, 0x250198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250198u;
label_250198:
    // 0x250198: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x250198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x25019c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2501a0: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2501A0u;
    {
        const bool branch_taken_0x2501a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A0u;
        // 0x2501a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501a0) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x2501A8u;
    // 0x2501a8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2501a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_2501ac:
    // 0x2501ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2501ACu;
    {
        const bool branch_taken_0x2501ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2501B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501ACu;
        // 0x2501b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501ac) {
            ctx->pc = 0x2501C8u;
            goto label_2501c8;
        }
    }
    ctx->pc = 0x2501B4u;
    // 0x2501b4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2501b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2501b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2501b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2501bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2501bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2501c0: 0xc0989d4  jal         func_262750
    ctx->pc = 0x2501C0u;
    SET_GPR_U32(ctx, 31, 0x2501C8u);
    ctx->pc = 0x2501C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C0u;
    // 0x2501c4: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x2501C0u, 0x2501C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C8u;
label_2501c8:
    // 0x2501c8: 0xc09c7ac  jal         func_271EB0
    ctx->pc = 0x2501C8u;
    SET_GPR_U32(ctx, 31, 0x2501D0u);
    ctx->pc = 0x2501CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C8u;
    // 0x2501cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EB0u, 0x2501C8u, 0x2501D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501D0u;
label_2501d0:
    // 0x2501d0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x2501D0u;
    {
        const bool branch_taken_0x2501d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D0u;
        // 0x2501d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501d0) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x2501D8u;
label_2501d8:
    // 0x2501d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2501D8u;
    SET_GPR_U32(ctx, 31, 0x2501E0u);
    ctx->pc = 0x2501DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501D8u;
    // 0x2501dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2501D8u, 0x2501E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501E0u;
label_2501e0:
    // 0x2501e0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2501e4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2501e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2501e8: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x2501ec: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x2501ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x2501f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2501F0u;
    {
        const bool branch_taken_0x2501f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F0u;
        // 0x2501f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501f0) {
            ctx->pc = 0x250210u;
            goto label_250210;
        }
    }
    ctx->pc = 0x2501F8u;
    // 0x2501f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2501f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2501fc: 0x2442ea40  addiu       $v0, $v0, -0x15C0
    ctx->pc = 0x2501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x250200: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250204: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250208: 0x800008  jr          $a0
    ctx->pc = 0x250208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250210u: goto label_250210;
            case 0x250270u: goto label_250270;
            case 0x2502A8u: goto label_2502a8;
            case 0x250308u: goto label_250308;
            case 0x250368u: goto label_250368;
            case 0x2503C8u: goto label_2503c8;
            case 0x250428u: goto label_250428;
            case 0x250460u: goto label_250460;
            case 0x250498u: goto label_250498;
            case 0x2504F8u: goto label_2504f8;
            case 0x250558u: goto label_250558;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250208u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250210u;
label_250210:
    // 0x250210: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250210u;
    SET_GPR_U32(ctx, 31, 0x250218u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250210u, 0x250218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250218u;
label_250218:
    // 0x250218: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25021c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250220: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x250220u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x250224: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x250224u;
    {
        const bool branch_taken_0x250224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250224) {
            ctx->pc = 0x250228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250224u;
            // 0x250228: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25022Cu;
            goto label_25022c;
        }
    }
    ctx->pc = 0x25022Cu;
label_25022c:
    // 0x25022c: 0x2810  mfhi        $a1
    ctx->pc = 0x25022cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x250230: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250230u;
    {
        const bool branch_taken_0x250230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x250230) {
            ctx->pc = 0x250234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250230u;
            // 0x250234: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250258u;
            goto label_250258;
        }
    }
    ctx->pc = 0x250238u;
    // 0x250238: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250238u;
    {
        const bool branch_taken_0x250238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250238u;
        // 0x25023c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250238) {
            ctx->pc = 0x250248u;
            goto label_250248;
        }
    }
    ctx->pc = 0x250240u;
    // 0x250240: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250240u;
    {
        const bool branch_taken_0x250240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x250240) {
            ctx->pc = 0x250244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250240u;
            // 0x250244: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250264u;
            goto label_250264;
        }
    }
    ctx->pc = 0x250248u;
label_250248:
    // 0x250248: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25024c: 0x8c430560  lw          $v1, 0x560($v0)
    ctx->pc = 0x25024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x250250: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x250250u;
    {
        const bool branch_taken_0x250250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250250u;
        // 0x250254: 0x8c440564  lw          $a0, 0x564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250250) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250258u;
label_250258:
    // 0x250258: 0x8c430560  lw          $v1, 0x560($v0)
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x25025c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x25025Cu;
    {
        const bool branch_taken_0x25025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25025Cu;
        // 0x250260: 0x8c440564  lw          $a0, 0x564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25025c) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250264u;
label_250264:
    // 0x250264: 0x8c430568  lw          $v1, 0x568($v0)
    ctx->pc = 0x250264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1384)));
    // 0x250268: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x250268u;
    {
        const bool branch_taken_0x250268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250268u;
        // 0x25026c: 0x8c44056c  lw          $a0, 0x56C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250268) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250270u;
label_250270:
    // 0x250270: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250270u;
    SET_GPR_U32(ctx, 31, 0x250278u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250270u, 0x250278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250278u;
label_250278:
    // 0x250278: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x250278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25027c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25027Cu;
    {
        const bool branch_taken_0x25027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25027Cu;
        // 0x250280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25027c) {
            ctx->pc = 0x25028Cu;
            goto label_25028c;
        }
    }
    ctx->pc = 0x250284u;
    // 0x250284: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250284u;
    {
        const bool branch_taken_0x250284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250284) {
            ctx->pc = 0x250288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250284u;
            // 0x250288: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25029Cu;
            goto label_25029c;
        }
    }
    ctx->pc = 0x25028Cu;
label_25028c:
    // 0x25028c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250290: 0x8c430e54  lw          $v1, 0xE54($v0)
    ctx->pc = 0x250290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3668)));
    // 0x250294: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x250294u;
    {
        const bool branch_taken_0x250294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250294u;
        // 0x250298: 0x8c440e58  lw          $a0, 0xE58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250294) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25029Cu;
label_25029c:
    // 0x25029c: 0x8c430e5c  lw          $v1, 0xE5C($v0)
    ctx->pc = 0x25029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3676)));
    // 0x2502a0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2502A0u;
    {
        const bool branch_taken_0x2502a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502A0u;
        // 0x2502a4: 0x8c440e60  lw          $a0, 0xE60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502a0) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2502A8u;
label_2502a8:
    // 0x2502a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2502A8u;
    SET_GPR_U32(ctx, 31, 0x2502B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2502A8u, 0x2502B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502B0u;
label_2502b0:
    // 0x2502b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2502b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2502b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2502b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2502b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2502b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2502bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2502BCu;
    {
        const bool branch_taken_0x2502bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2502bc) {
            ctx->pc = 0x2502C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2502BCu;
            // 0x2502c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2502C4u;
            goto label_2502c4;
        }
    }
    ctx->pc = 0x2502C4u;
label_2502c4:
    // 0x2502c4: 0x2810  mfhi        $a1
    ctx->pc = 0x2502c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2502c8: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2502C8u;
    {
        const bool branch_taken_0x2502c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2502c8) {
            ctx->pc = 0x2502CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2502C8u;
            // 0x2502cc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2502F0u;
            goto label_2502f0;
        }
    }
    ctx->pc = 0x2502D0u;
    // 0x2502d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2502D0u;
    {
        const bool branch_taken_0x2502d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502D0u;
        // 0x2502d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502d0) {
            ctx->pc = 0x2502E0u;
            goto label_2502e0;
        }
    }
    ctx->pc = 0x2502D8u;
    // 0x2502d8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2502D8u;
    {
        const bool branch_taken_0x2502d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2502d8) {
            ctx->pc = 0x2502DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2502D8u;
            // 0x2502dc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2502FCu;
            goto label_2502fc;
        }
    }
    ctx->pc = 0x2502E0u;
label_2502e0:
    // 0x2502e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2502e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2502e4: 0x8c430a10  lw          $v1, 0xA10($v0)
    ctx->pc = 0x2502e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2576)));
    // 0x2502e8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2502E8u;
    {
        const bool branch_taken_0x2502e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502E8u;
        // 0x2502ec: 0x8c440a14  lw          $a0, 0xA14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502e8) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x8c430a18  lw          $v1, 0xA18($v0)
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x2502f4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2502F4u;
    {
        const bool branch_taken_0x2502f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2502F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2502F4u;
        // 0x2502f8: 0x8c440a1c  lw          $a0, 0xA1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2502f4) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2502FCu;
label_2502fc:
    // 0x2502fc: 0x8c430a20  lw          $v1, 0xA20($v0)
    ctx->pc = 0x2502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2592)));
    // 0x250300: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x250300u;
    {
        const bool branch_taken_0x250300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250300u;
        // 0x250304: 0x8c440a24  lw          $a0, 0xA24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250300) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250308u;
label_250308:
    // 0x250308: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250308u;
    SET_GPR_U32(ctx, 31, 0x250310u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250308u, 0x250310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250310u;
label_250310:
    // 0x250310: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250318: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x250318u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25031c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25031Cu;
    {
        const bool branch_taken_0x25031c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25031c) {
            ctx->pc = 0x250320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25031Cu;
            // 0x250320: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250324u;
            goto label_250324;
        }
    }
    ctx->pc = 0x250324u;
label_250324:
    // 0x250324: 0x2810  mfhi        $a1
    ctx->pc = 0x250324u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x250328: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250328u;
    {
        const bool branch_taken_0x250328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x250328) {
            ctx->pc = 0x25032Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250328u;
            // 0x25032c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250350u;
            goto label_250350;
        }
    }
    ctx->pc = 0x250330u;
    // 0x250330: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250330u;
    {
        const bool branch_taken_0x250330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250330u;
        // 0x250334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250330) {
            ctx->pc = 0x250340u;
            goto label_250340;
        }
    }
    ctx->pc = 0x250338u;
    // 0x250338: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250338u;
    {
        const bool branch_taken_0x250338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x250338) {
            ctx->pc = 0x25033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250338u;
            // 0x25033c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25035Cu;
            goto label_25035c;
        }
    }
    ctx->pc = 0x250340u;
label_250340:
    // 0x250340: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250344: 0x8c430a10  lw          $v1, 0xA10($v0)
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2576)));
    // 0x250348: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x250348u;
    {
        const bool branch_taken_0x250348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250348u;
        // 0x25034c: 0x8c440a14  lw          $a0, 0xA14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250348) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250350u;
label_250350:
    // 0x250350: 0x8c430a18  lw          $v1, 0xA18($v0)
    ctx->pc = 0x250350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x250354: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x250354u;
    {
        const bool branch_taken_0x250354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250354u;
        // 0x250358: 0x8c440a1c  lw          $a0, 0xA1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250354) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25035Cu;
label_25035c:
    // 0x25035c: 0x8c430a20  lw          $v1, 0xA20($v0)
    ctx->pc = 0x25035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2592)));
    // 0x250360: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x250360u;
    {
        const bool branch_taken_0x250360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250360u;
        // 0x250364: 0x8c440a24  lw          $a0, 0xA24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250360) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250368u;
label_250368:
    // 0x250368: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250368u;
    SET_GPR_U32(ctx, 31, 0x250370u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250368u, 0x250370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250370u;
label_250370:
    // 0x250370: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250374: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250378: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x250378u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25037c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25037Cu;
    {
        const bool branch_taken_0x25037c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25037c) {
            ctx->pc = 0x250380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25037Cu;
            // 0x250380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250384u;
            goto label_250384;
        }
    }
    ctx->pc = 0x250384u;
label_250384:
    // 0x250384: 0x2810  mfhi        $a1
    ctx->pc = 0x250384u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x250388: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250388u;
    {
        const bool branch_taken_0x250388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x250388) {
            ctx->pc = 0x25038Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250388u;
            // 0x25038c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2503B0u;
            goto label_2503b0;
        }
    }
    ctx->pc = 0x250390u;
    // 0x250390: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250390u;
    {
        const bool branch_taken_0x250390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250390u;
        // 0x250394: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250390) {
            ctx->pc = 0x2503A0u;
            goto label_2503a0;
        }
    }
    ctx->pc = 0x250398u;
    // 0x250398: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250398u;
    {
        const bool branch_taken_0x250398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x250398) {
            ctx->pc = 0x25039Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250398u;
            // 0x25039c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2503BCu;
            goto label_2503bc;
        }
    }
    ctx->pc = 0x2503A0u;
label_2503a0:
    // 0x2503a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2503a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2503a4: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2503a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2503a8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2503A8u;
    {
        const bool branch_taken_0x2503a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503A8u;
        // 0x2503ac: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503a8) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2503B0u;
label_2503b0:
    // 0x2503b0: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2503b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2503b4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2503B4u;
    {
        const bool branch_taken_0x2503b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503B4u;
        // 0x2503b8: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503b4) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2503BCu;
label_2503bc:
    // 0x2503bc: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2503bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2503c0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2503C0u;
    {
        const bool branch_taken_0x2503c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503C0u;
        // 0x2503c4: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503c0) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2503C8u;
label_2503c8:
    // 0x2503c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2503C8u;
    SET_GPR_U32(ctx, 31, 0x2503D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2503C8u, 0x2503D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503D0u;
label_2503d0:
    // 0x2503d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2503d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2503d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2503d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2503d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2503d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2503dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2503DCu;
    {
        const bool branch_taken_0x2503dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2503dc) {
            ctx->pc = 0x2503E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503DCu;
            // 0x2503e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2503E4u;
            goto label_2503e4;
        }
    }
    ctx->pc = 0x2503E4u;
label_2503e4:
    // 0x2503e4: 0x2810  mfhi        $a1
    ctx->pc = 0x2503e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2503e8: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2503E8u;
    {
        const bool branch_taken_0x2503e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2503e8) {
            ctx->pc = 0x2503ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503E8u;
            // 0x2503ec: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250410u;
            goto label_250410;
        }
    }
    ctx->pc = 0x2503F0u;
    // 0x2503f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2503F0u;
    {
        const bool branch_taken_0x2503f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2503F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2503F0u;
        // 0x2503f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2503f0) {
            ctx->pc = 0x250400u;
            goto label_250400;
        }
    }
    ctx->pc = 0x2503F8u;
    // 0x2503f8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2503F8u;
    {
        const bool branch_taken_0x2503f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2503f8) {
            ctx->pc = 0x2503FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2503F8u;
            // 0x2503fc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25041Cu;
            goto label_25041c;
        }
    }
    ctx->pc = 0x250400u;
label_250400:
    // 0x250400: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250404: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x250404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x250408: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x250408u;
    {
        const bool branch_taken_0x250408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250408u;
        // 0x25040c: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250408) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250410u;
label_250410:
    // 0x250410: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x250410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x250414: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x250414u;
    {
        const bool branch_taken_0x250414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250414u;
        // 0x250418: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250414) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25041Cu;
label_25041c:
    // 0x25041c: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x250420: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x250420u;
    {
        const bool branch_taken_0x250420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250420u;
        // 0x250424: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250420) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250428u;
label_250428:
    // 0x250428: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250428u;
    SET_GPR_U32(ctx, 31, 0x250430u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250428u, 0x250430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250430u;
label_250430:
    // 0x250430: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x250430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x250434: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250434u;
    {
        const bool branch_taken_0x250434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250434u;
        // 0x250438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250434) {
            ctx->pc = 0x250444u;
            goto label_250444;
        }
    }
    ctx->pc = 0x25043Cu;
    // 0x25043c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25043Cu;
    {
        const bool branch_taken_0x25043c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25043c) {
            ctx->pc = 0x250440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25043Cu;
            // 0x250440: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250454u;
            goto label_250454;
        }
    }
    ctx->pc = 0x250444u;
label_250444:
    // 0x250444: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250448: 0x8c4316c0  lw          $v1, 0x16C0($v0)
    ctx->pc = 0x250448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5824)));
    // 0x25044c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x25044Cu;
    {
        const bool branch_taken_0x25044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25044Cu;
        // 0x250450: 0x8c4416c4  lw          $a0, 0x16C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25044c) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250454u;
label_250454:
    // 0x250454: 0x8c4316c8  lw          $v1, 0x16C8($v0)
    ctx->pc = 0x250454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5832)));
    // 0x250458: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x250458u;
    {
        const bool branch_taken_0x250458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250458u;
        // 0x25045c: 0x8c4416cc  lw          $a0, 0x16CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250458) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250460u;
label_250460:
    // 0x250460: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250460u;
    SET_GPR_U32(ctx, 31, 0x250468u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250460u, 0x250468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250468u;
label_250468:
    // 0x250468: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x250468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25046c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25046Cu;
    {
        const bool branch_taken_0x25046c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25046Cu;
        // 0x250470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25046c) {
            ctx->pc = 0x25047Cu;
            goto label_25047c;
        }
    }
    ctx->pc = 0x250474u;
    // 0x250474: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250474u;
    {
        const bool branch_taken_0x250474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250474) {
            ctx->pc = 0x250478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250474u;
            // 0x250478: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25048Cu;
            goto label_25048c;
        }
    }
    ctx->pc = 0x25047Cu;
label_25047c:
    // 0x25047c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250480: 0x8c4316c0  lw          $v1, 0x16C0($v0)
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5824)));
    // 0x250484: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x250484u;
    {
        const bool branch_taken_0x250484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250484u;
        // 0x250488: 0x8c4416c4  lw          $a0, 0x16C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250484) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25048Cu;
label_25048c:
    // 0x25048c: 0x8c4316c8  lw          $v1, 0x16C8($v0)
    ctx->pc = 0x25048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5832)));
    // 0x250490: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x250490u;
    {
        const bool branch_taken_0x250490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250490u;
        // 0x250494: 0x8c4416cc  lw          $a0, 0x16CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250490) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250498u;
label_250498:
    // 0x250498: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250498u;
    SET_GPR_U32(ctx, 31, 0x2504A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250498u, 0x2504A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2504A0u;
label_2504a0:
    // 0x2504a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2504a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2504a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2504a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2504a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2504ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2504ACu;
    {
        const bool branch_taken_0x2504ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2504ac) {
            ctx->pc = 0x2504B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504ACu;
            // 0x2504b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504B4u;
            goto label_2504b4;
        }
    }
    ctx->pc = 0x2504B4u;
label_2504b4:
    // 0x2504b4: 0x2810  mfhi        $a1
    ctx->pc = 0x2504b4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2504b8: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2504B8u;
    {
        const bool branch_taken_0x2504b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2504b8) {
            ctx->pc = 0x2504BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504B8u;
            // 0x2504bc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504E0u;
            goto label_2504e0;
        }
    }
    ctx->pc = 0x2504C0u;
    // 0x2504c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2504C0u;
    {
        const bool branch_taken_0x2504c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504C0u;
        // 0x2504c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504c0) {
            ctx->pc = 0x2504D0u;
            goto label_2504d0;
        }
    }
    ctx->pc = 0x2504C8u;
    // 0x2504c8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2504C8u;
    {
        const bool branch_taken_0x2504c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2504c8) {
            ctx->pc = 0x2504CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504C8u;
            // 0x2504cc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504ECu;
            goto label_2504ec;
        }
    }
    ctx->pc = 0x2504D0u;
label_2504d0:
    // 0x2504d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2504d4: 0x8c430560  lw          $v1, 0x560($v0)
    ctx->pc = 0x2504d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x2504d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2504D8u;
    {
        const bool branch_taken_0x2504d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504D8u;
        // 0x2504dc: 0x8c440564  lw          $a0, 0x564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504d8) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504E0u;
label_2504e0:
    // 0x2504e0: 0x8c430560  lw          $v1, 0x560($v0)
    ctx->pc = 0x2504e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x2504e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2504E4u;
    {
        const bool branch_taken_0x2504e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504E4u;
        // 0x2504e8: 0x8c440564  lw          $a0, 0x564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504e4) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504ECu;
label_2504ec:
    // 0x2504ec: 0x8c430568  lw          $v1, 0x568($v0)
    ctx->pc = 0x2504ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1384)));
    // 0x2504f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2504F0u;
    {
        const bool branch_taken_0x2504f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504F0u;
        // 0x2504f4: 0x8c44056c  lw          $a0, 0x56C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504f0) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504F8u;
label_2504f8:
    // 0x2504f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2504F8u;
    SET_GPR_U32(ctx, 31, 0x250500u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2504F8u, 0x250500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250500u;
label_250500:
    // 0x250500: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250508: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x250508u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25050c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25050Cu;
    {
        const bool branch_taken_0x25050c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25050c) {
            ctx->pc = 0x250510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25050Cu;
            // 0x250510: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250514u;
            goto label_250514;
        }
    }
    ctx->pc = 0x250514u;
label_250514:
    // 0x250514: 0x2810  mfhi        $a1
    ctx->pc = 0x250514u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x250518: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250518u;
    {
        const bool branch_taken_0x250518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x250518) {
            ctx->pc = 0x25051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250518u;
            // 0x25051c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250540u;
            goto label_250540;
        }
    }
    ctx->pc = 0x250520u;
    // 0x250520: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250520u;
    {
        const bool branch_taken_0x250520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250520u;
        // 0x250524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250520) {
            ctx->pc = 0x250530u;
            goto label_250530;
        }
    }
    ctx->pc = 0x250528u;
    // 0x250528: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250528u;
    {
        const bool branch_taken_0x250528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x250528) {
            ctx->pc = 0x25052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250528u;
            // 0x25052c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25054Cu;
            goto label_25054c;
        }
    }
    ctx->pc = 0x250530u;
label_250530:
    // 0x250530: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250534: 0x8c432e9c  lw          $v1, 0x2E9C($v0)
    ctx->pc = 0x250534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11932)));
    // 0x250538: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x250538u;
    {
        const bool branch_taken_0x250538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250538u;
        // 0x25053c: 0x8c442ea0  lw          $a0, 0x2EA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250538) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250540u;
label_250540:
    // 0x250540: 0x8c432e9c  lw          $v1, 0x2E9C($v0)
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11932)));
    // 0x250544: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x250544u;
    {
        const bool branch_taken_0x250544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250544u;
        // 0x250548: 0x8c442ea0  lw          $a0, 0x2EA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250544) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25054Cu;
label_25054c:
    // 0x25054c: 0x8c432e9c  lw          $v1, 0x2E9C($v0)
    ctx->pc = 0x25054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11932)));
    // 0x250550: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x250550u;
    {
        const bool branch_taken_0x250550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250550u;
        // 0x250554: 0x8c442ea0  lw          $a0, 0x2EA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250550) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250558u;
label_250558:
    // 0x250558: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250558u;
    SET_GPR_U32(ctx, 31, 0x250560u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250558u, 0x250560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250560u;
label_250560:
    // 0x250560: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250568: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x250568u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25056c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25056Cu;
    {
        const bool branch_taken_0x25056c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25056c) {
            ctx->pc = 0x250570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25056Cu;
            // 0x250570: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250574u;
            goto label_250574;
        }
    }
    ctx->pc = 0x250574u;
label_250574:
    // 0x250574: 0x2810  mfhi        $a1
    ctx->pc = 0x250574u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x250578: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250578u;
    {
        const bool branch_taken_0x250578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x250578) {
            ctx->pc = 0x25057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250578u;
            // 0x25057c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x250580u;
    // 0x250580: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x250580u;
    {
        const bool branch_taken_0x250580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x250580) {
            ctx->pc = 0x250584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250580u;
            // 0x250584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25059Cu;
            goto label_25059c;
        }
    }
    ctx->pc = 0x250588u;
    // 0x250588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x250588u;
    {
        const bool branch_taken_0x250588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250588u;
        // 0x25058c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250588) {
            ctx->pc = 0x2505A0u;
            goto label_2505a0;
        }
    }
    ctx->pc = 0x250590u;
label_250590:
    // 0x250590: 0x8c431290  lw          $v1, 0x1290($v0)
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x250594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250594u;
    {
        const bool branch_taken_0x250594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250594u;
        // 0x250598: 0x8c441294  lw          $a0, 0x1294($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250594) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x25059Cu;
label_25059c:
    // 0x25059c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2505a0:
    // 0x2505a0: 0x8c431288  lw          $v1, 0x1288($v0)
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4744)));
    // 0x2505a4: 0x8c44128c  lw          $a0, 0x128C($v0)
    ctx->pc = 0x2505a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
label_2505a8:
    // 0x2505a8: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2505a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2505ac: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2505acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2505b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2505b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2505b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2505b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2505b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505bc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2505bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2505c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505c4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2505c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2505c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2505C8u;
    SET_GPR_U32(ctx, 31, 0x2505D0u);
    ctx->pc = 0x2505CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505C8u;
    // 0x2505cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2505C8u, 0x2505D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505D0u;
label_2505d0:
    // 0x2505d0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2505d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2505d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2505d8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2505d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2505dc:
    // 0x2505dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2505DCu;
    SET_GPR_U32(ctx, 31, 0x2505E4u);
    ctx->pc = 0x2505E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2505DCu;
    // 0x2505e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2505DCu, 0x2505E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2505E4u;
label_2505e4:
    // 0x2505e4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2505E4u;
    {
        const bool branch_taken_0x2505e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2505e4) {
            ctx->pc = 0x2505E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2505E4u;
            // 0x2505e8: 0xc64005c8  lwc1        $f0, 0x5C8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2506A8u;
            goto label_2506a8;
        }
    }
    ctx->pc = 0x2505ECu;
    // 0x2505ec: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2505ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2505f0: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2505F0u;
    {
        const bool branch_taken_0x2505f0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2505f0) {
            ctx->pc = 0x250688u;
            goto label_250688;
        }
    }
    ctx->pc = 0x2505F8u;
    // 0x2505f8: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2505f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2505fc: 0x28620224  slti        $v0, $v1, 0x224
    ctx->pc = 0x2505fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
    // 0x250600: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250600u;
    {
        const bool branch_taken_0x250600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250600u;
        // 0x250604: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250600) {
            ctx->pc = 0x250624u;
            goto label_250624;
        }
    }
    ctx->pc = 0x250608u;
    // 0x250608: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x250608u;
    {
        const bool branch_taken_0x250608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250608) {
            ctx->pc = 0x25060Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250608u;
            // 0x25060c: 0x8e421644  lw          $v0, 0x1644($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250628u;
            goto label_250628;
        }
    }
    ctx->pc = 0x250610u;
    // 0x250610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250614: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x250614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x250618: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x250618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25061c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x25061Cu;
    {
        const bool branch_taken_0x25061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25061Cu;
        // 0x250620: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25061c) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250624u;
label_250624:
    // 0x250624: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x250624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
label_250628:
    // 0x250628: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x25062c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250630u;
    {
        const bool branch_taken_0x250630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250630u;
        // 0x250634: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250630) {
            ctx->pc = 0x25064Cu;
            goto label_25064c;
        }
    }
    ctx->pc = 0x250638u;
    // 0x250638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25063c: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x25063cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x250640: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x250640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x250644: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x250644u;
    {
        const bool branch_taken_0x250644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250644u;
        // 0x250648: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250644) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x25064Cu;
label_25064c:
    // 0x25064c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25064cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250650: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x250650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x250654: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x250654u;
    SET_GPR_U32(ctx, 31, 0x25065Cu);
    ctx->pc = 0x250658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250654u;
    // 0x250658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x250654u, 0x25065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25065Cu;
label_25065c:
    // 0x25065c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25065Cu;
    {
        const bool branch_taken_0x25065c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25065Cu;
        // 0x250660: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25065c) {
            ctx->pc = 0x250674u;
            goto label_250674;
        }
    }
    ctx->pc = 0x250664u;
    // 0x250664: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x250664u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x250668: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x250668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25066c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x25066Cu;
    {
        const bool branch_taken_0x25066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25066Cu;
        // 0x250670: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25066c) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250674u;
label_250674:
    // 0x250674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250678: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x250678u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25067c: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x25067cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x250680: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x250680u;
    {
        const bool branch_taken_0x250680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250680u;
        // 0x250684: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250680) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250688u;
label_250688:
    // 0x250688: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x250688u;
    SET_GPR_U32(ctx, 31, 0x250690u);
    ctx->pc = 0x25068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250688u;
    // 0x25068c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x250688u, 0x250690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250690u;
label_250690:
    // 0x250690: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x250690u;
    {
        const bool branch_taken_0x250690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250690u;
        // 0x250694: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250690) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x250698u;
    // 0x250698: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x250698u;
    SET_GPR_U32(ctx, 31, 0x2506A0u);
    ctx->pc = 0x25069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250698u;
    // 0x25069c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x250698u, 0x2506A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506A0u;
label_2506a0:
    // 0x2506a0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2506A0u;
    {
        const bool branch_taken_0x2506a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506A0u;
        // 0x2506a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506a0) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x2506A8u;
label_2506a8:
    // 0x2506a8: 0x26430330  addiu       $v1, $s2, 0x330
    ctx->pc = 0x2506a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x2506ac: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x2506b0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x2506b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x2506b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2506b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2506b8: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x2506b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x2506bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2506bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2506c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2506C0u;
    {
        const bool branch_taken_0x2506c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2506C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506C0u;
        // 0x2506c4: 0xe64005c8  swc1        $f0, 0x5C8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506c0) {
            ctx->pc = 0x2506E0u;
            goto label_2506e0;
        }
    }
    ctx->pc = 0x2506C8u;
    // 0x2506c8: 0xc64005c0  lwc1        $f0, 0x5C0($s2)
    ctx->pc = 0x2506c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2506cc: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x2506ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x2506d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2506d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2506d4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2506d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2506d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2506d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2506dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2506dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2506e0:
    // 0x2506e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2506e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2506e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2506e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2506e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2506e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506ec: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2506ECu;
    SET_GPR_U32(ctx, 31, 0x2506F4u);
    ctx->pc = 0x2506F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2506ECu;
    // 0x2506f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2506ECu, 0x2506F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506F4u;
label_2506f4:
    // 0x2506f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2506f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2506f8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2506F8u;
    SET_GPR_U32(ctx, 31, 0x250700u);
    ctx->pc = 0x2506FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2506F8u;
    // 0x2506fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2506F8u, 0x250700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250700u;
label_250700:
    // 0x250700: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x250700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x250704: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x250704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x250708: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x250708u;
    {
        const bool branch_taken_0x250708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250708u;
        // 0x25070c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250708) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x250710u;
    // 0x250710: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x250710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x250714: 0x1c400067  bgtz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x250714u;
    {
        const bool branch_taken_0x250714 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x250718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250714u;
        // 0x250718: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250714) {
            ctx->pc = 0x2508B4u;
            goto label_2508b4;
        }
    }
    ctx->pc = 0x25071Cu;
    // 0x25071c: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x25071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x250720: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x250720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x250724: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x250724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250728: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250728u;
    {
        const bool branch_taken_0x250728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250728u;
        // 0x25072c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250728) {
            ctx->pc = 0x250744u;
            goto label_250744;
        }
    }
    ctx->pc = 0x250730u;
    // 0x250730: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x250730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250734: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x250734u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x250738: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x250738u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25073c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25073Cu;
    {
        const bool branch_taken_0x25073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25073Cu;
        // 0x250740: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25073c) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250744u;
label_250744:
    // 0x250744: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x250744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x250748: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x250748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x25074c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x250750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250750u;
    {
        const bool branch_taken_0x250750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250750u;
        // 0x250754: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250750) {
            ctx->pc = 0x250768u;
            goto label_250768;
        }
    }
    ctx->pc = 0x250758u;
    // 0x250758: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x250758u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x25075c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x25075cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x250760: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x250760u;
    {
        const bool branch_taken_0x250760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250760u;
        // 0x250764: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250760) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250768u;
label_250768:
    // 0x250768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25076c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25076cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x250770: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x250770u;
    SET_GPR_U32(ctx, 31, 0x250778u);
    ctx->pc = 0x250774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250770u;
    // 0x250774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x250770u, 0x250778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250778u;
label_250778:
    // 0x250778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250778u;
    {
        const bool branch_taken_0x250778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250778u;
        // 0x25077c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250778) {
            ctx->pc = 0x250790u;
            goto label_250790;
        }
    }
    ctx->pc = 0x250780u;
    // 0x250780: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x250780u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x250784: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x250784u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x250788: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x250788u;
    {
        const bool branch_taken_0x250788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250788u;
        // 0x25078c: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250788) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x250790u;
label_250790:
    // 0x250790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250794: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x250794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x250798: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x250798u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x25079c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x25079Cu;
    {
        const bool branch_taken_0x25079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25079Cu;
        // 0x2507a0: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25079c) {
            ctx->pc = 0x2508A8u;
            goto label_2508a8;
        }
    }
    ctx->pc = 0x2507A4u;
label_2507a4:
    // 0x2507a4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2507a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2507a8: 0xae400600  sw          $zero, 0x600($s2)
    ctx->pc = 0x2507a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 0));
    // 0x2507ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2507acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2507b0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2507b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2507b4:
    // 0x2507b4: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x2507b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x2507b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2507b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507bc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2507bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2507c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2507C0u;
    SET_GPR_U32(ctx, 31, 0x2507C8u);
    ctx->pc = 0x2507C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507C0u;
    // 0x2507c4: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2507C0u, 0x2507C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507C8u;
label_2507c8:
    // 0x2507c8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2507c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2507cc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2507ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2507d0: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x2507d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x2507d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2507d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2507d8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2507d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2507dc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2507dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2507e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2507e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2507e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2507e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2507e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2507e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2507ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2507ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2507f0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2507f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2507f4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2507f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2507f8: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x2507f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x2507fc: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2507FCu;
    {
        const bool branch_taken_0x2507fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x250800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507FCu;
        // 0x250800: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507fc) {
            ctx->pc = 0x250818u;
            goto label_250818;
        }
    }
    ctx->pc = 0x250804u;
    // 0x250804: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x250804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250808: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x250808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x25080c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25080cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x250810: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x250810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250814: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x250814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_250818:
    // 0x250818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25081c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25081cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x250820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250824: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x250824u;
    SET_GPR_U32(ctx, 31, 0x25082Cu);
    ctx->pc = 0x250828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250824u;
    // 0x250828: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x250824u, 0x25082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25082Cu;
label_25082c:
    // 0x25082c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25082cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x250830: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x250830u;
    SET_GPR_U32(ctx, 31, 0x250838u);
    ctx->pc = 0x250834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250830u;
    // 0x250834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x250830u, 0x250838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250838u;
label_250838:
    // 0x250838: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x250838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x25083c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25083Cu;
    {
        const bool branch_taken_0x25083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25083Cu;
        // 0x250840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25083c) {
            ctx->pc = 0x250858u;
            goto label_250858;
        }
    }
    ctx->pc = 0x250844u;
    // 0x250844: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x250844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x250848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25084c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250850: 0xc0989d4  jal         func_262750
    ctx->pc = 0x250850u;
    SET_GPR_U32(ctx, 31, 0x250858u);
    ctx->pc = 0x250854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250850u;
    // 0x250854: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x250850u, 0x250858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250858u;
label_250858:
    // 0x250858: 0xc09c7ac  jal         func_271EB0
    ctx->pc = 0x250858u;
    SET_GPR_U32(ctx, 31, 0x250860u);
    ctx->pc = 0x25085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250858u;
    // 0x25085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EB0u, 0x250858u, 0x250860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250860u;
label_250860:
    // 0x250860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250860u;
    {
        const bool branch_taken_0x250860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250860u;
        // 0x250864: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250860) {
            ctx->pc = 0x250870u;
            goto label_250870;
        }
    }
    ctx->pc = 0x250868u;
    // 0x250868: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x250868u;
    {
        const bool branch_taken_0x250868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250868u;
        // 0x25086c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250868) {
            ctx->pc = 0x2508B0u;
            goto label_2508b0;
        }
    }
    ctx->pc = 0x250870u;
label_250870:
    // 0x250870: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x250870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250874: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x250874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250878: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x250878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x25087c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25087cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x250880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x250884: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x250884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250888: 0x0  nop
    ctx->pc = 0x250888u;
    // NOP
    // 0x25088c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25088Cu;
    {
        const bool branch_taken_0x25088c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25088Cu;
        // 0x250890: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25088c) {
            ctx->pc = 0x2508ACu;
            goto label_2508ac;
        }
    }
    ctx->pc = 0x250894u;
    // 0x250894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x250894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25089c: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x25089cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2508a0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2508a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2508a4: 0xa24302f4  sb          $v1, 0x2F4($s2)
    ctx->pc = 0x2508a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
label_2508a8:
    // 0x2508a8: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x2508a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_2508ac:
    // 0x2508ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2508acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2508b0:
    // 0x2508b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2508b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2508b4:
    // 0x2508b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2508b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2508b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2508b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2508bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2508bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2508c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2508c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2508c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2508c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2508c8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2508c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2508cc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2508ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2508d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2508D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2508D8u;
}
