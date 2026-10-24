#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: CannonTask__5cR501P5cR501
// Address: 0x79a1f8 - 0x79a7c0
void CannonTask__5cR501P5cR501_0x79a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CannonTask__5cR501P5cR501_0x79a1f8");
#endif

    switch (ctx->pc) {
        case 0x79a250u: goto label_79a250;
        case 0x79a284u: goto label_79a284;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a308u: goto label_79a308;
        case 0x79a328u: goto label_79a328;
        case 0x79a360u: goto label_79a360;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a400u: goto label_79a400;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a504u: goto label_79a504;
        case 0x79a530u: goto label_79a530;
        case 0x79a560u: goto label_79a560;
        case 0x79a590u: goto label_79a590;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a608u: goto label_79a608;
        case 0x79a640u: goto label_79a640;
        case 0x79a648u: goto label_79a648;
        case 0x79a650u: goto label_79a650;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a664u: goto label_79a664;
        case 0x79a724u: goto label_79a724;
        case 0x79a740u: goto label_79a740;
        case 0x79a754u: goto label_79a754;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a778u: goto label_79a778;
        case 0x79a78cu: goto label_79a78c;
        default: break;
    }

    ctx->pc = 0x79a1f8u;

    // 0x79a1f8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x79a1fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a200: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x79a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x79a204: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a208: 0x804507b8  lb          $a1, 0x7B8($v0)
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x7A07B8u));
    // 0x79a20c: 0x244807b8  addiu       $t0, $v0, 0x7B8
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1976));
    // 0x79a210: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x79a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x79a214: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a218: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x79a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x79a21c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79a21cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a220: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x79a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x79a224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a228: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x79a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x79a22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a230: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x79a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x79a234: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x79a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x79a238: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x79a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x79a23c: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x79a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x79a240: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A240u;
    {
        const bool branch_taken_0x79a240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A240u;
        // 0x79a244: 0xffbf00e0  sd          $ra, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a240) {
            ctx->pc = 0x79A278u;
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A248u;
    // 0x79a248: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a24c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_79a250:
    // 0x79a250: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79a254: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a258: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a25c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a260: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a264: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A264u;
    {
        const bool branch_taken_0x79a264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A264u;
        // 0x79a268: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a264) {
            ctx->pc = 0x79A278u;
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A26Cu;
    // 0x79a26c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a270: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A270u;
    {
        const bool branch_taken_0x79a270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a270) {
            ctx->pc = 0x79A274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A270u;
            // 0x79a274: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A278u;
label_79a278:
    // 0x79a278: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a27c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A27Cu;
    SET_GPR_U32(ctx, 31, 0x79A284u);
    ctx->pc = 0x79A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A27Cu;
    // 0x79a280: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A27Cu, 0x79A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a288: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A298u;
            goto label_79a298;
        }
    }
    ctx->pc = 0x79A290u;
    // 0x79a290: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x79A290u;
    {
        const bool branch_taken_0x79a290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A290u;
        // 0x79a294: 0xa282038c  sb          $v0, 0x38C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 908), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a290) {
            ctx->pc = 0x79A78Cu;
            goto label_79a78c;
        }
    }
    ctx->pc = 0x79A298u;
label_79a298:
    // 0x79a298: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x79a29c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79a29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x79a2a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a2a4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79a2a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a2ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a2b0: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79A2B0u;
    SET_GPR_U32(ctx, 31, 0x79A2B8u);
    ctx->pc = 0x79A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B0u;
    // 0x79a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79A2B0u, 0x79A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79a2bc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x79a2c0: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a2c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a2c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79a2cc: 0x14400125  bnez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x79A2CCu;
    {
        const bool branch_taken_0x79a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2CCu;
        // 0x79a2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2cc) {
            ctx->pc = 0x79A764u;
            goto label_79a764;
        }
    }
    ctx->pc = 0x79A2D4u;
    // 0x79a2d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A2D4u;
    {
        const bool branch_taken_0x79a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0x3c16003c  lui         $s6, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d4) {
            ctx->pc = 0x79A2F0u;
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A2DCu;
    // 0x79a2dc: 0x0  nop
    ctx->pc = 0x79a2dcu;
    // NOP
label_79a2e0:
    // 0x79a2e0: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79a2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2e8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A2E8u;
    SET_GPR_U32(ctx, 31, 0x79A2F0u);
    ctx->pc = 0x79A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E8u;
    // 0x79a2ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2E8u, 0x79A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79A2F0u;
    SET_GPR_U32(ctx, 31, 0x79A2F8u);
    ctx->pc = 0x79A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F0u;
    // 0x79a2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79A2F0u, 0x79A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A2F8u;
    {
        const bool branch_taken_0x79a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f8) {
            ctx->pc = 0x79A2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2e0;
        }
    }
    ctx->pc = 0x79A300u;
    // 0x79a300: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A300u;
    SET_GPR_U32(ctx, 31, 0x79A308u);
    ctx->pc = 0x79A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A300u;
    // 0x79a304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A300u, 0x79A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A308u;
label_79a308:
    // 0x79a308: 0x9282038c  lbu         $v0, 0x38C($s4)
    ctx->pc = 0x79a308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 908)));
    // 0x79a30c: 0x5440011d  bnel        $v0, $zero, . + 4 + (0x11D << 2)
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A30Cu;
            // 0x79a310: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A784u;
            goto label_79a784;
        }
    }
    ctx->pc = 0x79A314u;
    // 0x79a314: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79a318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a31c: 0x269202f0  addiu       $s2, $s4, 0x2F0
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 752));
    // 0x79a320: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A320u;
    SET_GPR_U32(ctx, 31, 0x79A328u);
    ctx->pc = 0x79A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A320u;
    // 0x79a324: 0x3c17007a  lui         $s7, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A320u, 0x79A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A328u;
label_79a328:
    // 0x79a328: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a32c: 0x8e950380  lw          $s5, 0x380($s4)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x79a330: 0xc4400760  lwc1        $f0, 0x760($v0)
    ctx->pc = 0x79a330u;
    { uint32_t bits = FAST_READ32(0x7A0760u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a334: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x79a338: 0x8e9e0384  lw          $fp, 0x384($s4)
    ctx->pc = 0x79a338u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 900)));
    // 0x79a33c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a340: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x79a340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x79a344: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x79a344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a348: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x79a348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x79a34c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a350: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79a350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x79a354: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x79a358: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x79a358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x79a35c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x79a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_79a360:
    // 0x79a360: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79a360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x79a364: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79a368: 0x0  nop
    ctx->pc = 0x79a368u;
    // NOP
    // 0x79a36c: 0x0  nop
    ctx->pc = 0x79a36cu;
    // NOP
    // 0x79a370: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A370u;
    {
        const bool branch_taken_0x79a370 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A370u;
        // 0x79a374: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a370) {
            ctx->pc = 0x79A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a360;
        }
    }
    ctx->pc = 0x79A378u;
    // 0x79a378: 0xa0a00058  sb          $zero, 0x58($a1)
    ctx->pc = 0x79a378u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a37c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a380: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a384: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A384u;
    SET_GPR_U32(ctx, 31, 0x79A38Cu);
    ctx->pc = 0x79A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A384u;
    // 0x79a388: 0x26700074  addiu       $s0, $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A384u, 0x79A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A38Cu;
label_79a38c:
    // 0x79a38c: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x79a38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x79a390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a394: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a398: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A398u;
    SET_GPR_U32(ctx, 31, 0x79A3A0u);
    ctx->pc = 0x79A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A398u;
    // 0x79a39c: 0xae620074  sw          $v0, 0x74($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A398u, 0x79A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A0u;
label_79a3a0:
    // 0x79a3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a3a8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A3A8u;
    SET_GPR_U32(ctx, 31, 0x79A3B0u);
    ctx->pc = 0x79A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A8u;
    // 0x79a3ac: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A3A8u, 0x79A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x79a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x79a3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3b8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x79a3bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a3c0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a3c4: 0x8e660074  lw          $a2, 0x74($s3)
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x79a3c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3cc: 0xc4420740  lwc1        $f2, 0x740($v0)
    ctx->pc = 0x79a3ccu;
    { uint32_t bits = FAST_READ32(0x7A0740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a3d0: 0x90c3004f  lbu         $v1, 0x4F($a2)
    ctx->pc = 0x79a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 79)));
    // 0x79a3d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a3d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x79a3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a3e0: 0x0  nop
    ctx->pc = 0x79a3e0u;
    // NOP
    // 0x79a3e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a3e8: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x79a3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x79a3ec: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x79a3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x79a3f0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x79a3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79a3f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x79a3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79a3f8: 0xc1e7d92  jal         func_79F648
    ctx->pc = 0x79A3F8u;
    SET_GPR_U32(ctx, 31, 0x79A400u);
    ctx->pc = 0x79A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F8u;
    // 0x79a3fc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79F648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79F648u, 0x79A3F8u, 0x79A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A400u;
label_79a400:
    // 0x79a400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a404: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A404u;
    SET_GPR_U32(ctx, 31, 0x79A40Cu);
    ctx->pc = 0x79A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A404u;
    // 0x79a408: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A404u, 0x79A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A40Cu;
label_79a40c:
    // 0x79a40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a410: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x79a414: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A414u;
    SET_GPR_U32(ctx, 31, 0x79A41Cu);
    ctx->pc = 0x79A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A414u;
    // 0x79a418: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A414u, 0x79A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A41Cu;
label_79a41c:
    // 0x79a41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a420: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a424: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A424u;
    SET_GPR_U32(ctx, 31, 0x79A42Cu);
    ctx->pc = 0x79A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A424u;
    // 0x79a428: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A424u, 0x79A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A42Cu;
label_79a42c:
    // 0x79a42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a430: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a434: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A434u;
    SET_GPR_U32(ctx, 31, 0x79A43Cu);
    ctx->pc = 0x79A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A434u;
    // 0x79a438: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A434u, 0x79A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A43Cu;
label_79a43c:
    // 0x79a43c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a440: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a444: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a450: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a454: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A454u;
    SET_GPR_U32(ctx, 31, 0x79A45Cu);
    ctx->pc = 0x79A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A454u;
    // 0x79a458: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A454u, 0x79A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A45Cu;
label_79a45c:
    // 0x79a45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a460: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x79a464: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a470: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x79a474: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A474u;
    SET_GPR_U32(ctx, 31, 0x79A47Cu);
    ctx->pc = 0x79A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A474u;
    // 0x79a478: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A474u, 0x79A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A47Cu;
label_79a47c:
    // 0x79a47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a480: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x79a484: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A484u;
    SET_GPR_U32(ctx, 31, 0x79A48Cu);
    ctx->pc = 0x79A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A484u;
    // 0x79a488: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A484u, 0x79A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A48Cu;
label_79a48c:
    // 0x79a48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a490: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x79a494: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A494u;
    SET_GPR_U32(ctx, 31, 0x79A49Cu);
    ctx->pc = 0x79A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A494u;
    // 0x79a498: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A494u, 0x79A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A49Cu;
label_79a49c:
    // 0x79a49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a4a4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A4A4u;
    SET_GPR_U32(ctx, 31, 0x79A4ACu);
    ctx->pc = 0x79A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4A4u;
    // 0x79a4a8: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A4A4u, 0x79A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4ACu;
label_79a4ac:
    // 0x79a4ac: 0x24031002  addiu       $v1, $zero, 0x1002
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79a4b0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x79a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x79a4b4: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x79a4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79a4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4bc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a4cc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A4CCu;
    SET_GPR_U32(ctx, 31, 0x79A4D4u);
    ctx->pc = 0x79A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4CCu;
    // 0x79a4d0: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A4CCu, 0x79A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0x24031003  addiu       $v1, $zero, 0x1003
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x79a4d8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x79a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x79a4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4e0: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x79a4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79a4e4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A4E4u;
    SET_GPR_U32(ctx, 31, 0x79A4ECu);
    ctx->pc = 0x79A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E4u;
    // 0x79a4e8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A4E4u, 0x79A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4ECu;
label_79a4ec:
    // 0x79a4ec: 0x24031004  addiu       $v1, $zero, 0x1004
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    // 0x79a4f0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x79a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x79a4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4f8: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x79a4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x79a4fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A4FCu;
    SET_GPR_U32(ctx, 31, 0x79A504u);
    ctx->pc = 0x79A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4FCu;
    // 0x79a500: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A4FCu, 0x79A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A504u;
label_79a504:
    // 0x79a504: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a508: 0x26e40748  addiu       $a0, $s7, 0x748
    ctx->pc = 0x79a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1864));
    // 0x79a50c: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x79a510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a514: 0x82e30748  lb          $v1, 0x748($s7)
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 1864)));
    // 0x79a518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a51c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A51Cu;
    {
        const bool branch_taken_0x79a51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a51c) {
            ctx->pc = 0x79A558u;
            goto label_79a558;
        }
    }
    ctx->pc = 0x79A524u;
    // 0x79a524: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a528: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a52c: 0x0  nop
    ctx->pc = 0x79a52cu;
    // NOP
label_79a530:
    // 0x79a530: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a534: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a538: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a53c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a540: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a544: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A544u;
    {
        const bool branch_taken_0x79a544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A544u;
        // 0x79a548: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a544) {
            ctx->pc = 0x79A558u;
            goto label_79a558;
        }
    }
    ctx->pc = 0x79A54Cu;
    // 0x79a54c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a550: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A550u;
    {
        const bool branch_taken_0x79a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a550) {
            ctx->pc = 0x79A554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A550u;
            // 0x79a554: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a530;
        }
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a564: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x79a568: 0x24640750  addiu       $a0, $v1, 0x750
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x79a56c: 0x24a84c38  addiu       $t0, $a1, 0x4C38
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 19512));
    // 0x79a570: 0x80630750  lb          $v1, 0x750($v1)
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x7A0750u));
    // 0x79a574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a578: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x79a578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x79a57c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A57Cu;
    {
        const bool branch_taken_0x79a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A57Cu;
        // 0x79a580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a57c) {
            ctx->pc = 0x79A5B8u;
            goto label_79a5b8;
        }
    }
    ctx->pc = 0x79A584u;
    // 0x79a584: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a588: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a58c: 0x0  nop
    ctx->pc = 0x79a58cu;
    // NOP
label_79a590:
    // 0x79a590: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a594: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a598: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a59c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a5a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a5a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a5a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A5A4u;
    {
        const bool branch_taken_0x79a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A4u;
        // 0x79a5a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a4) {
            ctx->pc = 0x79A5B8u;
            goto label_79a5b8;
        }
    }
    ctx->pc = 0x79A5ACu;
    // 0x79a5ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a5b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A5B0u;
    {
        const bool branch_taken_0x79a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5b0) {
            ctx->pc = 0x79A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5B0u;
            // 0x79a5b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a590;
        }
    }
    ctx->pc = 0x79A5B8u;
label_79a5b8:
    // 0x79a5b8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A5B8u;
    SET_GPR_U32(ctx, 31, 0x79A5C0u);
    ctx->pc = 0x79A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B8u;
    // 0x79a5bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A5B8u, 0x79A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C0u;
label_79a5c0:
    // 0x79a5c0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x79a5c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a5c8: 0xc05404a  jal         func_150128
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0xae750064  sw          $s5, 0x64($s3)
    ctx->pc = 0x79a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 21));
    // 0x79a5d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a5d8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x79a5dc: 0xa2a300a0  sb          $v1, 0xA0($s5)
    ctx->pc = 0x79a5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a5e0: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x79a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
    // 0x79a5e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a5e8: 0xaea20090  sw          $v0, 0x90($s5)
    ctx->pc = 0x79a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 2));
    // 0x79a5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f0: 0xae7e0068  sw          $fp, 0x68($s3)
    ctx->pc = 0x79a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 30));
    // 0x79a5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f8: 0xae66006c  sw          $a2, 0x6C($s3)
    ctx->pc = 0x79a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 6));
    // 0x79a5fc: 0xa2600070  sb          $zero, 0x70($s3)
    ctx->pc = 0x79a5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a600: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A600u;
    SET_GPR_U32(ctx, 31, 0x79A608u);
    ctx->pc = 0x79A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A600u;
    // 0x79a604: 0xae7200cc  sw          $s2, 0xCC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A600u, 0x79A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A608u;
label_79a608:
    // 0x79a608: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x79a608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
    // 0x79a60c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79a610: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a614: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79a614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79a618: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79a61c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79a620: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x79A620u;
    {
        const bool branch_taken_0x79a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A620u;
        // 0x79a624: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a620) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A628u;
    // 0x79a628: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x79A628u;
    {
        const bool branch_taken_0x79a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A628u;
        // 0x79a62c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a628) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A630u;
    // 0x79a630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a634: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x79a638: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79A638u;
    SET_GPR_U32(ctx, 31, 0x79A640u);
    ctx->pc = 0x79A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A638u;
    // 0x79a63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79A638u, 0x79A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0xc1e7c78  jal         func_79F1E0
    ctx->pc = 0x79A640u;
    SET_GPR_U32(ctx, 31, 0x79A648u);
    ctx->pc = 0x79A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A640u;
    // 0x79a644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79F1E0u, 0x79A640u, 0x79A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A648u;
label_79a648:
    // 0x79a648: 0xc1e77da  jal         func_79DF68
    ctx->pc = 0x79A648u;
    SET_GPR_U32(ctx, 31, 0x79A650u);
    ctx->pc = 0x79A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A648u;
    // 0x79a64c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79DF68u, 0x79A648u, 0x79A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A650u;
label_79a650:
    // 0x79a650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a654: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79A654u;
    SET_GPR_U32(ctx, 31, 0x79A65Cu);
    ctx->pc = 0x79A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A654u;
    // 0x79a658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79A654u, 0x79A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A65Cu;
label_79a65c:
    // 0x79a65c: 0xc1e7620  jal         func_79D880
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D880u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x79a668: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x79a66c: 0x90c2007a  lbu         $v0, 0x7A($a2)
    ctx->pc = 0x79a66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x79a670: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A714u;
            goto label_79a714;
        }
    }
    ctx->pc = 0x79A678u;
    // 0x79a678: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x79a67c: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x79a680: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A680u;
    {
        const bool branch_taken_0x79a680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79a680) {
            ctx->pc = 0x79A684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A680u;
            // 0x79a684: 0x24a20030  addiu       $v0, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6A4u;
            goto label_79a6a4;
        }
    }
    ctx->pc = 0x79A688u;
    // 0x79a688: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x79a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a68c: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x79a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x79a690: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a694: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a698: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a69c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a6a0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_79a6a4:
    // 0x79a6a4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6C4u;
            goto label_79a6c4;
        }
    }
    ctx->pc = 0x79A6ACu;
    // 0x79a6ac: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x79a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a6b0: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x79a6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x79a6b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a6b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a6bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a6c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a6c4:
    // 0x79a6c4: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x79a6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a6cc: 0x24a20070  addiu       $v0, $a1, 0x70
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x79a6d0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x79a6d4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a6d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a6dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a6e0: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x79a6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x79a6e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6e8: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x79a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x79a6ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79a6f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a6f4: 0xe4c10064  swc1        $f1, 0x64($a2)
    ctx->pc = 0x79a6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x79a6f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a700: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x79a700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x79a704: 0xe4c0007c  swc1        $f0, 0x7C($a2)
    ctx->pc = 0x79a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
    // 0x79a708: 0xacc0006c  sw          $zero, 0x6C($a2)
    ctx->pc = 0x79a708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 0));
    // 0x79a70c: 0xa0a4009b  sb          $a0, 0x9B($a1)
    ctx->pc = 0x79a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 155), (uint8_t)GPR_U32(ctx, 4));
label_79a710:
    // 0x79a710: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x79a710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_79a714:
    // 0x79a714: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A714u;
    {
        const bool branch_taken_0x79a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A714u;
        // 0x79a718: 0x93a30070  lbu         $v1, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a714) {
            ctx->pc = 0x79A728u;
            goto label_79a728;
        }
    }
    ctx->pc = 0x79A71Cu;
    // 0x79a71c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A71Cu;
    SET_GPR_U32(ctx, 31, 0x79A724u);
    ctx->pc = 0x79A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A71Cu;
    // 0x79a720: 0x8ec42f84  lw          $a0, 0x2F84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A71Cu, 0x79A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A724u;
label_79a724:
    // 0x79a724: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x79a724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_79a728:
    // 0x79a728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a72c: 0xa282038c  sb          $v0, 0x38C($s4)
    ctx->pc = 0x79a72cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 908), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a730: 0x27b00024  addiu       $s0, $sp, 0x24
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79a734: 0xa2830399  sb          $v1, 0x399($s4)
    ctx->pc = 0x79a734u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 921), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a738: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79a73c: 0x0  nop
    ctx->pc = 0x79a73cu;
    // NOP
label_79a740:
    // 0x79a740: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a744: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A744u;
    {
        const bool branch_taken_0x79a744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A744u;
        // 0x79a748: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a744) {
            ctx->pc = 0x79A754u;
            goto label_79a754;
        }
    }
    ctx->pc = 0x79A74Cu;
    // 0x79a74c: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x79A74Cu;
    SET_GPR_U32(ctx, 31, 0x79A754u);
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79A74Cu, 0x79A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A754u;
label_79a754:
    // 0x79a754: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A75Cu;
    // 0x79a75c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A75Cu;
    {
        const bool branch_taken_0x79a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a75c) {
            ctx->pc = 0x79A784u;
            goto label_79a784;
        }
    }
    ctx->pc = 0x79A764u;
label_79a764:
    // 0x79a764: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x79A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A764u;
    // 0x79a768: 0x3c16003c  lui         $s6, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a770: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A770u;
    SET_GPR_U32(ctx, 31, 0x79A778u);
    ctx->pc = 0x79A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A770u;
    // 0x79a774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A770u, 0x79A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A778u;
label_79a778:
    // 0x79a778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a77c: 0xa282038c  sb          $v0, 0x38C($s4)
    ctx->pc = 0x79a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 908), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a780: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79a784:
    // 0x79a784: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A784u;
    SET_GPR_U32(ctx, 31, 0x79A78Cu);
    ctx->pc = 0x79A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A784u;
    // 0x79a788: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A784u, 0x79A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A78Cu;
label_79a78c:
    // 0x79a78c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x79a78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x79a790: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x79a790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x79a794: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x79a794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x79a798: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x79a798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x79a79c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x79a79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x79a7a0: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x79a7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x79a7a4: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x79a7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79a7a8: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x79a7a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a7ac: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x79a7acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a7b0: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x79a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7BCu;
    // 0x79a7bc: 0x0  nop
    ctx->pc = 0x79a7bcu;
    // NOP
    ctx->pc = 0x79a7c0u;
}
} // namespace gh_r501
