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

// Function: func_002557F8
// Address: 0x2557f8 - 0x255eb0
void func_002557F8_0x2557f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002557F8_0x2557f8");
#endif

    switch (ctx->pc) {
        case 0x25588cu: goto label_25588c;
        case 0x25589cu: goto label_25589c;
        case 0x2558b4u: goto label_2558b4;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559ccu: goto label_2559cc;
        case 0x2559f8u: goto label_2559f8;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a40u: goto label_255a40;
        case 0x255a8cu: goto label_255a8c;
        case 0x255ab0u: goto label_255ab0;
        case 0x255b74u: goto label_255b74;
        case 0x255c10u: goto label_255c10;
        case 0x255c64u: goto label_255c64;
        case 0x255c88u: goto label_255c88;
        case 0x255c94u: goto label_255c94;
        case 0x255ca0u: goto label_255ca0;
        case 0x255cb0u: goto label_255cb0;
        case 0x255dbcu: goto label_255dbc;
        case 0x255de8u: goto label_255de8;
        case 0x255e04u: goto label_255e04;
        case 0x255e14u: goto label_255e14;
        case 0x255e24u: goto label_255e24;
        case 0x255e38u: goto label_255e38;
        case 0x255e44u: goto label_255e44;
        case 0x255e4cu: goto label_255e4c;
        case 0x255e6cu: goto label_255e6c;
        case 0x255e88u: goto label_255e88;
        case 0x255e98u: goto label_255e98;
        default: break;
    }

    ctx->pc = 0x2557f8u;

    // 0x2557f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2557fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2557fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x255800: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x255800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x255804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x255804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255808: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x255808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25580c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x25580cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x255810: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x255810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255814: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x255814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255818: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x255818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25581c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25581cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255820: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x255820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x255824: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x255824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x255828: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x255828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25582c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25582cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255830: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x255830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x255834: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x255834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x255838: 0x107000a1  beq         $v1, $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x255838u;
    {
        const bool branch_taken_0x255838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x25583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255838u;
        // 0x25583c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255838) {
            ctx->pc = 0x255AC0u;
            goto label_255ac0;
        }
    }
    ctx->pc = 0x255840u;
    // 0x255840: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x255840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x255844: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x255844u;
    {
        const bool branch_taken_0x255844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255844) {
            ctx->pc = 0x255848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255844u;
            // 0x255848: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25585Cu;
            goto label_25585c;
        }
    }
    ctx->pc = 0x25584Cu;
    // 0x25584c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25584Cu;
    {
        const bool branch_taken_0x25584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25584Cu;
        // 0x255850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25584c) {
            ctx->pc = 0x255874u;
            goto label_255874;
        }
    }
    ctx->pc = 0x255854u;
    // 0x255854: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x255854u;
    {
        const bool branch_taken_0x255854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255854u;
        // 0x255858: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255854) {
            ctx->pc = 0x255E9Cu;
            goto label_255e9c;
        }
    }
    ctx->pc = 0x25585Cu;
label_25585c:
    // 0x25585c: 0x10620112  beq         $v1, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x25585Cu;
    {
        const bool branch_taken_0x25585c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25585Cu;
        // 0x255860: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25585c) {
            ctx->pc = 0x255CA8u;
            goto label_255ca8;
        }
    }
    ctx->pc = 0x255864u;
    // 0x255864: 0x10620165  beq         $v1, $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x255864u;
    {
        const bool branch_taken_0x255864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255864u;
        // 0x255868: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255864) {
            ctx->pc = 0x255DFCu;
            goto label_255dfc;
        }
    }
    ctx->pc = 0x25586Cu;
    // 0x25586c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x25586Cu;
    {
        const bool branch_taken_0x25586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25586Cu;
        // 0x255870: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25586c) {
            ctx->pc = 0x255EA0u;
            goto label_255ea0;
        }
    }
    ctx->pc = 0x255874u;
label_255874:
    // 0x255874: 0x3c013e6f  lui         $at, 0x3E6F
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15983 << 16));
    // 0x255878: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x255878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x25587c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25587cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255880: 0xae201710  sw          $zero, 0x1710($s1)
    ctx->pc = 0x255880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5904), GPR_U32(ctx, 0));
    // 0x255884: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x255884u;
    SET_GPR_U32(ctx, 31, 0x25588Cu);
    ctx->pc = 0x255888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255884u;
    // 0x255888: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x255884u, 0x25588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25588Cu;
label_25588c:
    // 0x25588c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25588Cu;
    {
        const bool branch_taken_0x25588c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25588c) {
            ctx->pc = 0x2558ACu;
            goto label_2558ac;
        }
    }
    ctx->pc = 0x255894u;
    // 0x255894: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255894u;
    SET_GPR_U32(ctx, 31, 0x25589Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255894u, 0x25589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25589Cu;
label_25589c:
    // 0x25589c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2558a0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2558A0u;
    {
        const bool branch_taken_0x2558a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558a0) {
            ctx->pc = 0x2558A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2558A0u;
            // 0x2558a4: 0xa22017c3  sb          $zero, 0x17C3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2558ACu;
            goto label_2558ac;
        }
    }
    ctx->pc = 0x2558A8u;
    // 0x2558a8: 0xa23017c3  sb          $s0, 0x17C3($s1)
    ctx->pc = 0x2558a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 16));
label_2558ac:
    // 0x2558ac: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2558ACu;
    SET_GPR_U32(ctx, 31, 0x2558B4u);
    ctx->pc = 0x2558B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558ACu;
    // 0x2558b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2558ACu, 0x2558B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558B4u;
label_2558b4:
    // 0x2558b4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2558b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2558b8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2558b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2558bc: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x2558c0: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x2558c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x2558c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558C4u;
        // 0x2558c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x2558E4u;
            goto label_2558e4;
        }
    }
    ctx->pc = 0x2558CCu;
    // 0x2558cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2558d0: 0x24421390  addiu       $v0, $v0, 0x1390
    ctx->pc = 0x2558d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
    // 0x2558d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2558d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2558d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2558dc: 0x800008  jr          $a0
    ctx->pc = 0x2558DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2558E4u: goto label_2558e4;
            case 0x2558F4u: goto label_2558f4;
            case 0x255904u: goto label_255904;
            case 0x255914u: goto label_255914;
            case 0x255924u: goto label_255924;
            case 0x255934u: goto label_255934;
            case 0x255944u: goto label_255944;
            case 0x255954u: goto label_255954;
            case 0x255964u: goto label_255964;
            case 0x255974u: goto label_255974;
            case 0x255984u: goto label_255984;
            case 0x255994u: goto label_255994;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2558E4u;
label_2558e4:
    // 0x2558e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2558e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2558e8: 0x8c4305d0  lw          $v1, 0x5D0($v0)
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1488)));
    // 0x2558ec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2558ECu;
    {
        const bool branch_taken_0x2558ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558ECu;
        // 0x2558f0: 0x8c4405d4  lw          $a0, 0x5D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558ec) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x2558F4u;
label_2558f4:
    // 0x2558f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2558f8: 0x8c432bf4  lw          $v1, 0x2BF4($v0)
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11252)));
    // 0x2558fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2558FCu;
    {
        const bool branch_taken_0x2558fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558FCu;
        // 0x255900: 0x8c442bf8  lw          $a0, 0x2BF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558fc) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255904u;
label_255904:
    // 0x255904: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255908: 0x8c430ec4  lw          $v1, 0xEC4($v0)
    ctx->pc = 0x255908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3780)));
    // 0x25590c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25590Cu;
    {
        const bool branch_taken_0x25590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25590Cu;
        // 0x255910: 0x8c440ec8  lw          $a0, 0xEC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25590c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255914u;
label_255914:
    // 0x255914: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255918: 0x8c430a84  lw          $v1, 0xA84($v0)
    ctx->pc = 0x255918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2692)));
    // 0x25591c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25591Cu;
    {
        const bool branch_taken_0x25591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25591Cu;
        // 0x255920: 0x8c440a88  lw          $a0, 0xA88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25591c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255924u;
label_255924:
    // 0x255924: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255928: 0x8c430a84  lw          $v1, 0xA84($v0)
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2692)));
    // 0x25592c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25592Cu;
    {
        const bool branch_taken_0x25592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25592Cu;
        // 0x255930: 0x8c440a88  lw          $a0, 0xA88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25592c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255934u;
label_255934:
    // 0x255934: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255938: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x255938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x25593c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25593Cu;
    {
        const bool branch_taken_0x25593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25593Cu;
        // 0x255940: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25593c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255944u;
label_255944:
    // 0x255944: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255948: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x255948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x25594c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25594Cu;
    {
        const bool branch_taken_0x25594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25594Cu;
        // 0x255950: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25594c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255954u;
label_255954:
    // 0x255954: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255958: 0x8c431728  lw          $v1, 0x1728($v0)
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5928)));
    // 0x25595c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25595Cu;
    {
        const bool branch_taken_0x25595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25595Cu;
        // 0x255960: 0x8c44172c  lw          $a0, 0x172C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25595c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255964u;
label_255964:
    // 0x255964: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255968: 0x8c431728  lw          $v1, 0x1728($v0)
    ctx->pc = 0x255968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5928)));
    // 0x25596c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25596Cu;
    {
        const bool branch_taken_0x25596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25596Cu;
        // 0x255970: 0x8c44172c  lw          $a0, 0x172C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25596c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255974u;
label_255974:
    // 0x255974: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255978: 0x8c431d10  lw          $v1, 0x1D10($v0)
    ctx->pc = 0x255978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7440)));
    // 0x25597c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25597Cu;
    {
        const bool branch_taken_0x25597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25597Cu;
        // 0x255980: 0x8c441d14  lw          $a0, 0x1D14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25597c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255984u;
label_255984:
    // 0x255984: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255988: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x25598c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25598Cu;
    {
        const bool branch_taken_0x25598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25598Cu;
        // 0x255990: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25598c) {
            ctx->pc = 0x2559A0u;
            goto label_2559a0;
        }
    }
    ctx->pc = 0x255994u;
label_255994:
    // 0x255994: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255998: 0x8c4312f0  lw          $v1, 0x12F0($v0)
    ctx->pc = 0x255998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4848)));
    // 0x25599c: 0x8c4412f4  lw          $a0, 0x12F4($v0)
    ctx->pc = 0x25599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4852)));
label_2559a0:
    // 0x2559a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2559a4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2559a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2559a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2559a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2559ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2559b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2559b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559b4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2559B4u;
    SET_GPR_U32(ctx, 31, 0x2559BCu);
    ctx->pc = 0x2559B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559B4u;
    // 0x2559b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2559B4u, 0x2559BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559BCu;
label_2559bc:
    // 0x2559bc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2559bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2559c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2559c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559c4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2559C4u;
    SET_GPR_U32(ctx, 31, 0x2559CCu);
    ctx->pc = 0x2559C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559C4u;
    // 0x2559c8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2559C4u, 0x2559CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559CCu;
label_2559cc:
    // 0x2559cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2559ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2559d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2559d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2559d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2559dc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2559dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2559e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2559e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2559e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2559e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559f0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2559F0u;
    SET_GPR_U32(ctx, 31, 0x2559F8u);
    ctx->pc = 0x2559F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559F0u;
    // 0x2559f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2559F0u, 0x2559F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559F8u;
label_2559f8:
    // 0x2559f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2559f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2559fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a00: 0x240600f6  addiu       $a2, $zero, 0xF6
    ctx->pc = 0x255a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x255a04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x255a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x255a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x255a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a14: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x255A14u;
    SET_GPR_U32(ctx, 31, 0x255A1Cu);
    ctx->pc = 0x255A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A14u;
    // 0x255a18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x255A14u, 0x255A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A1Cu;
label_255a1c:
    // 0x255a1c: 0x8e2316e8  lw          $v1, 0x16E8($s1)
    ctx->pc = 0x255a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5864)));
    // 0x255a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x255a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a30: 0x246303e7  addiu       $v1, $v1, 0x3E7
    ctx->pc = 0x255a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 999));
    // 0x255a34: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x255a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x255a38: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x255A38u;
    SET_GPR_U32(ctx, 31, 0x255A40u);
    ctx->pc = 0x255A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A38u;
    // 0x255a3c: 0xae2316e8  sw          $v1, 0x16E8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECD0u, 0x255A38u, 0x255A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A40u;
label_255a40:
    // 0x255a40: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x255a44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x255A44u;
    {
        const bool branch_taken_0x255a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A44u;
        // 0x255a48: 0xae2005f0  sw          $zero, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a44) {
            ctx->pc = 0x255A84u;
            goto label_255a84;
        }
    }
    ctx->pc = 0x255A4Cu;
    // 0x255a4c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x255a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255a50: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x255A50u;
    {
        const bool branch_taken_0x255a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A50u;
        // 0x255a54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a50) {
            ctx->pc = 0x255A84u;
            goto label_255a84;
        }
    }
    ctx->pc = 0x255A58u;
    // 0x255a58: 0x262305d0  addiu       $v1, $s1, 0x5D0
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x255a5c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x255a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x255a60: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x255a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x255a64: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255A64u;
    {
        const bool branch_taken_0x255a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255a64) {
            ctx->pc = 0x255A84u;
            goto label_255a84;
        }
    }
    ctx->pc = 0x255A6Cu;
    // 0x255a6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255a70: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x255a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x255a74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255a78: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x255a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x255a7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x255a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255a80: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x255a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_255a84:
    // 0x255a84: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x255A84u;
    SET_GPR_U32(ctx, 31, 0x255A8Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x255A84u, 0x255A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A8Cu;
label_255a8c:
    // 0x255a8c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x255a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x255a90: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x255a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x255a94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255a98: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x255a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255a9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x255a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x255aa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x255aa4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x255aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x255aa8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x255AA8u;
    SET_GPR_U32(ctx, 31, 0x255AB0u);
    ctx->pc = 0x255AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AA8u;
    // 0x255aac: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x255AA8u, 0x255AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AB0u;
label_255ab0:
    // 0x255ab0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x255ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x255ab4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x255ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x255ab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255abc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x255abcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_255ac0:
    // 0x255ac0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x255ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x255ac4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x255ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x255ac8: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x255ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255acc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255ad0: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x255ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255ad4: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x255ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x255ad8: 0x3c013cd4  lui         $at, 0x3CD4
    ctx->pc = 0x255ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15572 << 16));
    // 0x255adc: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x255adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x255ae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255ae4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x255ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ae8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x255ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255aec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x255af0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x255af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x255af4: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x255af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255af8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x255af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x255afc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x255afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255b00: 0x0  nop
    ctx->pc = 0x255b00u;
    // NOP
    // 0x255b04: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x255B04u;
    {
        const bool branch_taken_0x255b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B04u;
        // 0x255b08: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b04) {
            ctx->pc = 0x255BB8u;
            goto label_255bb8;
        }
    }
    ctx->pc = 0x255B0Cu;
    // 0x255b0c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x255b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255b10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x255b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255b14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x255b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255b1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255b20: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255b24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x255b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x255b2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x255b30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255b34: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x255b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b3c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x255b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255b40: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x255b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x255b44: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x255b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x255b48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x255b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x255b4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255b54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x255b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x255b58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x255b58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x255b5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x255b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x255b60: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x255b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x255b64: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x255b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x255b68: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x255b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x255b6c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x255B6Cu;
    SET_GPR_U32(ctx, 31, 0x255B74u);
    ctx->pc = 0x255B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B6Cu;
    // 0x255b70: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x255B6Cu, 0x255B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B74u;
label_255b74:
    // 0x255b74: 0x54500035  bnel        $v0, $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x255B74u;
    {
        const bool branch_taken_0x255b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x255b74) {
            ctx->pc = 0x255B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255B74u;
            // 0x255b78: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C4Cu;
            goto label_255c4c;
        }
    }
    ctx->pc = 0x255B7Cu;
    // 0x255b7c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x255b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255b80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x255b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x255b84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x255b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x255b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255b8c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255b90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x255b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x255b94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255b9c: 0x0  nop
    ctx->pc = 0x255b9cu;
    // NOP
    // 0x255ba0: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x255BA0u;
    {
        const bool branch_taken_0x255ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ba0) {
            ctx->pc = 0x255BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255BA0u;
            // 0x255ba4: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C4Cu;
            goto label_255c4c;
        }
    }
    ctx->pc = 0x255BA8u;
    // 0x255ba8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x255ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x255bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255bb0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x255BB0u;
    {
        const bool branch_taken_0x255bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BB0u;
        // 0x255bb4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255bb0) {
            ctx->pc = 0x255C48u;
            goto label_255c48;
        }
    }
    ctx->pc = 0x255BB8u;
label_255bb8:
    // 0x255bb8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x255bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x255bbc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255bc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255bc4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x255bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x255bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255bcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255bd0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255bd4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x255bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255bd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x255bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x255bdc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x255bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x255be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x255be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x255be4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x255be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x255be8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x255be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x255bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bf0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x255bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x255bf4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x255bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255bf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x255bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x255bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c00: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x255c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x255c04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x255c04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c08: 0xc04c784  jal         func_131E10
    ctx->pc = 0x255C08u;
    SET_GPR_U32(ctx, 31, 0x255C10u);
    ctx->pc = 0x255C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C08u;
    // 0x255c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x255C08u, 0x255C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C10u;
label_255c10:
    // 0x255c10: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x255C10u;
    {
        const bool branch_taken_0x255c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x255c10) {
            ctx->pc = 0x255C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C10u;
            // 0x255c14: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C4Cu;
            goto label_255c4c;
        }
    }
    ctx->pc = 0x255C18u;
    // 0x255c18: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x255c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255c1c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x255c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x255c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255c24: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x255c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x255c28: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x255c28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x255c2c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255c30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x255c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255c34: 0x0  nop
    ctx->pc = 0x255c34u;
    // NOP
    // 0x255c38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x255C38u;
    {
        const bool branch_taken_0x255c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255c38) {
            ctx->pc = 0x255C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C38u;
            // 0x255c3c: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C4Cu;
            goto label_255c4c;
        }
    }
    ctx->pc = 0x255C40u;
    // 0x255c40: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x255c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x255c44: 0xe63405c4  swc1        $f20, 0x5C4($s1)
    ctx->pc = 0x255c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_255c48:
    // 0x255c48: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x255c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_255c4c:
    // 0x255c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255c54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255c58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x255c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x255c5c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x255C5Cu;
    SET_GPR_U32(ctx, 31, 0x255C64u);
    ctx->pc = 0x255C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C5Cu;
    // 0x255c60: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x255C5Cu, 0x255C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C64u;
label_255c64:
    // 0x255c64: 0x3c01be23  lui         $at, 0xBE23
    ctx->pc = 0x255c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48675 << 16));
    // 0x255c68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x255c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x255c6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c74: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x255c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x255c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x255c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x255c80: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x255C80u;
    SET_GPR_U32(ctx, 31, 0x255C88u);
    ctx->pc = 0x255C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C80u;
    // 0x255c84: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x255C80u, 0x255C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C88u;
label_255c88:
    // 0x255c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c8c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x255C8Cu;
    SET_GPR_U32(ctx, 31, 0x255C94u);
    ctx->pc = 0x255C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C8Cu;
    // 0x255c90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x255C8Cu, 0x255C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C94u;
label_255c94:
    // 0x255c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c98: 0xc0989d4  jal         func_262750
    ctx->pc = 0x255C98u;
    SET_GPR_U32(ctx, 31, 0x255CA0u);
    ctx->pc = 0x255C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C98u;
    // 0x255c9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x255C98u, 0x255CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CA0u;
label_255ca0:
    // 0x255ca0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x255CA0u;
    {
        const bool branch_taken_0x255ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CA0u;
        // 0x255ca4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ca0) {
            ctx->pc = 0x255E9Cu;
            goto label_255e9c;
        }
    }
    ctx->pc = 0x255CA8u;
label_255ca8:
    // 0x255ca8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x255CA8u;
    SET_GPR_U32(ctx, 31, 0x255CB0u);
    ctx->pc = 0x255CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CA8u;
    // 0x255cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x255CA8u, 0x255CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CB0u;
label_255cb0:
    // 0x255cb0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x255cb4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x255cb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255cb8: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x255cbc: 0x2c62007a  sltiu       $v0, $v1, 0x7A
    ctx->pc = 0x255cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x255cc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255CC0u;
    {
        const bool branch_taken_0x255cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CC0u;
        // 0x255cc4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cc0) {
            ctx->pc = 0x255CE0u;
            goto label_255ce0;
        }
    }
    ctx->pc = 0x255CC8u;
    // 0x255cc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255ccc: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x255cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x255cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255cd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255cd8: 0x800008  jr          $a0
    ctx->pc = 0x255CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255CE0u: goto label_255ce0;
            case 0x255CF0u: goto label_255cf0;
            case 0x255D00u: goto label_255d00;
            case 0x255D10u: goto label_255d10;
            case 0x255D20u: goto label_255d20;
            case 0x255D30u: goto label_255d30;
            case 0x255D40u: goto label_255d40;
            case 0x255D50u: goto label_255d50;
            case 0x255D60u: goto label_255d60;
            case 0x255D70u: goto label_255d70;
            case 0x255D80u: goto label_255d80;
            case 0x255D90u: goto label_255d90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255CD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255CE0u;
label_255ce0:
    // 0x255ce0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255ce4: 0x8c4305d8  lw          $v1, 0x5D8($v0)
    ctx->pc = 0x255ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1496)));
    // 0x255ce8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x255CE8u;
    {
        const bool branch_taken_0x255ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CE8u;
        // 0x255cec: 0x8c4405dc  lw          $a0, 0x5DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ce8) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255CF0u;
label_255cf0:
    // 0x255cf0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255cf4: 0x8c432bfc  lw          $v1, 0x2BFC($v0)
    ctx->pc = 0x255cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11260)));
    // 0x255cf8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x255CF8u;
    {
        const bool branch_taken_0x255cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CF8u;
        // 0x255cfc: 0x8c442c00  lw          $a0, 0x2C00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cf8) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D00u;
label_255d00:
    // 0x255d00: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d04: 0x8c430ecc  lw          $v1, 0xECC($v0)
    ctx->pc = 0x255d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
    // 0x255d08: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x255D08u;
    {
        const bool branch_taken_0x255d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D08u;
        // 0x255d0c: 0x8c440ed0  lw          $a0, 0xED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d08) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D10u;
label_255d10:
    // 0x255d10: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d14: 0x8c430a8c  lw          $v1, 0xA8C($v0)
    ctx->pc = 0x255d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2700)));
    // 0x255d18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x255D18u;
    {
        const bool branch_taken_0x255d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D18u;
        // 0x255d1c: 0x8c440a90  lw          $a0, 0xA90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d18) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D20u;
label_255d20:
    // 0x255d20: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d24: 0x8c430a8c  lw          $v1, 0xA8C($v0)
    ctx->pc = 0x255d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2700)));
    // 0x255d28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x255D28u;
    {
        const bool branch_taken_0x255d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D28u;
        // 0x255d2c: 0x8c440a90  lw          $a0, 0xA90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d28) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D30u;
label_255d30:
    // 0x255d30: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d34: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x255d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x255d38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x255D38u;
    {
        const bool branch_taken_0x255d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D38u;
        // 0x255d3c: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d38) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D40u;
label_255d40:
    // 0x255d40: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d44: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x255d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x255d48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x255D48u;
    {
        const bool branch_taken_0x255d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D48u;
        // 0x255d4c: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d48) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D50u;
label_255d50:
    // 0x255d50: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d54: 0x8c431730  lw          $v1, 0x1730($v0)
    ctx->pc = 0x255d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5936)));
    // 0x255d58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x255D58u;
    {
        const bool branch_taken_0x255d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D58u;
        // 0x255d5c: 0x8c441734  lw          $a0, 0x1734($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d58) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D60u;
label_255d60:
    // 0x255d60: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d64: 0x8c431730  lw          $v1, 0x1730($v0)
    ctx->pc = 0x255d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5936)));
    // 0x255d68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x255D68u;
    {
        const bool branch_taken_0x255d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D68u;
        // 0x255d6c: 0x8c441734  lw          $a0, 0x1734($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d68) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D70u;
label_255d70:
    // 0x255d70: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d74: 0x8c4305d8  lw          $v1, 0x5D8($v0)
    ctx->pc = 0x255d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1496)));
    // 0x255d78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255D78u;
    {
        const bool branch_taken_0x255d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D78u;
        // 0x255d7c: 0x8c4405dc  lw          $a0, 0x5DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d78) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D80u;
label_255d80:
    // 0x255d80: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d84: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x255d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x255d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255D88u;
    {
        const bool branch_taken_0x255d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D88u;
        // 0x255d8c: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d88) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D90u;
label_255d90:
    // 0x255d90: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255d94: 0x8c4312f8  lw          $v1, 0x12F8($v0)
    ctx->pc = 0x255d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4856)));
    // 0x255d98: 0x8c4412fc  lw          $a0, 0x12FC($v0)
    ctx->pc = 0x255d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4860)));
label_255d9c:
    // 0x255d9c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x255d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255da0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x255da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x255da4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x255da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255db0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255db4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x255DB4u;
    SET_GPR_U32(ctx, 31, 0x255DBCu);
    ctx->pc = 0x255DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DB4u;
    // 0x255db8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x255DB4u, 0x255DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DBCu;
label_255dbc:
    // 0x255dbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x255dbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x255dc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255dc4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x255dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x255dc8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x255dcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x255dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255dd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x255dd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x255ddc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x255ddcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x255de0: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x255DE0u;
    SET_GPR_U32(ctx, 31, 0x255DE8u);
    ctx->pc = 0x255DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DE0u;
    // 0x255de4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x255DE0u, 0x255DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DE8u;
label_255de8:
    // 0x255de8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x255de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x255dec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x255df0: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x255df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x255df4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x255df8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x255df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_255dfc:
    // 0x255dfc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x255DFCu;
    SET_GPR_U32(ctx, 31, 0x255E04u);
    ctx->pc = 0x255E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DFCu;
    // 0x255e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x255DFCu, 0x255E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E04u;
label_255e04:
    // 0x255e04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255E04u;
    {
        const bool branch_taken_0x255e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255e04) {
            ctx->pc = 0x255E24u;
            goto label_255e24;
        }
    }
    ctx->pc = 0x255E0Cu;
    // 0x255e0c: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x255E0Cu;
    SET_GPR_U32(ctx, 31, 0x255E14u);
    ctx->pc = 0x255E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E0Cu;
    // 0x255e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x255E0Cu, 0x255E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E14u;
label_255e14:
    // 0x255e14: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x255E14u;
    {
        const bool branch_taken_0x255e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E14u;
        // 0x255e18: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e14) {
            ctx->pc = 0x255E9Cu;
            goto label_255e9c;
        }
    }
    ctx->pc = 0x255E1Cu;
    // 0x255e1c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x255E1Cu;
    SET_GPR_U32(ctx, 31, 0x255E24u);
    ctx->pc = 0x255E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E1Cu;
    // 0x255e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x255E1Cu, 0x255E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E24u;
label_255e24:
    // 0x255e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e30: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x255E30u;
    SET_GPR_U32(ctx, 31, 0x255E38u);
    ctx->pc = 0x255E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E30u;
    // 0x255e34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x255E30u, 0x255E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E38u;
label_255e38:
    // 0x255e38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x255e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x255e3c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x255E3Cu;
    SET_GPR_U32(ctx, 31, 0x255E44u);
    ctx->pc = 0x255E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E3Cu;
    // 0x255e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x255E3Cu, 0x255E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E44u;
label_255e44:
    // 0x255e44: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x255E44u;
    SET_GPR_U32(ctx, 31, 0x255E4Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x255E44u, 0x255E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E4Cu;
label_255e4c:
    // 0x255e4c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x255e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255e54: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x255e58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x255e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x255e5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x255e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x255e60: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x255e64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x255E64u;
    SET_GPR_U32(ctx, 31, 0x255E6Cu);
    ctx->pc = 0x255E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E64u;
    // 0x255e68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x255E64u, 0x255E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E6Cu;
label_255e6c:
    // 0x255e6c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x255e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x255e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255E70u;
    {
        const bool branch_taken_0x255e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E70u;
        // 0x255e74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e70) {
            ctx->pc = 0x255E80u;
            goto label_255e80;
        }
    }
    ctx->pc = 0x255E78u;
    // 0x255e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x255E78u;
    {
        const bool branch_taken_0x255e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E78u;
        // 0x255e7c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e78) {
            ctx->pc = 0x255E98u;
            goto label_255e98;
        }
    }
    ctx->pc = 0x255E80u;
label_255e80:
    // 0x255e80: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x255E80u;
    SET_GPR_U32(ctx, 31, 0x255E88u);
    ctx->pc = 0x255E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E80u;
    // 0x255e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x255E80u, 0x255E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E88u;
label_255e88:
    // 0x255e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255E88u;
    {
        const bool branch_taken_0x255e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E88u;
        // 0x255e8c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e88) {
            ctx->pc = 0x255E9Cu;
            goto label_255e9c;
        }
    }
    ctx->pc = 0x255E90u;
    // 0x255e90: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x255E90u;
    SET_GPR_U32(ctx, 31, 0x255E98u);
    ctx->pc = 0x255E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255E90u;
    // 0x255e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x255E90u, 0x255E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255E98u;
label_255e98:
    // 0x255e98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x255e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_255e9c:
    // 0x255e9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x255e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_255ea0:
    // 0x255ea0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x255ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255ea4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x255ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x255EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EA8u;
        // 0x255eac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255EB0u;
}
