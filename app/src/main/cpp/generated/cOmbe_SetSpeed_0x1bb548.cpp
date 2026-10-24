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

// Function: cOmbe_SetSpeed
// Address: 0x1bb548 - 0x1bba78
void cOmbe_SetSpeed_0x1bb548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmbe_SetSpeed_0x1bb548");
#endif

    switch (ctx->pc) {
        case 0x1bb5a0u: goto label_1bb5a0;
        case 0x1bb5acu: goto label_1bb5ac;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb630u: goto label_1bb630;
        case 0x1bb64cu: goto label_1bb64c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb9d0u: goto label_1bb9d0;
        default: break;
    }

    ctx->pc = 0x1bb548u;

    // 0x1bb548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb54c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb550: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb558: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bb55c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb560: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bb560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bb564: 0x26320580  addiu       $s2, $s1, 0x580
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1bb568: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bb568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bb56c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bb56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb574: 0x12500007  beq         $s2, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB574u;
    {
        const bool branch_taken_0x1bb574 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB574u;
        // 0x1bb578: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb574) {
            ctx->pc = 0x1BB594u;
            goto label_1bb594;
        }
    }
    ctx->pc = 0x1BB57Cu;
    // 0x1bb57c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bb57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb580: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x1bb580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x1bb584: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1bb584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb588: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bb588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1bb58c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bb58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb590: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bb590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1bb594:
    // 0x1bb594: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb598: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1BB598u;
    SET_GPR_U32(ctx, 31, 0x1BB5A0u);
    ctx->pc = 0x1BB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB598u;
    // 0x1bb59c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1BB598u, 0x1BB5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5A0u;
label_1bb5a0:
    // 0x1bb5a0: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bb5a4: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1BB5A4u;
    SET_GPR_U32(ctx, 31, 0x1BB5ACu);
    ctx->pc = 0x1BB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5A4u;
    // 0x1bb5a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1BB5A4u, 0x1BB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5ACu;
label_1bb5ac:
    // 0x1bb5ac: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x1bb5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bb5b0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1BB5B0u;
    SET_GPR_U32(ctx, 31, 0x1BB5B8u);
    ctx->pc = 0x1BB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5B0u;
    // 0x1bb5b4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1BB5B0u, 0x1BB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5B8u;
label_1bb5b8:
    // 0x1bb5b8: 0xae34062c  sw          $s4, 0x62C($s1)
    ctx->pc = 0x1bb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1580), GPR_U32(ctx, 20));
    // 0x1bb5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5c0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1BB5C0u;
    SET_GPR_U32(ctx, 31, 0x1BB5C8u);
    ctx->pc = 0x1BB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5C0u;
    // 0x1bb5c4: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1BB5C0u, 0x1BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5C8u;
label_1bb5c8:
    // 0x1bb5c8: 0x2e620030  sltiu       $v0, $s3, 0x30
    ctx->pc = 0x1bb5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1bb5cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB5CCu;
    {
        const bool branch_taken_0x1bb5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5CCu;
        // 0x1bb5d0: 0xae330610  sw          $s3, 0x610($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5cc) {
            ctx->pc = 0x1BB5F0u;
            goto label_1bb5f0;
        }
    }
    ctx->pc = 0x1BB5D4u;
    // 0x1bb5d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bb5d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bb5dc: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x1bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x1bb5e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb5e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb5e8: 0x800008  jr          $a0
    ctx->pc = 0x1BB5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB5F0u: goto label_1bb5f0;
            case 0x1BB600u: goto label_1bb600;
            case 0x1BB610u: goto label_1bb610;
            case 0x1BB678u: goto label_1bb678;
            case 0x1BB688u: goto label_1bb688;
            case 0x1BB6D0u: goto label_1bb6d0;
            case 0x1BB6E0u: goto label_1bb6e0;
            case 0x1BB6F0u: goto label_1bb6f0;
            case 0x1BB700u: goto label_1bb700;
            case 0x1BB710u: goto label_1bb710;
            case 0x1BB720u: goto label_1bb720;
            case 0x1BB730u: goto label_1bb730;
            case 0x1BB740u: goto label_1bb740;
            case 0x1BB768u: goto label_1bb768;
            case 0x1BB778u: goto label_1bb778;
            case 0x1BB7A8u: goto label_1bb7a8;
            case 0x1BB7B8u: goto label_1bb7b8;
            case 0x1BB7C8u: goto label_1bb7c8;
            case 0x1BB804u: goto label_1bb804;
            case 0x1BB81Cu: goto label_1bb81c;
            case 0x1BB82Cu: goto label_1bb82c;
            case 0x1BB86Cu: goto label_1bb86c;
            case 0x1BB87Cu: goto label_1bb87c;
            case 0x1BB88Cu: goto label_1bb88c;
            case 0x1BB89Cu: goto label_1bb89c;
            case 0x1BB8ACu: goto label_1bb8ac;
            case 0x1BB8BCu: goto label_1bb8bc;
            case 0x1BB8E4u: goto label_1bb8e4;
            case 0x1BB914u: goto label_1bb914;
            case 0x1BB924u: goto label_1bb924;
            case 0x1BB96Cu: goto label_1bb96c;
            case 0x1BB974u: goto label_1bb974;
            case 0x1BB984u: goto label_1bb984;
            case 0x1BB994u: goto label_1bb994;
            case 0x1BB9A4u: goto label_1bb9a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BB5F0u;
label_1bb5f0:
    // 0x1bb5f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb5f4: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1bb5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1bb5f8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1BB5F8u;
    {
        const bool branch_taken_0x1bb5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5F8u;
        // 0x1bb5fc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5f8) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB600u;
label_1bb600:
    // 0x1bb600: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb604: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1bb604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1bb608: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1BB608u;
    {
        const bool branch_taken_0x1bb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB608u;
        // 0x1bb60c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb608) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB610u;
label_1bb610:
    // 0x1bb610: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb614: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1bb618: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bb618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bb61c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb628: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB628u;
    SET_GPR_U32(ctx, 31, 0x1BB630u);
    ctx->pc = 0x1BB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB628u;
    // 0x1bb62c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB628u, 0x1BB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB630u;
label_1bb630:
    // 0x1bb630: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1bb630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1bb634: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bb638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb63c: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x1bb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
    // 0x1bb640: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x1bb640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
    // 0x1bb644: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1BB644u;
    SET_GPR_U32(ctx, 31, 0x1BB64Cu);
    ctx->pc = 0x1BB648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB644u;
    // 0x1bb648: 0xe6200588  swc1        $f0, 0x588($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1BB644u, 0x1BB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB64Cu;
label_1bb64c:
    // 0x1bb64c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1bb64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1bb650: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1bb650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1bb654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb658: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1bb658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb65c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1bb65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1bb660: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bb660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bb664: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1bb664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1bb668: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BB668u;
    SET_GPR_U32(ctx, 31, 0x1BB670u);
    ctx->pc = 0x1BB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB668u;
    // 0x1bb66c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BB668u, 0x1BB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB670u;
label_1bb670:
    // 0x1bb670: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1BB670u;
    {
        const bool branch_taken_0x1bb670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB670u;
        // 0x1bb674: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb670) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB678u;
label_1bb678:
    // 0x1bb678: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb67c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1bb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bb680: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1BB680u;
    {
        const bool branch_taken_0x1bb680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB680u;
        // 0x1bb684: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb680) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB688u;
label_1bb688:
    // 0x1bb688: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bb688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bb68c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bb690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb694: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb694u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb698: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x1bb698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
    // 0x1bb69c: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1bb6a0: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x1bb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
    // 0x1bb6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb6a8: 0xe6200588  swc1        $f0, 0x588($s1)
    ctx->pc = 0x1bb6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    // 0x1bb6ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6b8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB6B8u;
    SET_GPR_U32(ctx, 31, 0x1BB6C0u);
    ctx->pc = 0x1BB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6B8u;
    // 0x1bb6bc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB6B8u, 0x1BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1bb6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb6c8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1BB6C8u;
    {
        const bool branch_taken_0x1bb6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6C8u;
        // 0x1bb6cc: 0xe6200624  swc1        $f0, 0x624($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6c8) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB6D0u;
label_1bb6d0:
    // 0x1bb6d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb6d4: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1bb6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1bb6d8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1BB6D8u;
    {
        const bool branch_taken_0x1bb6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6D8u;
        // 0x1bb6dc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6d8) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB6E0u;
label_1bb6e0:
    // 0x1bb6e0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb6e4: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1bb6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1bb6e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1BB6E8u;
    {
        const bool branch_taken_0x1bb6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6E8u;
        // 0x1bb6ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6e8) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB6F0u;
label_1bb6f0:
    // 0x1bb6f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb6f4: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1bb6f8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1BB6F8u;
    {
        const bool branch_taken_0x1bb6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6F8u;
        // 0x1bb6fc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6f8) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB700u;
label_1bb700:
    // 0x1bb700: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb704: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1bb708: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1BB708u;
    {
        const bool branch_taken_0x1bb708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB708u;
        // 0x1bb70c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb708) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB710u;
label_1bb710:
    // 0x1bb710: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb714: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bb718: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BB718u;
    {
        const bool branch_taken_0x1bb718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB718u;
        // 0x1bb71c: 0x2405008e  addiu       $a1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb718) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB720u;
label_1bb720:
    // 0x1bb720: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb724: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1bb728: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1BB728u;
    {
        const bool branch_taken_0x1bb728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB728u;
        // 0x1bb72c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb728) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB730u;
label_1bb730:
    // 0x1bb730: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb734: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1bb738: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1BB738u;
    {
        const bool branch_taken_0x1bb738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB738u;
        // 0x1bb73c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb738) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB740u;
label_1bb740:
    // 0x1bb740: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb744: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1bb748: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bb748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1bb74c:
    // 0x1bb74c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb758: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB758u;
    SET_GPR_U32(ctx, 31, 0x1BB760u);
    ctx->pc = 0x1BB75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB758u;
    // 0x1bb75c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB758u, 0x1BB760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB760u;
label_1bb760:
    // 0x1bb760: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1BB760u;
    {
        const bool branch_taken_0x1bb760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb760) {
            ctx->pc = 0x1BB994u;
            goto label_1bb994;
        }
    }
    ctx->pc = 0x1BB768u;
label_1bb768:
    // 0x1bb768: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb76c: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1bb770: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1BB770u;
    {
        const bool branch_taken_0x1bb770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB770u;
        // 0x1bb774: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb770) {
            ctx->pc = 0x1BB74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb74c;
        }
    }
    ctx->pc = 0x1BB778u;
label_1bb778:
    // 0x1bb778: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb778u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb77c: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1bb780: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb790: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB790u;
    SET_GPR_U32(ctx, 31, 0x1BB798u);
    ctx->pc = 0x1BB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB790u;
    // 0x1bb794: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB790u, 0x1BB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB798u;
label_1bb798:
    // 0x1bb798: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb79c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb7a0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1BB7A0u;
    {
        const bool branch_taken_0x1bb7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7A0u;
        // 0x1bb7a4: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7a0) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB7A8u;
label_1bb7a8:
    // 0x1bb7a8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb7ac: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1bb7b0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1BB7B0u;
    {
        const bool branch_taken_0x1bb7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7B0u;
        // 0x1bb7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7b0) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB7B8u;
label_1bb7b8:
    // 0x1bb7b8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb7bc: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1bb7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1bb7c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1BB7C0u;
    {
        const bool branch_taken_0x1bb7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7C0u;
        // 0x1bb7c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7c0) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB7C8u;
label_1bb7c8:
    // 0x1bb7c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1bb7cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bb7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7d0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x1BB7D0u;
    SET_GPR_U32(ctx, 31, 0x1BB7D8u);
    ctx->pc = 0x1BB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7D0u;
    // 0x1bb7d4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x1BB7D0u, 0x1BB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7D8u;
label_1bb7d8:
    // 0x1bb7d8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x1bb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x1bb7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1bb7e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb7e8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1bb7e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1bb7ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7f0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1bb7f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bb7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bb7f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7fc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1BB7FCu;
    SET_GPR_U32(ctx, 31, 0x1BB804u);
    ctx->pc = 0x1BB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7FCu;
    // 0x1bb800: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1BB7FCu, 0x1BB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB804u;
label_1bb804:
    // 0x1bb804: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb80c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb810: 0xae22061c  sw          $v0, 0x61C($s1)
    ctx->pc = 0x1bb810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
    // 0x1bb814: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1BB814u;
    {
        const bool branch_taken_0x1bb814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB814u;
        // 0x1bb818: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb814) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB81Cu;
label_1bb81c:
    // 0x1bb81c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1bb81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1bb820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb824: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1BB824u;
    {
        const bool branch_taken_0x1bb824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB824u;
        // 0x1bb828: 0xe6200624  swc1        $f0, 0x624($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb824) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB82Cu;
label_1bb82c:
    // 0x1bb82c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb82cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb830: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1bb834: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bb834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb838: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb83c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb844: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB844u;
    SET_GPR_U32(ctx, 31, 0x1BB84Cu);
    ctx->pc = 0x1BB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB844u;
    // 0x1bb848: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB844u, 0x1BB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB84Cu;
label_1bb84c:
    // 0x1bb84c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1bb850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb854: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1bb854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1bb858: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1bb858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1bb85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb860: 0xe6200624  swc1        $f0, 0x624($s1)
    ctx->pc = 0x1bb860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
    // 0x1bb864: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1BB864u;
    {
        const bool branch_taken_0x1bb864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB864u;
        // 0x1bb868: 0xe6210628  swc1        $f1, 0x628($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb864) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB86Cu;
label_1bb86c:
    // 0x1bb86c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb870: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb874: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BB874u;
    {
        const bool branch_taken_0x1bb874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB874u;
        // 0x1bb878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb874) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB87Cu;
label_1bb87c:
    // 0x1bb87c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb880: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BB884u;
    {
        const bool branch_taken_0x1bb884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB884u;
        // 0x1bb888: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb884) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB88Cu;
label_1bb88c:
    // 0x1bb88c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb890: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb894: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BB894u;
    {
        const bool branch_taken_0x1bb894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB894u;
        // 0x1bb898: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb894) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB89Cu;
label_1bb89c:
    // 0x1bb89c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb89cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb8a0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb8a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB8A4u;
    {
        const bool branch_taken_0x1bb8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8A4u;
        // 0x1bb8a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8a4) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB8ACu;
label_1bb8ac:
    // 0x1bb8ac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb8acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb8b0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb8b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB8B4u;
    {
        const bool branch_taken_0x1bb8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8B4u;
        // 0x1bb8b8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8b4) {
            ctx->pc = 0x1BB8C8u;
            goto label_1bb8c8;
        }
    }
    ctx->pc = 0x1BB8BCu;
label_1bb8bc:
    // 0x1bb8bc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb8c0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1bb8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb8c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb8c8:
    // 0x1bb8c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb8d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8d4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB8D4u;
    SET_GPR_U32(ctx, 31, 0x1BB8DCu);
    ctx->pc = 0x1BB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8D4u;
    // 0x1bb8d8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB8D4u, 0x1BB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8DCu;
label_1bb8dc:
    // 0x1bb8dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1BB8DCu;
    {
        const bool branch_taken_0x1bb8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8DCu;
        // 0x1bb8e0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8dc) {
            ctx->pc = 0x1BB9C8u;
            goto label_1bb9c8;
        }
    }
    ctx->pc = 0x1BB8E4u;
label_1bb8e4:
    // 0x1bb8e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb8e8: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1bb8ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb8f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8fc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB8FCu;
    SET_GPR_U32(ctx, 31, 0x1BB904u);
    ctx->pc = 0x1BB900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8FCu;
    // 0x1bb900: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB8FCu, 0x1BB904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB904u;
label_1bb904:
    // 0x1bb904: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1bb904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1bb908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb90c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB90Cu;
        // 0x1bb910: 0xe6200624  swc1        $f0, 0x624($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB914u;
label_1bb914:
    // 0x1bb914: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb914u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB91Cu;
    {
        const bool branch_taken_0x1bb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB91Cu;
        // 0x1bb920: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb91c) {
            ctx->pc = 0x1BB930u;
            goto label_1bb930;
        }
    }
    ctx->pc = 0x1BB924u;
label_1bb924:
    // 0x1bb924: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb928: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb92c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1bb930:
    // 0x1bb930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb938: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb93c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1BB93Cu;
    SET_GPR_U32(ctx, 31, 0x1BB944u);
    ctx->pc = 0x1BB940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB93Cu;
    // 0x1bb940: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BB93Cu, 0x1BB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB944u;
label_1bb944:
    // 0x1bb944: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1bb944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1bb948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb94c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bb950: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb958: 0xe6200624  swc1        $f0, 0x624($s1)
    ctx->pc = 0x1bb958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
    // 0x1bb95c: 0xe6210588  swc1        $f1, 0x588($s1)
    ctx->pc = 0x1bb95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    // 0x1bb960: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x1bb960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
    // 0x1bb964: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BB964u;
    {
        const bool branch_taken_0x1bb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB964u;
        // 0x1bb968: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb964) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB96Cu;
label_1bb96c:
    // 0x1bb96c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB96Cu;
    {
        const bool branch_taken_0x1bb96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB96Cu;
        // 0x1bb970: 0xae200624  sw          $zero, 0x624($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb96c) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB974u;
label_1bb974:
    // 0x1bb974: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb974u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb97c: 0x1000ff73  b           . + 4 + (-0x8D << 2)
    ctx->pc = 0x1BB97Cu;
    {
        const bool branch_taken_0x1bb97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB97Cu;
        // 0x1bb980: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb97c) {
            ctx->pc = 0x1BB74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb74c;
        }
    }
    ctx->pc = 0x1BB984u;
label_1bb984:
    // 0x1bb984: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bb984u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1bb988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb98c: 0x1000ff6f  b           . + 4 + (-0x91 << 2)
    ctx->pc = 0x1BB98Cu;
    {
        const bool branch_taken_0x1bb98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB98Cu;
        // 0x1bb990: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb98c) {
            ctx->pc = 0x1BB74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb74c;
        }
    }
    ctx->pc = 0x1BB994u;
label_1bb994:
    // 0x1bb994: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1bb994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1bb998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb99c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB99Cu;
    {
        const bool branch_taken_0x1bb99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB99Cu;
        // 0x1bb9a0: 0xe6200624  swc1        $f0, 0x624($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb99c) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB9A4u;
label_1bb9a4:
    // 0x1bb9a4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb9a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb9ac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bb9b0: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1bb9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1bb9b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb9b8: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x1bb9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
    // 0x1bb9bc: 0xae22061c  sw          $v0, 0x61C($s1)
    ctx->pc = 0x1bb9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
    // 0x1bb9c0: 0xe6210624  swc1        $f1, 0x624($s1)
    ctx->pc = 0x1bb9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
label_1bb9c4:
    // 0x1bb9c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1bb9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1bb9c8:
    // 0x1bb9c8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1BB9C8u;
    SET_GPR_U32(ctx, 31, 0x1BB9D0u);
    ctx->pc = 0x1BB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9C8u;
    // 0x1bb9cc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1BB9C8u, 0x1BB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9D0u;
label_1bb9d0:
    // 0x1bb9d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1bb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb9d4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1bb9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bb9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB9D8u;
    {
        const bool branch_taken_0x1bb9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D8u;
        // 0x1bb9dc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d8) {
            ctx->pc = 0x1BB9F8u;
            goto label_1bb9f8;
        }
    }
    ctx->pc = 0x1BB9E0u;
    // 0x1bb9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bb9e4: 0x244290b0  addiu       $v0, $v0, -0x6F50
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938800));
    // 0x1bb9e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb9ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb9f0: 0x800008  jr          $a0
    ctx->pc = 0x1BB9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB9F8u: goto label_1bb9f8;
            case 0x1BBA08u: goto label_1bba08;
            case 0x1BBA18u: goto label_1bba18;
            case 0x1BBA28u: goto label_1bba28;
            case 0x1BBA38u: goto label_1bba38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB9F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BB9F8u;
label_1bb9f8:
    // 0x1bb9f8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1bb9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1bb9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BBA00u;
    {
        const bool branch_taken_0x1bba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA00u;
        // 0x1bba04: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba00) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BBA08u;
label_1bba08:
    // 0x1bba08: 0x3c014352  lui         $at, 0x4352
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17234 << 16));
    // 0x1bba0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BBA10u;
    {
        const bool branch_taken_0x1bba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA10u;
        // 0x1bba14: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba10) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BBA18u;
label_1bba18:
    // 0x1bba18: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x1bba18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x1bba1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBA20u;
    {
        const bool branch_taken_0x1bba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA20u;
        // 0x1bba24: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba20) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BBA28u;
label_1bba28:
    // 0x1bba28: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x1bba28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x1bba2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA30u;
        // 0x1bba34: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA48u;
            goto label_1bba48;
        }
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1bba3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba40: 0x0  nop
    ctx->pc = 0x1bba40u;
    // NOP
    // 0x1bba44: 0xe6200614  swc1        $f0, 0x614($s1)
    ctx->pc = 0x1bba44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
label_1bba48:
    // 0x1bba48: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bba4c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BBA4Cu;
    {
        const bool branch_taken_0x1bba4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba4c) {
            ctx->pc = 0x1BBA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBA4Cu;
            // 0x1bba50: 0xac940038  sw          $s4, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBA54u;
            goto label_1bba54;
        }
    }
    ctx->pc = 0x1BBA54u;
label_1bba54:
    // 0x1bba54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bba58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bba5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bba5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bba60: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bba60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bba64: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bba64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bba68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA6Cu;
        // 0x1bba70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBA74u;
    // 0x1bba74: 0x0  nop
    ctx->pc = 0x1bba74u;
    // NOP
    ctx->pc = 0x1bba78u;
}
