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

// Function: func_003903E8
// Address: 0x3903e8 - 0x391340
void func_003903E8_0x3903e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003903E8_0x3903e8");
#endif

    switch (ctx->pc) {
        case 0x390430u: goto label_390430;
        case 0x39043cu: goto label_39043c;
        case 0x390448u: goto label_390448;
        case 0x390454u: goto label_390454;
        case 0x390460u: goto label_390460;
        case 0x39046cu: goto label_39046c;
        case 0x390478u: goto label_390478;
        case 0x3904e8u: goto label_3904e8;
        case 0x390540u: goto label_390540;
        case 0x3905b8u: goto label_3905b8;
        case 0x390608u: goto label_390608;
        case 0x390628u: goto label_390628;
        case 0x390758u: goto label_390758;
        case 0x3907b0u: goto label_3907b0;
        case 0x39084cu: goto label_39084c;
        case 0x390868u: goto label_390868;
        case 0x390898u: goto label_390898;
        case 0x3908a4u: goto label_3908a4;
        case 0x3908bcu: goto label_3908bc;
        case 0x3908c8u: goto label_3908c8;
        case 0x390944u: goto label_390944;
        case 0x39095cu: goto label_39095c;
        case 0x39098cu: goto label_39098c;
        case 0x3909c8u: goto label_3909c8;
        case 0x3909e4u: goto label_3909e4;
        case 0x3909ecu: goto label_3909ec;
        case 0x390a18u: goto label_390a18;
        case 0x390a38u: goto label_390a38;
        case 0x390a94u: goto label_390a94;
        case 0x390b28u: goto label_390b28;
        case 0x390b50u: goto label_390b50;
        case 0x390b70u: goto label_390b70;
        case 0x390bb4u: goto label_390bb4;
        case 0x390bc4u: goto label_390bc4;
        case 0x390bd8u: goto label_390bd8;
        case 0x390be4u: goto label_390be4;
        case 0x390bf0u: goto label_390bf0;
        case 0x390bf8u: goto label_390bf8;
        case 0x390c00u: goto label_390c00;
        case 0x390c0cu: goto label_390c0c;
        case 0x390c14u: goto label_390c14;
        case 0x390c20u: goto label_390c20;
        case 0x390c44u: goto label_390c44;
        case 0x390c54u: goto label_390c54;
        case 0x390c70u: goto label_390c70;
        case 0x390c78u: goto label_390c78;
        case 0x390c88u: goto label_390c88;
        case 0x390c98u: goto label_390c98;
        case 0x390d88u: goto label_390d88;
        case 0x390d94u: goto label_390d94;
        case 0x390da4u: goto label_390da4;
        case 0x390dbcu: goto label_390dbc;
        case 0x390dd0u: goto label_390dd0;
        case 0x390e64u: goto label_390e64;
        case 0x390e8cu: goto label_390e8c;
        case 0x390ea4u: goto label_390ea4;
        case 0x390ebcu: goto label_390ebc;
        case 0x390f14u: goto label_390f14;
        case 0x390f20u: goto label_390f20;
        case 0x390f2cu: goto label_390f2c;
        case 0x390fe4u: goto label_390fe4;
        case 0x390ffcu: goto label_390ffc;
        case 0x391004u: goto label_391004;
        case 0x39100cu: goto label_39100c;
        case 0x391020u: goto label_391020;
        case 0x39102cu: goto label_39102c;
        case 0x391038u: goto label_391038;
        case 0x391044u: goto label_391044;
        case 0x39106cu: goto label_39106c;
        case 0x391074u: goto label_391074;
        case 0x391080u: goto label_391080;
        case 0x3910c4u: goto label_3910c4;
        case 0x3910dcu: goto label_3910dc;
        case 0x3910fcu: goto label_3910fc;
        case 0x391110u: goto label_391110;
        case 0x391124u: goto label_391124;
        case 0x391134u: goto label_391134;
        case 0x3911e8u: goto label_3911e8;
        case 0x3911fcu: goto label_3911fc;
        case 0x391218u: goto label_391218;
        case 0x39122cu: goto label_39122c;
        case 0x391240u: goto label_391240;
        case 0x391254u: goto label_391254;
        case 0x391268u: goto label_391268;
        case 0x391280u: goto label_391280;
        case 0x3912c4u: goto label_3912c4;
        case 0x3912ccu: goto label_3912cc;
        case 0x3912d4u: goto label_3912d4;
        case 0x3912dcu: goto label_3912dc;
        case 0x3912e4u: goto label_3912e4;
        case 0x3912ecu: goto label_3912ec;
        case 0x391310u: goto label_391310;
        default: break;
    }

    ctx->pc = 0x3903e8u;

    // 0x3903e8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x3903e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x3903ec: 0xffb001f0  sd          $s0, 0x1F0($sp)
    ctx->pc = 0x3903ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 16));
    // 0x3903f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3903f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3903f4: 0xffb50240  sd          $s5, 0x240($sp)
    ctx->pc = 0x3903f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 21));
    // 0x3903f8: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x3903f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x3903fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3903fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390400: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x390400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x390404: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x390404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390408: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x390408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x39040c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x39040cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390410: 0xffb70260  sd          $s7, 0x260($sp)
    ctx->pc = 0x390410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 23));
    // 0x390414: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x390414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x390418: 0xffb30220  sd          $s3, 0x220($sp)
    ctx->pc = 0x390418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 19));
    // 0x39041c: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x39041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x390420: 0xffb10200  sd          $s1, 0x200($sp)
    ctx->pc = 0x390420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 17));
    // 0x390424: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x390424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x390428: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x390428u;
    SET_GPR_U32(ctx, 31, 0x390430u);
    ctx->pc = 0x39042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390428u;
    // 0x39042c: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x390428u, 0x390430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390430u;
label_390430:
    // 0x390430: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x390430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x390434: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x390434u;
    SET_GPR_U32(ctx, 31, 0x39043Cu);
    ctx->pc = 0x390438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390434u;
    // 0x390438: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x390434u, 0x39043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39043Cu;
label_39043c:
    // 0x39043c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x39043cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x390440: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x390440u;
    SET_GPR_U32(ctx, 31, 0x390448u);
    ctx->pc = 0x390444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390440u;
    // 0x390444: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x390440u, 0x390448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390448u;
label_390448:
    // 0x390448: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x390448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x39044c: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x39044Cu;
    SET_GPR_U32(ctx, 31, 0x390454u);
    ctx->pc = 0x390450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39044Cu;
    // 0x390450: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x39044Cu, 0x390454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390454u;
label_390454:
    // 0x390454: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x390454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x390458: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x390458u;
    SET_GPR_U32(ctx, 31, 0x390460u);
    ctx->pc = 0x39045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390458u;
    // 0x39045c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x390458u, 0x390460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390460u;
label_390460:
    // 0x390460: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x390460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x390464: 0xc0e3d30  jal         func_38F4C0
    ctx->pc = 0x390464u;
    SET_GPR_U32(ctx, 31, 0x39046Cu);
    ctx->pc = 0x390468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390464u;
    // 0x390468: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F4C0u, 0x390464u, 0x39046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39046Cu;
label_39046c:
    // 0x39046c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x39046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x390470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x390470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x390474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390478:
    // 0x390478: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x390478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39047c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x39047cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x390480: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x390480u;
    {
        const bool branch_taken_0x390480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390480u;
        // 0x390484: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390480) {
            ctx->pc = 0x3904D0u;
            goto label_3904d0;
        }
    }
    ctx->pc = 0x390488u;
    // 0x390488: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x390488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x39048c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39048cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x390490: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x390490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
    // 0x390494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x390494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x390498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x390498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39049c: 0x800008  jr          $a0
    ctx->pc = 0x39049Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3904A4u: goto label_3904a4;
            case 0x3904ACu: goto label_3904ac;
            case 0x3904BCu: goto label_3904bc;
            case 0x3904C8u: goto label_3904c8;
            case 0x3904D0u: goto label_3904d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39049Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3904A4u;
label_3904a4:
    // 0x3904a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3904a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3904a8: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x3904a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_3904ac:
    // 0x3904ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3904acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3904b0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x3904b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3904b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3904B4u;
    {
        const bool branch_taken_0x3904b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3904B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904B4u;
        // 0x3904b8: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904b4) {
            ctx->pc = 0x3904D0u;
            goto label_3904d0;
        }
    }
    ctx->pc = 0x3904BCu;
label_3904bc:
    // 0x3904bc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3904bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3904c0: 0x1000038a  b           . + 4 + (0x38A << 2)
    ctx->pc = 0x3904C0u;
    {
        const bool branch_taken_0x3904c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3904C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904C0u;
        // 0x3904c4: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904c0) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x3904C8u;
label_3904c8:
    // 0x3904c8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3904C8u;
    {
        const bool branch_taken_0x3904c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3904CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904C8u;
        // 0x3904cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904c8) {
            ctx->pc = 0x390478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390478;
        }
    }
    ctx->pc = 0x3904D0u;
label_3904d0:
    // 0x3904d0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x3904d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3904d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3904d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3904d8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3904d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3904dc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3904DCu;
    {
        const bool branch_taken_0x3904dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3904E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904DCu;
        // 0x3904e0: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904dc) {
            ctx->pc = 0x39050Cu;
            goto label_39050c;
        }
    }
    ctx->pc = 0x3904E4u;
    // 0x3904e4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3904e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3904e8:
    // 0x3904e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3904e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3904ec: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x3904ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3904f0: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x3904f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3904f4: 0x0  nop
    ctx->pc = 0x3904f4u;
    // NOP
    // 0x3904f8: 0x0  nop
    ctx->pc = 0x3904f8u;
    // NOP
    // 0x3904fc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3904FCu;
    {
        const bool branch_taken_0x3904fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3904fc) {
            ctx->pc = 0x3904E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3904e8;
        }
    }
    ctx->pc = 0x390504u;
    // 0x390504: 0x10400379  beqz        $v0, . + 4 + (0x379 << 2)
    ctx->pc = 0x390504u;
    {
        const bool branch_taken_0x390504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390504u;
        // 0x390508: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390504) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x39050Cu;
label_39050c:
    // 0x39050c: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x39050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x390510: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x390510u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x390514: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x390514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390518: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x390518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x39051c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39051cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390520: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x390520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x390524: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x390524u;
    {
        const bool branch_taken_0x390524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390524u;
        // 0x390528: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390524) {
            ctx->pc = 0x390590u;
            goto label_390590;
        }
    }
    ctx->pc = 0x39052Cu;
    // 0x39052c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x39052cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x390530: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x390530u;
    {
        const bool branch_taken_0x390530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390530u;
        // 0x390534: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390530) {
            ctx->pc = 0x390594u;
            goto label_390594;
        }
    }
    ctx->pc = 0x390538u;
    // 0x390538: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x390538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39053c: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x39053cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_390540:
    // 0x390540: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390540u;
    {
        const bool branch_taken_0x390540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390540u;
        // 0x390544: 0x8fa50198  lw          $a1, 0x198($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390540) {
            ctx->pc = 0x39055Cu;
            goto label_39055c;
        }
    }
    ctx->pc = 0x390548u;
    // 0x390548: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x390548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39054c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x39054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x390550: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x390550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x390554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x390554u;
    {
        const bool branch_taken_0x390554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390554u;
        // 0x390558: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390554) {
            ctx->pc = 0x390570u;
            goto label_390570;
        }
    }
    ctx->pc = 0x39055Cu;
label_39055c:
    // 0x39055c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x39055cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x390560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390560u;
    {
        const bool branch_taken_0x390560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390560u;
        // 0x390564: 0x2432818  mult        $a1, $s2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390560) {
            ctx->pc = 0x390570u;
            goto label_390570;
        }
    }
    ctx->pc = 0x390568u;
    // 0x390568: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x390568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x39056c: 0x2452ffd0  addiu       $s2, $v0, -0x30
    ctx->pc = 0x39056cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_390570:
    // 0x390570: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x390570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x390574: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x390574u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x390578: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x390578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x39057c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39057Cu;
    {
        const bool branch_taken_0x39057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39057Cu;
        // 0x390580: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39057c) {
            ctx->pc = 0x390590u;
            goto label_390590;
        }
    }
    ctx->pc = 0x390584u;
    // 0x390584: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x390584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x390588: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x390588u;
    {
        const bool branch_taken_0x390588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390588u;
        // 0x39058c: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390588) {
            ctx->pc = 0x390540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390540;
        }
    }
    ctx->pc = 0x390590u;
label_390590:
    // 0x390590: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x390590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_390594:
    // 0x390594: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x390594u;
    {
        const bool branch_taken_0x390594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x390598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390594u;
        // 0x390598: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390594) {
            ctx->pc = 0x3906DCu;
            goto label_3906dc;
        }
    }
    ctx->pc = 0x39059Cu;
    // 0x39059c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39059cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3905a0: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3905A0u;
    {
        const bool branch_taken_0x3905a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3905A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905A0u;
        // 0x3905a4: 0x82840000  lb          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905a0) {
            ctx->pc = 0x3905F8u;
            goto label_3905f8;
        }
    }
    ctx->pc = 0x3905A8u;
    // 0x3905a8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3905a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3905ac: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3905ACu;
    {
        const bool branch_taken_0x3905ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3905ac) {
            ctx->pc = 0x3905B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3905ACu;
            // 0x3905b0: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3905D8u;
            goto label_3905d8;
        }
    }
    ctx->pc = 0x3905B4u;
    // 0x3905b4: 0x0  nop
    ctx->pc = 0x3905b4u;
    // NOP
label_3905b8:
    // 0x3905b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3905b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3905bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3905bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3905c0: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x3905c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3905c4: 0x0  nop
    ctx->pc = 0x3905c4u;
    // NOP
    // 0x3905c8: 0x0  nop
    ctx->pc = 0x3905c8u;
    // NOP
    // 0x3905cc: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3905CCu;
    {
        const bool branch_taken_0x3905cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3905cc) {
            ctx->pc = 0x3905B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3905b8;
        }
    }
    ctx->pc = 0x3905D4u;
    // 0x3905d4: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3905d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3905d8:
    // 0x3905d8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3905d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3905dc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3905DCu;
    {
        const bool branch_taken_0x3905dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3905E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905DCu;
        // 0x3905e0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905dc) {
            ctx->pc = 0x3906E0u;
            goto label_3906e0;
        }
    }
    ctx->pc = 0x3905E4u;
    // 0x3905e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3905e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3905e8: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x3905e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3905ec: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x3905ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x3905f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3905F0u;
    {
        const bool branch_taken_0x3905f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905F0u;
        // 0x3905f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905f0) {
            ctx->pc = 0x390608u;
            goto label_390608;
        }
    }
    ctx->pc = 0x3905F8u;
label_3905f8:
    // 0x3905f8: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x3905f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3905fc: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x3905fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x390600: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x390600u;
    {
        const bool branch_taken_0x390600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390600u;
        // 0x390604: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390600) {
            ctx->pc = 0x3906E0u;
            goto label_3906e0;
        }
    }
    ctx->pc = 0x390608u;
label_390608:
    // 0x390608: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x390608u;
    {
        const bool branch_taken_0x390608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390608u;
        // 0x39060c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390608) {
            ctx->pc = 0x3906BCu;
            goto label_3906bc;
        }
    }
    ctx->pc = 0x390610u;
    // 0x390610: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x390610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390614: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x390614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x390618: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x390618u;
    {
        const bool branch_taken_0x390618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390618u;
        // 0x39061c: 0x1074021  addu        $t0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390618) {
            ctx->pc = 0x390670u;
            goto label_390670;
        }
    }
    ctx->pc = 0x390620u;
    // 0x390620: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x390620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x390624: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x390624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390628:
    // 0x390628: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x390628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x39062c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39062Cu;
    {
        const bool branch_taken_0x39062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39062Cu;
        // 0x390630: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39062c) {
            ctx->pc = 0x390648u;
            goto label_390648;
        }
    }
    ctx->pc = 0x390634u;
    // 0x390634: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x390634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x390638: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x390638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39063c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x39063cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x390640: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x390640u;
    {
        const bool branch_taken_0x390640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390640u;
        // 0x390644: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390640) {
            ctx->pc = 0x390658u;
            goto label_390658;
        }
    }
    ctx->pc = 0x390648u;
label_390648:
    // 0x390648: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x390648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x39064c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39064Cu;
    {
        const bool branch_taken_0x39064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39064Cu;
        // 0x390650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39064c) {
            ctx->pc = 0x390658u;
            goto label_390658;
        }
    }
    ctx->pc = 0x390654u;
    // 0x390654: 0x2429018  mult        $s2, $s2, $v0
    ctx->pc = 0x390654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_390658:
    // 0x390658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x390658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39065c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x39065cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x390660: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x390660u;
    {
        const bool branch_taken_0x390660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390660u;
        // 0x390664: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390660) {
            ctx->pc = 0x390628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390628;
        }
    }
    ctx->pc = 0x390668u;
    // 0x390668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390668u;
    {
        const bool branch_taken_0x390668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390668u;
        // 0x39066c: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390668) {
            ctx->pc = 0x39067Cu;
            goto label_39067c;
        }
    }
    ctx->pc = 0x390670u;
label_390670:
    // 0x390670: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x390670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x390674: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x390674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390678: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x390678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_39067c:
    // 0x39067c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39067Cu;
    {
        const bool branch_taken_0x39067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39067Cu;
        // 0x390680: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39067c) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x390684u;
    // 0x390684: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x390684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x390688: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x390688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39068c: 0xa00013  mtlo        $a1
    ctx->pc = 0x39068cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x390690: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x390690u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x390694: 0x2012  mflo        $a0
    ctx->pc = 0x390694u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x390698: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x390698u;
    {
        const bool branch_taken_0x390698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390698u;
        // 0x39069c: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390698) {
            ctx->pc = 0x3906B4u;
            goto label_3906b4;
        }
    }
    ctx->pc = 0x3906A0u;
label_3906a0:
    // 0x3906a0: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x3906a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3906a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3906A4u;
    {
        const bool branch_taken_0x3906a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906A4u;
        // 0x3906a8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906a4) {
            ctx->pc = 0x3906B4u;
            goto label_3906b4;
        }
    }
    ctx->pc = 0x3906ACu;
    // 0x3906ac: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x3906acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3906b0: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x3906b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3906b4:
    // 0x3906b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3906B4u;
    {
        const bool branch_taken_0x3906b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906B4u;
        // 0x3906b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906b4) {
            ctx->pc = 0x3906C0u;
            goto label_3906c0;
        }
    }
    ctx->pc = 0x3906BCu;
label_3906bc:
    // 0x3906bc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x3906bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3906c0:
    // 0x3906c0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3906c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3906c4: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x3906c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3906c8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3906cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3906ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3906d0: 0x2ca3000a  sltiu       $v1, $a1, 0xA
    ctx->pc = 0x3906d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3906d4: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3906D4u;
    {
        const bool branch_taken_0x3906d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3906d4) {
            ctx->pc = 0x390608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390608;
        }
    }
    ctx->pc = 0x3906DCu;
label_3906dc:
    // 0x3906dc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3906dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3906e0:
    // 0x3906e0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3906E0u;
    {
        const bool branch_taken_0x3906e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3906E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906E0u;
        // 0x3906e4: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906e0) {
            ctx->pc = 0x3906F4u;
            goto label_3906f4;
        }
    }
    ctx->pc = 0x3906E8u;
    // 0x3906e8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x3906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3906ec: 0x1482004a  bne         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3906ECu;
    {
        const bool branch_taken_0x3906ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3906ec) {
            ctx->pc = 0x390818u;
            goto label_390818;
        }
    }
    ctx->pc = 0x3906F4u;
label_3906f4:
    // 0x3906f4: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3906F4u;
    {
        const bool branch_taken_0x3906f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3906f4) {
            ctx->pc = 0x3906F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3906F4u;
            // 0x3906f8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390714u;
            goto label_390714;
        }
    }
    ctx->pc = 0x3906FCu;
    // 0x3906fc: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3906FCu;
    {
        const bool branch_taken_0x3906fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3906fc) {
            ctx->pc = 0x390700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3906FCu;
            // 0x390700: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390714u;
            goto label_390714;
        }
    }
    ctx->pc = 0x390704u;
    // 0x390704: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x390704u;
    {
        const bool branch_taken_0x390704 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x390704) {
            ctx->pc = 0x390708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390704u;
            // 0x390708: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390714u;
            goto label_390714;
        }
    }
    ctx->pc = 0x39070Cu;
    // 0x39070c: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x39070Cu;
    {
        const bool branch_taken_0x39070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39070Cu;
        // 0x390710: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39070c) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x390714u;
label_390714:
    // 0x390714: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x390714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x390718: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x390718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x39071c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x39071cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x390720: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390720u;
    {
        const bool branch_taken_0x390720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x390724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390720u;
        // 0x390724: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390720) {
            ctx->pc = 0x390738u;
            goto label_390738;
        }
    }
    ctx->pc = 0x390728u;
    // 0x390728: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x390728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x39072c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39072Cu;
    {
        const bool branch_taken_0x39072c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x390730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39072Cu;
        // 0x390730: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39072c) {
            ctx->pc = 0x390744u;
            goto label_390744;
        }
    }
    ctx->pc = 0x390734u;
    // 0x390734: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x390734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390738:
    // 0x390738: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x390738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39073c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x39073cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x390740: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x390740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_390744:
    // 0x390744: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x390744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x390748: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x390748u;
    {
        const bool branch_taken_0x390748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390748u;
        // 0x39074c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390748) {
            ctx->pc = 0x390814u;
            goto label_390814;
        }
    }
    ctx->pc = 0x390750u;
    // 0x390750: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x390750u;
    {
        const bool branch_taken_0x390750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x390750) {
            ctx->pc = 0x390754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390750u;
            // 0x390754: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390778u;
            goto label_390778;
        }
    }
    ctx->pc = 0x390758u;
label_390758:
    // 0x390758: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x390758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39075c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x39075cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x390760: 0x0  nop
    ctx->pc = 0x390760u;
    // NOP
    // 0x390764: 0x0  nop
    ctx->pc = 0x390764u;
    // NOP
    // 0x390768: 0x0  nop
    ctx->pc = 0x390768u;
    // NOP
    // 0x39076c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39076Cu;
    {
        const bool branch_taken_0x39076c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39076c) {
            ctx->pc = 0x390758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390758;
        }
    }
    ctx->pc = 0x390774u;
    // 0x390774: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x390774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_390778:
    // 0x390778: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x390778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x39077c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x39077Cu;
    {
        const bool branch_taken_0x39077c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39077Cu;
        // 0x390780: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39077c) {
            ctx->pc = 0x39080Cu;
            goto label_39080c;
        }
    }
    ctx->pc = 0x390784u;
    // 0x390784: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x390784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390788: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x390788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x39078c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39078cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x390790: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x390790u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x390794: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x390794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x390798: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x390798u;
    {
        const bool branch_taken_0x390798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390798) {
            ctx->pc = 0x39079Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390798u;
            // 0x39079c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3907E0u;
            goto label_3907e0;
        }
    }
    ctx->pc = 0x3907A0u;
    // 0x3907a0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3907a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3907a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3907A4u;
    {
        const bool branch_taken_0x3907a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3907A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907A4u;
        // 0x3907a8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907a4) {
            ctx->pc = 0x3907DCu;
            goto label_3907dc;
        }
    }
    ctx->pc = 0x3907ACu;
    // 0x3907ac: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x3907acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3907b0:
    // 0x3907b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3907b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3907b4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3907b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3907b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3907b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3907bc: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x3907bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3907c0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x3907c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x3907c4: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3907c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3907c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3907C8u;
    {
        const bool branch_taken_0x3907c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3907CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907C8u;
        // 0x3907cc: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907c8) {
            ctx->pc = 0x3907DCu;
            goto label_3907dc;
        }
    }
    ctx->pc = 0x3907D0u;
    // 0x3907d0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3907d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3907d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3907D4u;
    {
        const bool branch_taken_0x3907d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3907D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907D4u;
        // 0x3907d8: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907d4) {
            ctx->pc = 0x3907B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3907b0;
        }
    }
    ctx->pc = 0x3907DCu;
label_3907dc:
    // 0x3907dc: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x3907dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3907e0:
    // 0x3907e0: 0x2861023  subu        $v0, $s4, $a2
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x3907e4: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x3907e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x3907e8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3907e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3907ec: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x3907ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x3907f0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x3907f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3907f4: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x3907f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x3907f8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x3907f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3907fc: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x3907fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x390800: 0x89280b  movn        $a1, $a0, $t1
    ctx->pc = 0x390800u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x390804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390804u;
    {
        const bool branch_taken_0x390804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390804u;
        // 0x390808: 0xafa5018c  sw          $a1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390804) {
            ctx->pc = 0x390818u;
            goto label_390818;
        }
    }
    ctx->pc = 0x39080Cu;
label_39080c:
    // 0x39080c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39080Cu;
    {
        const bool branch_taken_0x39080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39080Cu;
        // 0x390810: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39080c) {
            ctx->pc = 0x390818u;
            goto label_390818;
        }
    }
    ctx->pc = 0x390814u;
label_390814:
    // 0x390814: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x390814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390818:
    // 0x390818: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390818u;
    {
        const bool branch_taken_0x390818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390818u;
        // 0x39081c: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390818) {
            ctx->pc = 0x39082Cu;
            goto label_39082c;
        }
    }
    ctx->pc = 0x390820u;
    // 0x390820: 0x28a800b  movn        $s0, $s4, $t2
    ctx->pc = 0x390820u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x390824: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x390824u;
    {
        const bool branch_taken_0x390824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390824u;
        // 0x390828: 0x207a00a  movz        $s4, $s0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390824) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x39082Cu;
label_39082c:
    // 0x39082c: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x39082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x390830: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x390830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x390834: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x390834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x390838: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x390838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x39083c: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x39083cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x390840: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x390840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x390844: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x390844u;
    SET_GPR_U32(ctx, 31, 0x39084Cu);
    ctx->pc = 0x390848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390844u;
    // 0x390848: 0x236b00a  movz        $s6, $s1, $s6 (Delay Slot)
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x390844u, 0x39084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39084Cu;
label_39084c:
    // 0x39084c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x39084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x390850: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390850u;
    {
        const bool branch_taken_0x390850 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x390854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390850u;
        // 0x390854: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390850) {
            ctx->pc = 0x39086Cu;
            goto label_39086c;
        }
    }
    ctx->pc = 0x390858u;
    // 0x390858: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x390858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x39085c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x39085cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x390860: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x390860u;
    SET_GPR_U32(ctx, 31, 0x390868u);
    ctx->pc = 0x390864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390860u;
    // 0x390864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x390860u, 0x390868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390868u;
label_390868:
    // 0x390868: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390868u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39086c:
    // 0x39086c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x39086cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x390870: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x390870u;
    {
        const bool branch_taken_0x390870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390870u;
        // 0x390874: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390870) {
            ctx->pc = 0x3908D0u;
            goto label_3908d0;
        }
    }
    ctx->pc = 0x390878u;
    // 0x390878: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x390878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x39087c: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x39087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x390880: 0x2463d890  addiu       $v1, $v1, -0x2770
    ctx->pc = 0x390880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957200));
    // 0x390884: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x390884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x390888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39088c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x39088cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390890: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390890u;
    SET_GPR_U32(ctx, 31, 0x390898u);
    ctx->pc = 0x390894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390890u;
    // 0x390894: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390890u, 0x390898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390898u;
label_390898:
    // 0x390898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39089c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x39089Cu;
    SET_GPR_U32(ctx, 31, 0x3908A4u);
    ctx->pc = 0x3908A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39089Cu;
    // 0x3908a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x39089Cu, 0x3908A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908A4u;
label_3908a4:
    // 0x3908a4: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3908A4u;
    {
        const bool branch_taken_0x3908a4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3908A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908A4u;
        // 0x3908a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908a4) {
            ctx->pc = 0x3908C0u;
            goto label_3908c0;
        }
    }
    ctx->pc = 0x3908ACu;
    // 0x3908ac: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3908acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3908b0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3908b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3908b4: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3908B4u;
    SET_GPR_U32(ctx, 31, 0x3908BCu);
    ctx->pc = 0x3908B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908B4u;
    // 0x3908b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3908B4u, 0x3908BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908BCu;
label_3908bc:
    // 0x3908bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3908bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3908c0:
    // 0x3908c0: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3908C0u;
    SET_GPR_U32(ctx, 31, 0x3908C8u);
    ctx->pc = 0x3908C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908C0u;
    // 0x3908c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3908C0u, 0x3908C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908C8u;
label_3908c8:
    // 0x3908c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3908c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908cc: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3908ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_3908d0:
    // 0x3908d0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3908D0u;
    {
        const bool branch_taken_0x3908d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3908D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908D0u;
        // 0x3908d4: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908d0) {
            ctx->pc = 0x390994u;
            goto label_390994;
        }
    }
    ctx->pc = 0x3908D8u;
    // 0x3908d8: 0x10a00285  beqz        $a1, . + 4 + (0x285 << 2)
    ctx->pc = 0x3908D8u;
    {
        const bool branch_taken_0x3908d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3908DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908D8u;
        // 0x3908dc: 0x8fa20188  lw          $v0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908d8) {
            ctx->pc = 0x3912F0u;
            goto label_3912f0;
        }
    }
    ctx->pc = 0x3908E0u;
    // 0x3908e0: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3908E0u;
    {
        const bool branch_taken_0x3908e0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3908E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908E0u;
        // 0x3908e4: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908e0) {
            ctx->pc = 0x390964u;
            goto label_390964;
        }
    }
    ctx->pc = 0x3908E8u;
    // 0x3908e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3908E8u;
    {
        const bool branch_taken_0x3908e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908E8u;
        // 0x3908ec: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908e8) {
            ctx->pc = 0x390904u;
            goto label_390904;
        }
    }
    ctx->pc = 0x3908F0u;
    // 0x3908f0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3908f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3908f4: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x3908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x3908f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3908f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3908FCu;
    {
        const bool branch_taken_0x3908fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908FCu;
        // 0x390900: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908fc) {
            ctx->pc = 0x390954u;
            goto label_390954;
        }
    }
    ctx->pc = 0x390904u;
label_390904:
    // 0x390904: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x390904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x390908: 0x713023  subu        $a2, $v1, $s1
    ctx->pc = 0x390908u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x39090c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x39090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x390910: 0x24c20016  addiu       $v0, $a2, 0x16
    ctx->pc = 0x390910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x390914: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x390914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x390918: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x390918u;
    {
        const bool branch_taken_0x390918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390918u;
        // 0x39091c: 0x2331023  subu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390918) {
            ctx->pc = 0x39099Cu;
            goto label_39099c;
        }
    }
    ctx->pc = 0x390920u;
    // 0x390920: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x390920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x390924: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x390924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x390928: 0x2610d890  addiu       $s0, $s0, -0x2770
    ctx->pc = 0x390928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957200));
    // 0x39092c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x39092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x390930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x390930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x390934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390938: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x390938u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39093c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x39093Cu;
    SET_GPR_U32(ctx, 31, 0x390944u);
    ctx->pc = 0x390940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39093Cu;
    // 0x390940: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x39093Cu, 0x390944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390944u;
label_390944:
    // 0x390944: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x390944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x390948: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x390948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x39094c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x390950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390954:
    // 0x390954: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390954u;
    SET_GPR_U32(ctx, 31, 0x39095Cu);
    ctx->pc = 0x390958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390954u;
    // 0x390958: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390954u, 0x39095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39095Cu;
label_39095c:
    // 0x39095c: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x39095Cu;
    {
        const bool branch_taken_0x39095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39095Cu;
        // 0x390960: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39095c) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x390964u;
label_390964:
    // 0x390964: 0x28a2ffea  slti        $v0, $a1, -0x16
    ctx->pc = 0x390964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x390968: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x390968u;
    {
        const bool branch_taken_0x390968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390968u;
        // 0x39096c: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390968) {
            ctx->pc = 0x390998u;
            goto label_390998;
        }
    }
    ctx->pc = 0x390970u;
    // 0x390970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x390970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x390974: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x390974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x390978: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x390978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x39097c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390980: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x390980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390984: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x390984u;
    SET_GPR_U32(ctx, 31, 0x39098Cu);
    ctx->pc = 0x390988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390984u;
    // 0x390988: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x390984u, 0x39098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39098Cu;
label_39098c:
    // 0x39098c: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x39098Cu;
    {
        const bool branch_taken_0x39098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39098Cu;
        // 0x390990: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39098c) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x390994u;
label_390994:
    // 0x390994: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x390994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_390998:
    // 0x390998: 0x2331023  subu        $v0, $s1, $s3
    ctx->pc = 0x390998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_39099c:
    // 0x39099c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x39099cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3909a0: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3909A0u;
    {
        const bool branch_taken_0x3909a0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3909A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A0u;
        // 0x3909a4: 0x3206000f  andi        $a2, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909a0) {
            ctx->pc = 0x390AF8u;
            goto label_390af8;
        }
    }
    ctx->pc = 0x3909A8u;
    // 0x3909a8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3909A8u;
    {
        const bool branch_taken_0x3909a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A8u;
        // 0x3909ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909a8) {
            ctx->pc = 0x3909CCu;
            goto label_3909cc;
        }
    }
    ctx->pc = 0x3909B0u;
    // 0x3909b0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3909b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3909b4: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x3909b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x3909b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3909b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3909bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3909bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3909c0: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3909C0u;
    SET_GPR_U32(ctx, 31, 0x3909C8u);
    ctx->pc = 0x3909C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909C0u;
    // 0x3909c4: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3909C0u, 0x3909C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909C8u;
label_3909c8:
    // 0x3909c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3909c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3909cc:
    // 0x3909cc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3909ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3909d0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3909d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3909d4: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x3909D4u;
    {
        const bool branch_taken_0x3909d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909D4u;
        // 0x3909d8: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909d4) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x3909DCu;
    // 0x3909dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3909DCu;
    {
        const bool branch_taken_0x3909dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3909dc) {
            ctx->pc = 0x3909E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3909DCu;
            // 0x3909e0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390A00u;
            goto label_390a00;
        }
    }
    ctx->pc = 0x3909E4u;
label_3909e4:
    // 0x3909e4: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3909E4u;
    SET_GPR_U32(ctx, 31, 0x3909ECu);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3909E4u, 0x3909ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909ECu;
label_3909ec:
    // 0x3909ec: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3909ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3909f0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3909f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3909f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3909f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3909f8: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x3909F8u;
    {
        const bool branch_taken_0x3909f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909F8u;
        // 0x3909fc: 0xdc95ea00  ld          $s5, -0x1600($a0) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 4294961664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909f8) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x390A00u;
label_390a00:
    // 0x390a00: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x390A00u;
    {
        const bool branch_taken_0x390a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A00u;
        // 0x390a04: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a00) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x390A08u;
    // 0x390a08: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x390A08u;
    {
        const bool branch_taken_0x390a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A08u;
        // 0x390a0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a08) {
            ctx->pc = 0x390A54u;
            goto label_390a54;
        }
    }
    ctx->pc = 0x390A10u;
    // 0x390a10: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x390a10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x390a14: 0x0  nop
    ctx->pc = 0x390a14u;
    // NOP
label_390a18:
    // 0x390a18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x390a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x390a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x390A1Cu;
    {
        const bool branch_taken_0x390a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A1Cu;
        // 0x390a20: 0x2663d948  addiu       $v1, $s3, -0x26B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a1c) {
            ctx->pc = 0x390A3Cu;
            goto label_390a3c;
        }
    }
    ctx->pc = 0x390A24u;
    // 0x390a24: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x390a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x390a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390a2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390a30: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390A30u;
    SET_GPR_U32(ctx, 31, 0x390A38u);
    ctx->pc = 0x390A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A30u;
    // 0x390a34: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390A30u, 0x390A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A38u;
label_390a38:
    // 0x390a38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390a38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390a3c:
    // 0x390a3c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x390a3cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x390a40: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x390a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x390a44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x390A44u;
    {
        const bool branch_taken_0x390a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A44u;
        // 0x390a48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a44) {
            ctx->pc = 0x390A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390a18;
        }
    }
    ctx->pc = 0x390A4Cu;
    // 0x390a4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390A4Cu;
    {
        const bool branch_taken_0x390a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A4Cu;
        // 0x390a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a4c) {
            ctx->pc = 0x390A5Cu;
            goto label_390a5c;
        }
    }
    ctx->pc = 0x390A54u;
label_390a54:
    // 0x390a54: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x390a54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x390a58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_390a5c:
    // 0x390a5c: 0x3c05fcb0  lui         $a1, 0xFCB0
    ctx->pc = 0x390a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64688 << 16));
    // 0x390a60: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x390a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x390a64: 0x2666d948  addiu       $a2, $s3, -0x26B8
    ctx->pc = 0x390a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957384));
    // 0x390a68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390a6c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x390a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x390a70: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x390a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x390a74: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x390a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x390a78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x390a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x390a7c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x390a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x390a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390a84: 0x82a825  or          $s5, $a0, $v0
    ctx->pc = 0x390a84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x390a88: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x390a88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390a8c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390A8Cu;
    SET_GPR_U32(ctx, 31, 0x390A94u);
    ctx->pc = 0x390A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A8Cu;
    // 0x390a90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390A8Cu, 0x390A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A94u;
label_390a94:
    // 0x390a94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390a98: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x390a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x390a9c: 0x3c037ca0  lui         $v1, 0x7CA0
    ctx->pc = 0x390a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31904 << 16));
    // 0x390aa0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390aa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390aa4: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x390aa4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x390aa8: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x390aa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x390aac: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x390AACu;
    {
        const bool branch_taken_0x390aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AACu;
        // 0x390ab0: 0x3c027c90  lui         $v0, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390aac) {
            ctx->pc = 0x3909E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3909e4;
        }
    }
    ctx->pc = 0x390AB4u;
    // 0x390ab4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x390ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x390ab8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x390AB8u;
    {
        const bool branch_taken_0x390ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AB8u;
        // 0x390abc: 0x2f0b824  and         $s7, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ab8) {
            ctx->pc = 0x390AD8u;
            goto label_390ad8;
        }
    }
    ctx->pc = 0x390AC0u;
    // 0x390ac0: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x390ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x390ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390ac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390acc: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x390accu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x390ad0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x390AD0u;
    {
        const bool branch_taken_0x390ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AD0u;
        // 0x390ad4: 0x2f0a825  or          $s5, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ad0) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x390AD8u;
label_390ad8:
    // 0x390ad8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x390ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390adc: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x390adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x390ae0: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x390ae0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x390ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x390ae8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x390ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x390aec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x390aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390af0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x390AF0u;
    {
        const bool branch_taken_0x390af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AF0u;
        // 0x390af4: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390af0) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x390AF8u;
label_390af8:
    // 0x390af8: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x390AF8u;
    {
        const bool branch_taken_0x390af8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x390AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AF8u;
        // 0x390afc: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390af8) {
            ctx->pc = 0x390C30u;
            goto label_390c30;
        }
    }
    ctx->pc = 0x390B00u;
    // 0x390b00: 0x108023  negu        $s0, $s0
    ctx->pc = 0x390b00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x390b04: 0x3206000f  andi        $a2, $s0, 0xF
    ctx->pc = 0x390b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x390b08: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x390B08u;
    {
        const bool branch_taken_0x390b08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B08u;
        // 0x390b0c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b08) {
            ctx->pc = 0x390B2Cu;
            goto label_390b2c;
        }
    }
    ctx->pc = 0x390B10u;
    // 0x390b10: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x390b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x390b14: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x390b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x390b18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x390b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x390b20: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x390B20u;
    SET_GPR_U32(ctx, 31, 0x390B28u);
    ctx->pc = 0x390B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B20u;
    // 0x390b24: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x390B20u, 0x390B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B28u;
label_390b28:
    // 0x390b28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390b28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390b2c:
    // 0x390b2c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x390b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x390b30: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x390b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x390b34: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x390B34u;
    {
        const bool branch_taken_0x390b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B34u;
        // 0x390b38: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b34) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x390B3Cu;
    // 0x390b3c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x390b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x390b40: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x390B40u;
    {
        const bool branch_taken_0x390b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B40u;
        // 0x390b44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b40) {
            ctx->pc = 0x390B8Cu;
            goto label_390b8c;
        }
    }
    ctx->pc = 0x390B48u;
    // 0x390b48: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x390b48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x390b4c: 0x0  nop
    ctx->pc = 0x390b4cu;
    // NOP
label_390b50:
    // 0x390b50: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x390b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x390b54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x390B54u;
    {
        const bool branch_taken_0x390b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B54u;
        // 0x390b58: 0x2663d970  addiu       $v1, $s3, -0x2690 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b54) {
            ctx->pc = 0x390B74u;
            goto label_390b74;
        }
    }
    ctx->pc = 0x390B5Cu;
    // 0x390b5c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x390b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x390b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390b64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b68: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390B68u;
    SET_GPR_U32(ctx, 31, 0x390B70u);
    ctx->pc = 0x390B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B68u;
    // 0x390b6c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390B68u, 0x390B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B70u;
label_390b70:
    // 0x390b70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390b70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390b74:
    // 0x390b74: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x390b74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x390b78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x390b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x390b7c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x390B7Cu;
    {
        const bool branch_taken_0x390b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B7Cu;
        // 0x390b80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b7c) {
            ctx->pc = 0x390B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390b50;
        }
    }
    ctx->pc = 0x390B84u;
    // 0x390b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390B84u;
    {
        const bool branch_taken_0x390b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B84u;
        // 0x390b88: 0x2663d970  addiu       $v1, $s3, -0x2690 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b84) {
            ctx->pc = 0x390B94u;
            goto label_390b94;
        }
    }
    ctx->pc = 0x390B8Cu;
label_390b8c:
    // 0x390b8c: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x390b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x390b90: 0x2663d970  addiu       $v1, $s3, -0x2690
    ctx->pc = 0x390b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957424));
label_390b94:
    // 0x390b94: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x390b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x390b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390b9c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x390b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ba0: 0xdc520000  ld          $s2, 0x0($v0)
    ctx->pc = 0x390ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ba8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x390ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bac: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390BACu;
    SET_GPR_U32(ctx, 31, 0x390BB4u);
    ctx->pc = 0x390BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BACu;
    // 0x390bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390BACu, 0x390BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BB4u;
label_390bb4:
    // 0x390bb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390bb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x390bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bbc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390BBCu;
    SET_GPR_U32(ctx, 31, 0x390BC4u);
    ctx->pc = 0x390BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BBCu;
    // 0x390bc0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390BBCu, 0x390BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BC4u;
label_390bc4:
    // 0x390bc4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x390BC4u;
    {
        const bool branch_taken_0x390bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BC4u;
        // 0x390bc8: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bc4) {
            ctx->pc = 0x390C30u;
            goto label_390c30;
        }
    }
    ctx->pc = 0x390BCCu;
    // 0x390bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bd0: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x390BD0u;
    SET_GPR_U32(ctx, 31, 0x390BD8u);
    ctx->pc = 0x390BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BD0u;
    // 0x390bd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x390BD0u, 0x390BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BD8u;
label_390bd8:
    // 0x390bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bdc: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390BDCu;
    SET_GPR_U32(ctx, 31, 0x390BE4u);
    ctx->pc = 0x390BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BDCu;
    // 0x390be0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390BDCu, 0x390BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BE4u;
label_390be4:
    // 0x390be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390be8: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390BE8u;
    SET_GPR_U32(ctx, 31, 0x390BF0u);
    ctx->pc = 0x390BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BE8u;
    // 0x390bec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390BE8u, 0x390BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BF0u;
label_390bf0:
    // 0x390bf0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x390BF0u;
    {
        const bool branch_taken_0x390bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390bf0) {
            ctx->pc = 0x390BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BF0u;
            // 0x390bf4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390C28u;
            goto label_390c28;
        }
    }
    ctx->pc = 0x390BF8u;
label_390bf8:
    // 0x390bf8: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x390BF8u;
    SET_GPR_U32(ctx, 31, 0x390C00u);
    ctx->pc = 0x390BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BF8u;
    // 0x390bfc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x390BF8u, 0x390C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C00u;
label_390c00:
    // 0x390c00: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x390c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x390c04: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x390C04u;
    {
        const bool branch_taken_0x390c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C04u;
        // 0x390c08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c04) {
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x390C0Cu;
label_390c0c:
    // 0x390c0c: 0xc0e3ff8  jal         func_38FFE0
    ctx->pc = 0x390C0Cu;
    SET_GPR_U32(ctx, 31, 0x390C14u);
    ctx->pc = 0x390C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C0Cu;
    // 0x390c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x390C0Cu, 0x390C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C14u;
label_390c14:
    // 0x390c14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390c18: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x390C18u;
    SET_GPR_U32(ctx, 31, 0x390C20u);
    ctx->pc = 0x390C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C18u;
    // 0x390c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x390C18u, 0x390C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C20u;
label_390c20:
    // 0x390c20: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x390C20u;
    {
        const bool branch_taken_0x390c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C20u;
        // 0x390c24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c20) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390C28u;
label_390c28:
    // 0x390c28: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x390c28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_390c2c:
    // 0x390c2c: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x390c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_390c30:
    // 0x390c30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x390c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390c34: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x390c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x390c38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x390c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390c3c: 0xc0e3dc0  jal         func_38F700
    ctx->pc = 0x390C3Cu;
    SET_GPR_U32(ctx, 31, 0x390C44u);
    ctx->pc = 0x390C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C3Cu;
    // 0x390c40: 0x8fa80198  lw          $t0, 0x198($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F700u, 0x390C3Cu, 0x390C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C44u;
label_390c44:
    // 0x390c44: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x390c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x390c48: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x390c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x390c4c: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x390C4Cu;
    SET_GPR_U32(ctx, 31, 0x390C54u);
    ctx->pc = 0x390C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C4Cu;
    // 0x390c50: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x390C4Cu, 0x390C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C54u;
label_390c54:
    // 0x390c54: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x390c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x390c58: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x390c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x390c5c: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x390c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x390c60: 0xafa401e8  sw          $a0, 0x1E8($sp)
    ctx->pc = 0x390c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 4));
    // 0x390c64: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x390C64u;
    {
        const bool branch_taken_0x390c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C64u;
        // 0x390c68: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c64) {
            ctx->pc = 0x391104u;
            goto label_391104;
        }
    }
    ctx->pc = 0x390C6Cu;
    // 0x390c6c: 0x0  nop
    ctx->pc = 0x390c6cu;
    // NOP
label_390c70:
    // 0x390c70: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x390C70u;
    SET_GPR_U32(ctx, 31, 0x390C78u);
    ctx->pc = 0x390C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C70u;
    // 0x390c74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x390C70u, 0x390C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C78u;
label_390c78:
    // 0x390c78: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x390c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x390c7c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x390c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x390c80: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x390C80u;
    SET_GPR_U32(ctx, 31, 0x390C88u);
    ctx->pc = 0x390C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C80u;
    // 0x390c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x390C80u, 0x390C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C88u;
label_390c88:
    // 0x390c88: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x390C88u;
    {
        const bool branch_taken_0x390c88 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x390C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C88u;
        // 0x390c8c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c88) {
            ctx->pc = 0x390D20u;
            goto label_390d20;
        }
    }
    ctx->pc = 0x390C90u;
    // 0x390c90: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x390C90u;
    {
        const bool branch_taken_0x390c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c90) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390C98u;
label_390c98:
    // 0x390c98: 0x14c00046  bnez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x390C98u;
    {
        const bool branch_taken_0x390c98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x390C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C98u;
        // 0x390c9c: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c98) {
            ctx->pc = 0x390DB4u;
            goto label_390db4;
        }
    }
    ctx->pc = 0x390CA0u;
    // 0x390ca0: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x390CA0u;
    {
        const bool branch_taken_0x390ca0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CA0u;
        // 0x390ca4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ca0) {
            ctx->pc = 0x390CF8u;
            goto label_390cf8;
        }
    }
    ctx->pc = 0x390CA8u;
    // 0x390ca8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x390ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x390cac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390cb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390cb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x390cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x390cb8: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x390CB8u;
    {
        const bool branch_taken_0x390cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x390CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CB8u;
        // 0x390cbc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cb8) {
            ctx->pc = 0x390D64u;
            goto label_390d64;
        }
    }
    ctx->pc = 0x390CC0u;
    // 0x390cc0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x390cc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390cc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x390cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x390cc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x390cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390ccc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390cd4: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x390CD4u;
    {
        const bool branch_taken_0x390cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x390CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CD4u;
        // 0x390cd8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cd4) {
            ctx->pc = 0x390D64u;
            goto label_390d64;
        }
    }
    ctx->pc = 0x390CDCu;
    // 0x390cdc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x390cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x390ce0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390ce4: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x390ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x390ce8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x390ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x390cec: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x390cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x390cf0: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x390CF0u;
    {
        const bool branch_taken_0x390cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CF0u;
        // 0x390cf4: 0x2a83c  dsll32      $s5, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cf0) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390CF8u;
label_390cf8:
    // 0x390cf8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x390cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x390cfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390d00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390d04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x390d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x390d08: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x390D08u;
    {
        const bool branch_taken_0x390d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D08u;
        // 0x390d0c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d08) {
            ctx->pc = 0x390D64u;
            goto label_390d64;
        }
    }
    ctx->pc = 0x390D10u;
    // 0x390d10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390d14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390d18: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x390D18u;
    {
        const bool branch_taken_0x390d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D18u;
        // 0x390d1c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d18) {
            ctx->pc = 0x390D64u;
            goto label_390d64;
        }
    }
    ctx->pc = 0x390D20u;
label_390d20:
    // 0x390d20: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x390d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x390d24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390d28: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x390d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x390d2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x390d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x390d30: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x390d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x390d34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x390d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x390d38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x390d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x390d3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x390d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x390d40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x390d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x390d44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x390d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x390d48: 0xdfa301d8  ld          $v1, 0x1D8($sp)
    ctx->pc = 0x390d48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x390d4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390d50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x390d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x390d54: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x390d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
    // 0x390d58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x390d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x390d5c: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x390D5Cu;
    {
        const bool branch_taken_0x390d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D5Cu;
        // 0x390d60: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d5c) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390D64u;
label_390d64:
    // 0x390d64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390d68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390d68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x390d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x390d70: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x390D70u;
    {
        const bool branch_taken_0x390d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d70) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390D78u;
    // 0x390d78: 0x16c0ffa4  bnez        $s6, . + 4 + (-0x5C << 2)
    ctx->pc = 0x390D78u;
    {
        const bool branch_taken_0x390d78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x390d78) {
            ctx->pc = 0x390C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390c0c;
        }
    }
    ctx->pc = 0x390D80u;
    // 0x390d80: 0xc0e3ff8  jal         func_38FFE0
    ctx->pc = 0x390D80u;
    SET_GPR_U32(ctx, 31, 0x390D88u);
    ctx->pc = 0x390D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D80u;
    // 0x390d84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x390D80u, 0x390D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D88u;
label_390d88:
    // 0x390d88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d8c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x390D8Cu;
    SET_GPR_U32(ctx, 31, 0x390D94u);
    ctx->pc = 0x390D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D8Cu;
    // 0x390d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x390D8Cu, 0x390D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D94u;
label_390d94:
    // 0x390d94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d9c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390D9Cu;
    SET_GPR_U32(ctx, 31, 0x390DA4u);
    ctx->pc = 0x390DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D9Cu;
    // 0x390da0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390D9Cu, 0x390DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DA4u;
label_390da4:
    // 0x390da4: 0x1040ff94  beqz        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x390DA4u;
    {
        const bool branch_taken_0x390da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390da4) {
            ctx->pc = 0x390BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390bf8;
        }
    }
    ctx->pc = 0x390DACu;
    // 0x390dac: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x390DACu;
    {
        const bool branch_taken_0x390dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390dac) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x390DB4u;
label_390db4:
    // 0x390db4: 0xc0e40c6  jal         func_390318
    ctx->pc = 0x390DB4u;
    SET_GPR_U32(ctx, 31, 0x390DBCu);
    ctx->pc = 0x390DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DB4u;
    // 0x390db8: 0x8fa501a8  lw          $a1, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390318u, 0x390DB4u, 0x390DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DBCu;
label_390dbc:
    // 0x390dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390dc0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x390dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x390dc4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x390dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x390dc8: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390DC8u;
    SET_GPR_U32(ctx, 31, 0x390DD0u);
    ctx->pc = 0x390DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DC8u;
    // 0x390dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390DC8u, 0x390DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DD0u;
label_390dd0:
    // 0x390dd0: 0x1c400030  bgtz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x390DD0u;
    {
        const bool branch_taken_0x390dd0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x390dd0) {
            ctx->pc = 0x390E94u;
            goto label_390e94;
        }
    }
    ctx->pc = 0x390DD8u;
    // 0x390dd8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x390DD8u;
    {
        const bool branch_taken_0x390dd8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DD8u;
        // 0x390ddc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390dd8) {
            ctx->pc = 0x390DF0u;
            goto label_390df0;
        }
    }
    ctx->pc = 0x390DE0u;
    // 0x390de0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x390de0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390de4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x390de4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x390de8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x390DE8u;
    {
        const bool branch_taken_0x390de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DE8u;
        // 0x390dec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390de8) {
            ctx->pc = 0x390EC0u;
            goto label_390ec0;
        }
    }
    ctx->pc = 0x390DF0u;
label_390df0:
    // 0x390df0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390df4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390df8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x390DF8u;
    {
        const bool branch_taken_0x390df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DF8u;
        // 0x390dfc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390df8) {
            ctx->pc = 0x390E1Cu;
            goto label_390e1c;
        }
    }
    ctx->pc = 0x390E00u;
    // 0x390e00: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x390e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e04: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x390e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x390e08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390e08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390e10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x390e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x390e14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x390E14u;
    {
        const bool branch_taken_0x390e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E14u;
        // 0x390e18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e14) {
            ctx->pc = 0x390E54u;
            goto label_390e54;
        }
    }
    ctx->pc = 0x390E1Cu;
label_390e1c:
    // 0x390e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390e20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390e24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390e28: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390E28u;
    {
        const bool branch_taken_0x390e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x390E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E28u;
        // 0x390e2c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e28) {
            ctx->pc = 0x390E3Cu;
            goto label_390e3c;
        }
    }
    ctx->pc = 0x390E30u;
    // 0x390e30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390e34: 0x1040ff70  beqz        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x390E34u;
    {
        const bool branch_taken_0x390e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390e34) {
            ctx->pc = 0x390BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390bf8;
        }
    }
    ctx->pc = 0x390E3Cu;
label_390e3c:
    // 0x390e3c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x390e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390e40: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x390e40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x390e44: 0x3411bff0  ori         $s1, $zero, 0xBFF0
    ctx->pc = 0x390e44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x390e48: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x390e48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x390e4c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x390E4Cu;
    {
        const bool branch_taken_0x390e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E4Cu;
        // 0x390e50: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e4c) {
            ctx->pc = 0x390EC4u;
            goto label_390ec4;
        }
    }
    ctx->pc = 0x390E54u;
label_390e54:
    // 0x390e54: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x390e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390e58: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390e5c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390E5Cu;
    SET_GPR_U32(ctx, 31, 0x390E64u);
    ctx->pc = 0x390E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E5Cu;
    // 0x390e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390E5Cu, 0x390E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E64u;
label_390e64:
    // 0x390e64: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390E64u;
    {
        const bool branch_taken_0x390e64 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x390E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E64u;
        // 0x390e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e64) {
            ctx->pc = 0x390E7Cu;
            goto label_390e7c;
        }
    }
    ctx->pc = 0x390E6Cu;
    // 0x390e6c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x390e6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390e70: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x390e70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x390e74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x390E74u;
    {
        const bool branch_taken_0x390e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390e74) {
            ctx->pc = 0x390EB4u;
            goto label_390eb4;
        }
    }
    ctx->pc = 0x390E7Cu;
label_390e7c:
    // 0x390e7c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x390e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390e80: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390e84: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390E84u;
    SET_GPR_U32(ctx, 31, 0x390E8Cu);
    ctx->pc = 0x390E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E84u;
    // 0x390e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390E84u, 0x390E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E8Cu;
label_390e8c:
    // 0x390e8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x390E8Cu;
    {
        const bool branch_taken_0x390e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E8Cu;
        // 0x390e90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e8c) {
            ctx->pc = 0x390EB0u;
            goto label_390eb0;
        }
    }
    ctx->pc = 0x390E94u;
label_390e94:
    // 0x390e94: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x390e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390e98: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390e9c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390E9Cu;
    SET_GPR_U32(ctx, 31, 0x390EA4u);
    ctx->pc = 0x390EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E9Cu;
    // 0x390ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390E9Cu, 0x390EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EA4u;
label_390ea4:
    // 0x390ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ea8: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x390EA8u;
    {
        const bool branch_taken_0x390ea8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x390EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EA8u;
        // 0x390eac: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ea8) {
            ctx->pc = 0x390EC0u;
            goto label_390ec0;
        }
    }
    ctx->pc = 0x390EB0u;
label_390eb0:
    // 0x390eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390eb4:
    // 0x390eb4: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x390EB4u;
    SET_GPR_U32(ctx, 31, 0x390EBCu);
    ctx->pc = 0x390EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EB4u;
    // 0x390eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x390EB4u, 0x390EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EBCu;
label_390ebc:
    // 0x390ebc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x390ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390ec0:
    // 0x390ec0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x390ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_390ec4:
    // 0x390ec4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x390ec4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x390ec8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390ecc: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x390eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ed0: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x390ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x390ed4: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x390ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x390ed8: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x390ED8u;
    {
        const bool branch_taken_0x390ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x390EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390ED8u;
        // 0x390edc: 0xafa30198  sw          $v1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ed8) {
            ctx->pc = 0x390FC0u;
            goto label_390fc0;
        }
    }
    ctx->pc = 0x390EE0u;
    // 0x390ee0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x390ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ee4: 0x3c04fcb0  lui         $a0, 0xFCB0
    ctx->pc = 0x390ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64688 << 16));
    // 0x390ee8: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x390ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390eec: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x390eecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x390ef0: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x390ef0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x390ef4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x390ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x390ef8: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x390ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x390efc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390f00: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x390f00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x390f04: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x390f04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x390f08: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x390f08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x390f0c: 0xc0e3ff8  jal         func_38FFE0
    ctx->pc = 0x390F0Cu;
    SET_GPR_U32(ctx, 31, 0x390F14u);
    ctx->pc = 0x390F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F0Cu;
    // 0x390f10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x390F0Cu, 0x390F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F14u;
label_390f14:
    // 0x390f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f18: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x390F18u;
    SET_GPR_U32(ctx, 31, 0x390F20u);
    ctx->pc = 0x390F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F18u;
    // 0x390f1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x390F18u, 0x390F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F20u;
label_390f20:
    // 0x390f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f24: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x390F24u;
    SET_GPR_U32(ctx, 31, 0x390F2Cu);
    ctx->pc = 0x390F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F24u;
    // 0x390f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x390F24u, 0x390F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F2Cu;
label_390f2c:
    // 0x390f2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f30: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x390f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x390f34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x390f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x390f38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390f38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390f3c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x390f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x390f40: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x390f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x390f44: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x390F44u;
    {
        const bool branch_taken_0x390f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F44u;
        // 0x390f48: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f44) {
            ctx->pc = 0x390FA0u;
            goto label_390fa0;
        }
    }
    ctx->pc = 0x390F4Cu;
    // 0x390f4c: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x390f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x390f50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390f50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390f54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390f58: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390F58u;
    {
        const bool branch_taken_0x390f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x390F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F58u;
        // 0x390f5c: 0xdfa401e0  ld          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f58) {
            ctx->pc = 0x390F74u;
            goto label_390f74;
        }
    }
    ctx->pc = 0x390F60u;
    // 0x390f60: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x390f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390f68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x390f68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390f6c: 0x1052fe9d  beq         $v0, $s2, . + 4 + (-0x163 << 2)
    ctx->pc = 0x390F6Cu;
    {
        const bool branch_taken_0x390f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x390f6c) {
            ctx->pc = 0x3909E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3909e4;
        }
    }
    ctx->pc = 0x390F74u;
label_390f74:
    // 0x390f74: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x390f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x390f78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390f7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390f80: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x390f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x390f84: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x390f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x390f88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x390f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x390f8c: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x390f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x390f90: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x390f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x390f94: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x390f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x390f98: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x390F98u;
    {
        const bool branch_taken_0x390f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F98u;
        // 0x390f9c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f98) {
            ctx->pc = 0x391104u;
            goto label_391104;
        }
    }
    ctx->pc = 0x390FA0u;
label_390fa0:
    // 0x390fa0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x390fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fa4: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x390fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x390fa8: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x390fa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x390facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x390fb0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x390fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x390fb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x390fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390fb8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x390FB8u;
    {
        const bool branch_taken_0x390fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FB8u;
        // 0x390fbc: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fb8) {
            ctx->pc = 0x391048u;
            goto label_391048;
        }
    }
    ctx->pc = 0x390FC0u;
label_390fc0:
    // 0x390fc0: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x390fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x390fc4: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x390fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x390fc8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x390fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x390fcc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x390FCCu;
    {
        const bool branch_taken_0x390fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390fcc) {
            ctx->pc = 0x391024u;
            goto label_391024;
        }
    }
    ctx->pc = 0x390FD4u;
    // 0x390fd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x390fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390fd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390fdc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x390FDCu;
    SET_GPR_U32(ctx, 31, 0x390FE4u);
    ctx->pc = 0x390FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FDCu;
    // 0x390fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x390FDCu, 0x390FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FE4u;
label_390fe4:
    // 0x390fe4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x390FE4u;
    {
        const bool branch_taken_0x390fe4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x390fe4) {
            ctx->pc = 0x391024u;
            goto label_391024;
        }
    }
    ctx->pc = 0x390FECu;
    // 0x390fec: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x390fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390ff0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390ff4: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x390FF4u;
    SET_GPR_U32(ctx, 31, 0x390FFCu);
    ctx->pc = 0x390FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FF4u;
    // 0x390ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x390FF4u, 0x390FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FFCu;
label_390ffc:
    // 0x390ffc: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x390FFCu;
    SET_GPR_U32(ctx, 31, 0x391004u);
    ctx->pc = 0x391000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FFCu;
    // 0x391000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x390FFCu, 0x391004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391004u;
label_391004:
    // 0x391004: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x391004u;
    SET_GPR_U32(ctx, 31, 0x39100Cu);
    ctx->pc = 0x391008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391004u;
    // 0x391008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x391004u, 0x39100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39100Cu;
label_39100c:
    // 0x39100c: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x39100Cu;
    {
        const bool branch_taken_0x39100c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x391010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39100Cu;
        // 0x391010: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39100c) {
            ctx->pc = 0x391024u;
            goto label_391024;
        }
    }
    ctx->pc = 0x391014u;
    // 0x391014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391018: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391018u;
    SET_GPR_U32(ctx, 31, 0x391020u);
    ctx->pc = 0x39101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391018u;
    // 0x39101c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391018u, 0x391020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391020u;
label_391020:
    // 0x391020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x391020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391024:
    // 0x391024: 0xc0e3ff8  jal         func_38FFE0
    ctx->pc = 0x391024u;
    SET_GPR_U32(ctx, 31, 0x39102Cu);
    ctx->pc = 0x391028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391024u;
    // 0x391028: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x391024u, 0x39102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39102Cu;
label_39102c:
    // 0x39102c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391030: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x391030u;
    SET_GPR_U32(ctx, 31, 0x391038u);
    ctx->pc = 0x391034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391030u;
    // 0x391034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x391030u, 0x391038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391038u;
label_391038:
    // 0x391038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x391038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39103c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x39103Cu;
    SET_GPR_U32(ctx, 31, 0x391044u);
    ctx->pc = 0x391040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39103Cu;
    // 0x391040: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x39103Cu, 0x391044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391044u;
label_391044:
    // 0x391044: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x391044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391048:
    // 0x391048: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x391048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39104c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x39104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x391050: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x391050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391054: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x391054u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x391058: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x391058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x39105c: 0x1452002a  bne         $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x39105Cu;
    {
        const bool branch_taken_0x39105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x391060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39105Cu;
        // 0x391060: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39105c) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x391064u;
    // 0x391064: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x391064u;
    SET_GPR_U32(ctx, 31, 0x39106Cu);
    ctx->pc = 0x391068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391064u;
    // 0x391068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x391064u, 0x39106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39106Cu;
label_39106c:
    // 0x39106c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x39106Cu;
    SET_GPR_U32(ctx, 31, 0x391074u);
    ctx->pc = 0x391070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39106Cu;
    // 0x391070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x39106Cu, 0x391074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391074u;
label_391074:
    // 0x391074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391078: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391078u;
    SET_GPR_U32(ctx, 31, 0x391080u);
    ctx->pc = 0x39107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391078u;
    // 0x39107c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391078u, 0x391080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391080u;
label_391080:
    // 0x391080: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x391080u;
    {
        const bool branch_taken_0x391080 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x391084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391080u;
        // 0x391084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391080) {
            ctx->pc = 0x3910B4u;
            goto label_3910b4;
        }
    }
    ctx->pc = 0x391088u;
    // 0x391088: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x391088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39108c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x391090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x391090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391094: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x391094u;
    {
        const bool branch_taken_0x391094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391094u;
        // 0x391098: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391094) {
            ctx->pc = 0x3910B4u;
            goto label_3910b4;
        }
    }
    ctx->pc = 0x39109Cu;
    // 0x39109c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x39109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3910a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3910a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3910a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3910a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3910a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3910a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3910ac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3910ACu;
    {
        const bool branch_taken_0x3910ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3910ac) {
            ctx->pc = 0x3910ECu;
            goto label_3910ec;
        }
    }
    ctx->pc = 0x3910B4u;
label_3910b4:
    // 0x3910b4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3910b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3910b8: 0xdc25da58  ld          $a1, -0x25A8($at)
    ctx->pc = 0x3910b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DA58u));
    // 0x3910bc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3910BCu;
    SET_GPR_U32(ctx, 31, 0x3910C4u);
    ctx->pc = 0x3910C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3910BCu;
    // 0x3910c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3910BCu, 0x3910C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910C4u;
label_3910c4:
    // 0x3910c4: 0x440007d  bltz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3910C4u;
    {
        const bool branch_taken_0x3910c4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3910c4) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x3910CCu;
    // 0x3910cc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3910ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3910d0: 0xdc25da60  ld          $a1, -0x25A0($at)
    ctx->pc = 0x3910d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DA60u));
    // 0x3910d4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3910D4u;
    SET_GPR_U32(ctx, 31, 0x3910DCu);
    ctx->pc = 0x3910D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3910D4u;
    // 0x3910d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3910D4u, 0x3910DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910DCu;
label_3910dc:
    // 0x3910dc: 0x1c400077  bgtz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3910DCu;
    {
        const bool branch_taken_0x3910dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3910E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910DCu;
        // 0x3910e0: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910dc) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x3910E4u;
    // 0x3910e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3910E4u;
    {
        const bool branch_taken_0x3910e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3910e4) {
            ctx->pc = 0x391108u;
            goto label_391108;
        }
    }
    ctx->pc = 0x3910ECu;
label_3910ec:
    // 0x3910ec: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3910ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3910f0: 0xdc25da68  ld          $a1, -0x2598($at)
    ctx->pc = 0x3910f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45DA68u));
    // 0x3910f4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3910F4u;
    SET_GPR_U32(ctx, 31, 0x3910FCu);
    ctx->pc = 0x3910F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3910F4u;
    // 0x3910f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3910F4u, 0x3910FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910FCu;
label_3910fc:
    // 0x3910fc: 0x440006f  bltz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3910FCu;
    {
        const bool branch_taken_0x3910fc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3910fc) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x391104u;
label_391104:
    // 0x391104: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x391104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_391108:
    // 0x391108: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x391108u;
    SET_GPR_U32(ctx, 31, 0x391110u);
    ctx->pc = 0x39110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391108u;
    // 0x39110c: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x391108u, 0x391110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391110u;
label_391110:
    // 0x391110: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x391110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x391114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x391114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391118: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x391118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x39111c: 0xc0e406a  jal         func_3901A8
    ctx->pc = 0x39111Cu;
    SET_GPR_U32(ctx, 31, 0x391124u);
    ctx->pc = 0x391120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39111Cu;
    // 0x391120: 0x8fa701ec  lw          $a3, 0x1EC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3901A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3901A8u, 0x39111Cu, 0x391124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391124u;
label_391124:
    // 0x391124: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x391124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x391128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39112c: 0xc0e3e60  jal         func_38F980
    ctx->pc = 0x39112Cu;
    SET_GPR_U32(ctx, 31, 0x391134u);
    ctx->pc = 0x391130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39112Cu;
    // 0x391130: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F980u, 0x39112Cu, 0x391134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391134u;
label_391134:
    // 0x391134: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x391134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x391138: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x391138u;
    {
        const bool branch_taken_0x391138 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x39113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391138u;
        // 0x39113c: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391138) {
            ctx->pc = 0x391154u;
            goto label_391154;
        }
    }
    ctx->pc = 0x391140u;
    // 0x391140: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x391140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x391148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39114c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39114Cu;
    {
        const bool branch_taken_0x39114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39114Cu;
        // 0x391150: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39114c) {
            ctx->pc = 0x391168u;
            goto label_391168;
        }
    }
    ctx->pc = 0x391154u;
label_391154:
    // 0x391154: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x391154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x391158: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x391158u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39115c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391160: 0x48823  negu        $s1, $a0
    ctx->pc = 0x391160u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x391164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x391164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_391168:
    // 0x391168: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x391168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x39116c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39116Cu;
    {
        const bool branch_taken_0x39116c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x391170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39116Cu;
        // 0x391170: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39116c) {
            ctx->pc = 0x39117Cu;
            goto label_39117c;
        }
    }
    ctx->pc = 0x391174u;
    // 0x391174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x391174u;
    {
        const bool branch_taken_0x391174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391174u;
        // 0x391178: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391174) {
            ctx->pc = 0x391180u;
            goto label_391180;
        }
    }
    ctx->pc = 0x39117Cu;
label_39117c:
    // 0x39117c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x39117cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_391180:
    // 0x391180: 0x8fa70184  lw          $a3, 0x184($sp)
    ctx->pc = 0x391180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x391184: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x391184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x391188: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x391188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39118c: 0x28c3fc02  slti        $v1, $a2, -0x3FE
    ctx->pc = 0x39118cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x391190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x391190u;
    {
        const bool branch_taken_0x391190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391190u;
        // 0x391194: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391190) {
            ctx->pc = 0x3911A0u;
            goto label_3911a0;
        }
    }
    ctx->pc = 0x391198u;
    // 0x391198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x391198u;
    {
        const bool branch_taken_0x391198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391198u;
        // 0x39119c: 0x24920433  addiu       $s2, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391198) {
            ctx->pc = 0x3911A8u;
            goto label_3911a8;
        }
    }
    ctx->pc = 0x3911A0u;
label_3911a0:
    // 0x3911a0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3911a4: 0x479023  subu        $s2, $v0, $a3
    ctx->pc = 0x3911a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3911a8:
    // 0x3911a8: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x3911a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3911ac: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3911acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3911b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3911b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3911b4: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x3911b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3911b8: 0x222300b  movn        $a2, $s1, $v0
    ctx->pc = 0x3911b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x3911bc: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x3911bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3911c0: 0x263300b  movn        $a2, $s3, $v1
    ctx->pc = 0x3911c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    // 0x3911c4: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3911C4u;
    {
        const bool branch_taken_0x3911c4 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x3911c4) {
            ctx->pc = 0x3911D8u;
            goto label_3911d8;
        }
    }
    ctx->pc = 0x3911CCu;
    // 0x3911cc: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x3911ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x3911d0: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x3911d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x3911d4: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x3911d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3911d8:
    // 0x3911d8: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3911D8u;
    {
        const bool branch_taken_0x3911d8 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3911d8) {
            ctx->pc = 0x391208u;
            goto label_391208;
        }
    }
    ctx->pc = 0x3911E0u;
    // 0x3911e0: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x3911E0u;
    SET_GPR_U32(ctx, 31, 0x3911E8u);
    ctx->pc = 0x3911E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3911E0u;
    // 0x3911e4: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x3911E0u, 0x3911E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3911E8u;
label_3911e8:
    // 0x3911e8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x3911e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x3911ec: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x3911ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x3911f0: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3911f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3911f4: 0xc0e3e6e  jal         func_38F9B8
    ctx->pc = 0x3911F4u;
    SET_GPR_U32(ctx, 31, 0x3911FCu);
    ctx->pc = 0x3911F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3911F4u;
    // 0x3911f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9B8u, 0x3911F4u, 0x3911FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3911FCu;
label_3911fc:
    // 0x3911fc: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x3911fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x391200: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x391200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
    // 0x391204: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x391204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_391208:
    // 0x391208: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x391208u;
    {
        const bool branch_taken_0x391208 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x39120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391208u;
        // 0x39120c: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391208) {
            ctx->pc = 0x39121Cu;
            goto label_39121c;
        }
    }
    ctx->pc = 0x391210u;
    // 0x391210: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x391210u;
    SET_GPR_U32(ctx, 31, 0x391218u);
    ctx->pc = 0x391214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391210u;
    // 0x391214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x391210u, 0x391218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391218u;
label_391218:
    // 0x391218: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x391218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_39121c:
    // 0x39121c: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x39121Cu;
    {
        const bool branch_taken_0x39121c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x391220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39121Cu;
        // 0x391220: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39121c) {
            ctx->pc = 0x391230u;
            goto label_391230;
        }
    }
    ctx->pc = 0x391224u;
    // 0x391224: 0xc0e3efc  jal         func_38FBF0
    ctx->pc = 0x391224u;
    SET_GPR_U32(ctx, 31, 0x39122Cu);
    ctx->pc = 0x391228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391224u;
    // 0x391228: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FBF0u, 0x391224u, 0x39122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39122Cu;
label_39122c:
    // 0x39122c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x39122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_391230:
    // 0x391230: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391230u;
    {
        const bool branch_taken_0x391230 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x391234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391230u;
        // 0x391234: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391230) {
            ctx->pc = 0x391244u;
            goto label_391244;
        }
    }
    ctx->pc = 0x391238u;
    // 0x391238: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x391238u;
    SET_GPR_U32(ctx, 31, 0x391240u);
    ctx->pc = 0x39123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391238u;
    // 0x39123c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x391238u, 0x391240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391240u;
label_391240:
    // 0x391240: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x391240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_391244:
    // 0x391244: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x391244u;
    {
        const bool branch_taken_0x391244 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x391248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391244u;
        // 0x391248: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391244) {
            ctx->pc = 0x391258u;
            goto label_391258;
        }
    }
    ctx->pc = 0x39124Cu;
    // 0x39124c: 0xc0e3f1a  jal         func_38FC68
    ctx->pc = 0x39124Cu;
    SET_GPR_U32(ctx, 31, 0x391254u);
    ctx->pc = 0x391250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39124Cu;
    // 0x391250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC68u, 0x39124Cu, 0x391254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391254u;
label_391254:
    // 0x391254: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x391254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_391258:
    // 0x391258: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x391258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x39125c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x39125cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x391260: 0xc0e3f94  jal         func_38FE50
    ctx->pc = 0x391260u;
    SET_GPR_U32(ctx, 31, 0x391268u);
    ctx->pc = 0x391264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391260u;
    // 0x391264: 0x8fa601a0  lw          $a2, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE50u, 0x391260u, 0x391268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391268u;
label_391268:
    // 0x391268: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x391268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x39126c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x39126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x391270: 0x8456000e  lh          $s6, 0xE($v0)
    ctx->pc = 0x391270u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x391274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391278: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x391278u;
    SET_GPR_U32(ctx, 31, 0x391280u);
    ctx->pc = 0x39127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391278u;
    // 0x39127c: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x391278u, 0x391280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391280u;
label_391280:
    // 0x391280: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x391280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391284: 0x4c1fe84  bgez        $a2, . + 4 + (-0x17C << 2)
    ctx->pc = 0x391284u;
    {
        const bool branch_taken_0x391284 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x391284) {
            ctx->pc = 0x390C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390c98;
        }
    }
    ctx->pc = 0x39128Cu;
    // 0x39128c: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x39128Cu;
    {
        const bool branch_taken_0x39128c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x391290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39128Cu;
        // 0x391290: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39128c) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x391294u;
    // 0x391294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x391294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x391298: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x391298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39129c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39129Cu;
    {
        const bool branch_taken_0x39129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3912A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39129Cu;
        // 0x3912a0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39129c) {
            ctx->pc = 0x3912BCu;
            goto label_3912bc;
        }
    }
    ctx->pc = 0x3912A4u;
    // 0x3912a4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3912a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3912a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3912a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3912ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3912acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3912b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3912b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3912b4: 0x1060fe6e  beqz        $v1, . + 4 + (-0x192 << 2)
    ctx->pc = 0x3912B4u;
    {
        const bool branch_taken_0x3912b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B4u;
        // 0x3912b8: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912b4) {
            ctx->pc = 0x390C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390c70;
        }
    }
    ctx->pc = 0x3912BCu;
label_3912bc:
    // 0x3912bc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912BCu;
    SET_GPR_U32(ctx, 31, 0x3912C4u);
    ctx->pc = 0x3912C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912BCu;
    // 0x3912c0: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912BCu, 0x3912C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912C4u;
label_3912c4:
    // 0x3912c4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912C4u;
    SET_GPR_U32(ctx, 31, 0x3912CCu);
    ctx->pc = 0x3912C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912C4u;
    // 0x3912c8: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912C4u, 0x3912CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912CCu;
label_3912cc:
    // 0x3912cc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912CCu;
    SET_GPR_U32(ctx, 31, 0x3912D4u);
    ctx->pc = 0x3912D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912CCu;
    // 0x3912d0: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912CCu, 0x3912D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912D4u;
label_3912d4:
    // 0x3912d4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912D4u;
    SET_GPR_U32(ctx, 31, 0x3912DCu);
    ctx->pc = 0x3912D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912D4u;
    // 0x3912d8: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912D4u, 0x3912DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912DCu;
label_3912dc:
    // 0x3912dc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912DCu;
    SET_GPR_U32(ctx, 31, 0x3912E4u);
    ctx->pc = 0x3912E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912DCu;
    // 0x3912e0: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912DCu, 0x3912E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912E4u;
label_3912e4:
    // 0x3912e4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x3912E4u;
    SET_GPR_U32(ctx, 31, 0x3912ECu);
    ctx->pc = 0x3912E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912E4u;
    // 0x3912e8: 0x8fa401ac  lw          $a0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x3912E4u, 0x3912ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912ECu;
label_3912ec:
    // 0x3912ec: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x3912ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_3912f0:
    // 0x3912f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3912F0u;
    {
        const bool branch_taken_0x3912f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3912f0) {
            ctx->pc = 0x3912F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3912F0u;
            // 0x3912f4: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3912F8u;
            goto label_3912f8;
        }
    }
    ctx->pc = 0x3912F8u;
label_3912f8:
    // 0x3912f8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x3912f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3912fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3912FCu;
    {
        const bool branch_taken_0x3912fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912FCu;
        // 0x391300: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912fc) {
            ctx->pc = 0x391310u;
            goto label_391310;
        }
    }
    ctx->pc = 0x391304u;
    // 0x391304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x391304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391308: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x391308u;
    SET_GPR_U32(ctx, 31, 0x391310u);
    ctx->pc = 0x39130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391308u;
    // 0x39130c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x391308u, 0x391310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391310u;
label_391310:
    // 0x391310: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x391310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x391314: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x391314u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x391318: 0xdfb70260  ld          $s7, 0x260($sp)
    ctx->pc = 0x391318u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x39131c: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x39131cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x391320: 0xdfb50240  ld          $s5, 0x240($sp)
    ctx->pc = 0x391320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x391324: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x391324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x391328: 0xdfb30220  ld          $s3, 0x220($sp)
    ctx->pc = 0x391328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x39132c: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x39132cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x391330: 0xdfb10200  ld          $s1, 0x200($sp)
    ctx->pc = 0x391330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x391334: 0xdfb001f0  ld          $s0, 0x1F0($sp)
    ctx->pc = 0x391334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x391338: 0x3e00008  jr          $ra
    ctx->pc = 0x391338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391338u;
        // 0x39133c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391340u;
}
