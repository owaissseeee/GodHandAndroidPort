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

// Function: func_00216760
// Address: 0x216760 - 0x216b58
void func_00216760_0x216760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00216760_0x216760");
#endif

    switch (ctx->pc) {
        case 0x2167c0u: goto label_2167c0;
        case 0x2167e0u: goto label_2167e0;
        case 0x21680cu: goto label_21680c;
        case 0x216820u: goto label_216820;
        case 0x216840u: goto label_216840;
        case 0x216848u: goto label_216848;
        case 0x216864u: goto label_216864;
        case 0x216888u: goto label_216888;
        case 0x2168c0u: goto label_2168c0;
        case 0x216904u: goto label_216904;
        case 0x216924u: goto label_216924;
        case 0x216938u: goto label_216938;
        case 0x216958u: goto label_216958;
        case 0x216964u: goto label_216964;
        case 0x21697cu: goto label_21697c;
        case 0x216984u: goto label_216984;
        case 0x2169a0u: goto label_2169a0;
        case 0x2169dcu: goto label_2169dc;
        case 0x2169e8u: goto label_2169e8;
        case 0x216a08u: goto label_216a08;
        case 0x216a3cu: goto label_216a3c;
        case 0x216a5cu: goto label_216a5c;
        case 0x216a70u: goto label_216a70;
        case 0x216aa0u: goto label_216aa0;
        case 0x216aacu: goto label_216aac;
        case 0x216abcu: goto label_216abc;
        case 0x216ae8u: goto label_216ae8;
        case 0x216afcu: goto label_216afc;
        case 0x216b0cu: goto label_216b0c;
        case 0x216b20u: goto label_216b20;
        case 0x216b2cu: goto label_216b2c;
        case 0x216b34u: goto label_216b34;
        default: break;
    }

    ctx->pc = 0x216760u;

    // 0x216760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x216764: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x216764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x216768: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x216768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21676c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21676cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x216770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x216774: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x216774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x216778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21677c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x21677cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x216780: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x216780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x216784: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x216788: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x216788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21678c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x216790: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x216790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x216794: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216794u;
        // 0x216798: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216794) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x21679Cu;
    // 0x21679c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2167a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2167a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2167a4: 0x24426550  addiu       $v0, $v0, 0x6550
    ctx->pc = 0x2167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25936));
    // 0x2167a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2167a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2167ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2167b0: 0x800008  jr          $a0
    ctx->pc = 0x2167B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2167B8u: goto label_2167b8;
            case 0x216818u: goto label_216818;
            case 0x21685Cu: goto label_21685c;
            case 0x2168D8u: goto label_2168d8;
            case 0x216A00u: goto label_216a00;
            case 0x216A68u: goto label_216a68;
            case 0x216AB4u: goto label_216ab4;
            case 0x216AF4u: goto label_216af4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2167B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2167B8u;
label_2167b8:
    // 0x2167b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2167B8u;
    SET_GPR_U32(ctx, 31, 0x2167C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2167B8u, 0x2167C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167C0u;
label_2167c0:
    // 0x2167c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2167c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2167c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2167c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2167cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2167CCu;
    {
        const bool branch_taken_0x2167cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167cc) {
            ctx->pc = 0x2167D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167CCu;
            // 0x2167d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2167D4u;
            goto label_2167d4;
        }
    }
    ctx->pc = 0x2167D4u;
label_2167d4:
    // 0x2167d4: 0x2810  mfhi        $a1
    ctx->pc = 0x2167d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2167d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2167D8u;
    SET_GPR_U32(ctx, 31, 0x2167E0u);
    ctx->pc = 0x2167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167D8u;
    // 0x2167dc: 0xae2517d0  sw          $a1, 0x17D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6096), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2167D8u, 0x2167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167E0u;
label_2167e0:
    // 0x2167e0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2167e4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2167e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2167e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2167e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2167ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2167ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167f0: 0x8c651644  lw          $a1, 0x1644($v1)
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5700)));
    // 0x2167f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2167f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2167f8: 0x8c661648  lw          $a2, 0x1648($v1)
    ctx->pc = 0x2167f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5704)));
    // 0x2167fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2167fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216800: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x216800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216804: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216804u;
    SET_GPR_U32(ctx, 31, 0x21680Cu);
    ctx->pc = 0x216808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216804u;
    // 0x216808: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216804u, 0x21680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21680Cu;
label_21680c:
    // 0x21680c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21680cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216814: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216818:
    // 0x216818: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x216818u;
    SET_GPR_U32(ctx, 31, 0x216820u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x216818u, 0x216820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216820u;
label_216820:
    // 0x216820: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x216820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216828: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x216828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x21682c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21682cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x216830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216834: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x216834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x216838: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x216838u;
    SET_GPR_U32(ctx, 31, 0x216840u);
    ctx->pc = 0x21683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216838u;
    // 0x21683c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x216838u, 0x216840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216840u;
label_216840:
    // 0x216840: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216840u;
    SET_GPR_U32(ctx, 31, 0x216848u);
    ctx->pc = 0x216844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216840u;
    // 0x216844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216840u, 0x216848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216848u;
label_216848:
    // 0x216848: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x216848u;
    {
        const bool branch_taken_0x216848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216848) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216850u;
    // 0x216850: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216854: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x216854u;
    {
        const bool branch_taken_0x216854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216854u;
        // 0x216858: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216854) {
            ctx->pc = 0x216A88u;
            goto label_216a88;
        }
    }
    ctx->pc = 0x21685Cu;
label_21685c:
    // 0x21685c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21685Cu;
    SET_GPR_U32(ctx, 31, 0x216864u);
    ctx->pc = 0x216860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21685Cu;
    // 0x216860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21685Cu, 0x216864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216864u;
label_216864:
    // 0x216864: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216868: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x216868u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21686c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x216870: 0x8c62164c  lw          $v0, 0x164C($v1)
    ctx->pc = 0x216870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5708)));
    // 0x216874: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x216874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x216878: 0x8c651650  lw          $a1, 0x1650($v1)
    ctx->pc = 0x216878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5712)));
    // 0x21687c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x21687cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216880: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x216880u;
    SET_GPR_U32(ctx, 31, 0x216888u);
    ctx->pc = 0x216884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216880u;
    // 0x216884: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x216880u, 0x216888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216888u;
label_216888:
    // 0x216888: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x216888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21688c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21688Cu;
    {
        const bool branch_taken_0x21688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21688c) {
            ctx->pc = 0x2168A0u;
            goto label_2168a0;
        }
    }
    ctx->pc = 0x216894u;
    // 0x216894: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216898: 0x8c621654  lw          $v0, 0x1654($v1)
    ctx->pc = 0x216898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5716)));
    // 0x21689c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x21689cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2168a0:
    // 0x2168a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2168a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2168a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2168a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2168a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2168acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2168b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2168b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2168b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2168B8u;
    SET_GPR_U32(ctx, 31, 0x2168C0u);
    ctx->pc = 0x2168BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B8u;
    // 0x2168bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2168B8u, 0x2168C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168C0u;
label_2168c0:
    // 0x2168c0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2168c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2168c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2168c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2168c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2168c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2168cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2168ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2168d0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2168d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2168d4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2168d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2168d8:
    // 0x2168d8: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x2168d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2168dc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2168dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2168e0: 0x0  nop
    ctx->pc = 0x2168e0u;
    // NOP
    // 0x2168e4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2168e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2168e8: 0x0  nop
    ctx->pc = 0x2168e8u;
    // NOP
    // 0x2168ec: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2168ECu;
    {
        const bool branch_taken_0x2168ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2168ec) {
            ctx->pc = 0x2168F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2168ECu;
            // 0x2168f0: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216928u;
            goto label_216928;
        }
    }
    ctx->pc = 0x2168F4u;
    // 0x2168f4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2168f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2168f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2168f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2168fc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2168FCu;
    SET_GPR_U32(ctx, 31, 0x216904u);
    ctx->pc = 0x216900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168FCu;
    // 0x216900: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2168FCu, 0x216904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216904u;
label_216904:
    // 0x216904: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x216904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21690c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x21690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x216910: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x216910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x216914: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216918: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21691c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x21691Cu;
    SET_GPR_U32(ctx, 31, 0x216924u);
    ctx->pc = 0x216920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21691Cu;
    // 0x216920: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x21691Cu, 0x216924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216924u;
label_216924:
    // 0x216924: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x216924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_216928:
    // 0x216928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21692c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x216930: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216930u;
    SET_GPR_U32(ctx, 31, 0x216938u);
    ctx->pc = 0x216934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216930u;
    // 0x216934: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216930u, 0x216938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216938u;
label_216938:
    // 0x216938: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216938u;
    {
        const bool branch_taken_0x216938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216938u;
        // 0x21693c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216938) {
            ctx->pc = 0x216944u;
            goto label_216944;
        }
    }
    ctx->pc = 0x216940u;
    // 0x216940: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216944:
    // 0x216944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21694c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216950: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216950u;
    SET_GPR_U32(ctx, 31, 0x216958u);
    ctx->pc = 0x216954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216950u;
    // 0x216954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216950u, 0x216958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21695c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x21695Cu;
    SET_GPR_U32(ctx, 31, 0x216964u);
    ctx->pc = 0x216960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21695Cu;
    // 0x216960: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x21695Cu, 0x216964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216964u;
label_216964:
    // 0x216964: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x216964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x216968: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x216968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21696c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x21696Cu;
    {
        const bool branch_taken_0x21696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21696c) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x216974u;
    // 0x216974: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x216974u;
    SET_GPR_U32(ctx, 31, 0x21697Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x216974u, 0x21697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21697Cu;
label_21697c:
    // 0x21697c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21697Cu;
    SET_GPR_U32(ctx, 31, 0x216984u);
    ctx->pc = 0x216980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21697Cu;
    // 0x216980: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21697Cu, 0x216984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216984u;
label_216984:
    // 0x216984: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x216984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x216988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21698c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x216990: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x216990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x216994: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216998: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x216998u;
    SET_GPR_U32(ctx, 31, 0x2169A0u);
    ctx->pc = 0x21699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216998u;
    // 0x21699c: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x216998u, 0x2169A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169A0u;
label_2169a0:
    // 0x2169a0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2169a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2169a4: 0x0  nop
    ctx->pc = 0x2169a4u;
    // NOP
    // 0x2169a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2169A8u;
    {
        const bool branch_taken_0x2169a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2169ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169A8u;
        // 0x2169ac: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169a8) {
            ctx->pc = 0x2169B4u;
            goto label_2169b4;
        }
    }
    ctx->pc = 0x2169B0u;
    // 0x2169b0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2169b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2169b4:
    // 0x2169b4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2169b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2169b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2169bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2169bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2169c0: 0x0  nop
    ctx->pc = 0x2169c0u;
    // NOP
    // 0x2169c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2169c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2169c8: 0x0  nop
    ctx->pc = 0x2169c8u;
    // NOP
    // 0x2169cc: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x2169CCu;
    {
        const bool branch_taken_0x2169cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2169cc) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x2169D4u;
    // 0x2169d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2169D4u;
    SET_GPR_U32(ctx, 31, 0x2169DCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2169D4u, 0x2169DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169DCu;
label_2169dc:
    // 0x2169dc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2169dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2169e0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2169E0u;
    SET_GPR_U32(ctx, 31, 0x2169E8u);
    ctx->pc = 0x2169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169E0u;
    // 0x2169e4: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2169E0u, 0x2169E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169E8u;
label_2169e8:
    // 0x2169e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2169e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2169ec: 0x0  nop
    ctx->pc = 0x2169ecu;
    // NOP
    // 0x2169f0: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x2169F0u;
    {
        const bool branch_taken_0x2169f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2169F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169F0u;
        // 0x2169f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169f0) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x2169F8u;
    // 0x2169f8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2169F8u;
    {
        const bool branch_taken_0x2169f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169F8u;
        // 0x2169fc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169f8) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x216A00u;
label_216a00:
    // 0x216a00: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216A00u;
    SET_GPR_U32(ctx, 31, 0x216A08u);
    ctx->pc = 0x216A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A00u;
    // 0x216a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216A00u, 0x216A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A08u;
label_216a08:
    // 0x216a08: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216a0c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x216a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216a18: 0x8c69165c  lw          $t1, 0x165C($v1)
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5724)));
    // 0x216a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a20: 0x8c621658  lw          $v0, 0x1658($v1)
    ctx->pc = 0x216a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5720)));
    // 0x216a24: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x216a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x216a28: 0x1238021  addu        $s0, $t1, $v1
    ctx->pc = 0x216a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x216a2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x216a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a30: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x216a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216a34: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x216A34u;
    SET_GPR_U32(ctx, 31, 0x216A3Cu);
    ctx->pc = 0x216A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A34u;
    // 0x216a38: 0x240900f0  addiu       $t1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x216A34u, 0x216A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A3Cu;
label_216a3c:
    // 0x216a3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x216a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x216a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216a54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216A54u;
    SET_GPR_U32(ctx, 31, 0x216A5Cu);
    ctx->pc = 0x216A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A54u;
    // 0x216a58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216A54u, 0x216A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A5Cu;
label_216a5c:
    // 0x216a5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216a64: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216a68:
    // 0x216a68: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216A68u;
    SET_GPR_U32(ctx, 31, 0x216A70u);
    ctx->pc = 0x216A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A68u;
    // 0x216a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216A68u, 0x216A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A70u;
label_216a70:
    // 0x216a70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216A70u;
    {
        const bool branch_taken_0x216a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A70u;
        // 0x216a74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a70) {
            ctx->pc = 0x216A88u;
            goto label_216a88;
        }
    }
    ctx->pc = 0x216A78u;
    // 0x216a78: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x216a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x216a7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x216a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x216a80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216A80u;
    {
        const bool branch_taken_0x216a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A80u;
        // 0x216a84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a80) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216A88u;
label_216a88:
    // 0x216a88: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216a8c:
    // 0x216a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216a90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a98: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216A98u;
    SET_GPR_U32(ctx, 31, 0x216AA0u);
    ctx->pc = 0x216A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A98u;
    // 0x216a9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216A98u, 0x216AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AA0u;
label_216aa0:
    // 0x216aa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216aa4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216AA4u;
    SET_GPR_U32(ctx, 31, 0x216AACu);
    ctx->pc = 0x216AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AA4u;
    // 0x216aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216AA4u, 0x216AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AACu;
label_216aac:
    // 0x216aac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x216AACu;
    {
        const bool branch_taken_0x216aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216aac) {
            ctx->pc = 0x216B2Cu;
            goto label_216b2c;
        }
    }
    ctx->pc = 0x216AB4u;
label_216ab4:
    // 0x216ab4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216AB4u;
    SET_GPR_U32(ctx, 31, 0x216ABCu);
    ctx->pc = 0x216AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AB4u;
    // 0x216ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216AB4u, 0x216ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216ABCu;
label_216abc:
    // 0x216abc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216ac0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x216ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216acc: 0x8c6515c4  lw          $a1, 0x15C4($v1)
    ctx->pc = 0x216accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5572)));
    // 0x216ad0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216ad4: 0x8c6615c8  lw          $a2, 0x15C8($v1)
    ctx->pc = 0x216ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5576)));
    // 0x216ad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x216ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216adc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x216adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216ae0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216AE0u;
    SET_GPR_U32(ctx, 31, 0x216AE8u);
    ctx->pc = 0x216AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AE0u;
    // 0x216ae4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216AE0u, 0x216AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AE8u;
label_216ae8:
    // 0x216ae8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216af0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216af4:
    // 0x216af4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216AF4u;
    SET_GPR_U32(ctx, 31, 0x216AFCu);
    ctx->pc = 0x216AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AF4u;
    // 0x216af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216AF4u, 0x216AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AFCu;
label_216afc:
    // 0x216afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216AFCu;
    {
        const bool branch_taken_0x216afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216afc) {
            ctx->pc = 0x216B0Cu;
            goto label_216b0c;
        }
    }
    ctx->pc = 0x216B04u;
    // 0x216b04: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x216B04u;
    SET_GPR_U32(ctx, 31, 0x216B0Cu);
    ctx->pc = 0x216B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B04u;
    // 0x216b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x216B04u, 0x216B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B0Cu;
label_216b0c:
    // 0x216b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216b10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b18: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216B18u;
    SET_GPR_U32(ctx, 31, 0x216B20u);
    ctx->pc = 0x216B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B18u;
    // 0x216b1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216B18u, 0x216B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B20u;
label_216b20:
    // 0x216b20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216b20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216b24: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216B24u;
    SET_GPR_U32(ctx, 31, 0x216B2Cu);
    ctx->pc = 0x216B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B24u;
    // 0x216b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216B24u, 0x216B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B2Cu;
label_216b2c:
    // 0x216b2c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x216B2Cu;
    SET_GPR_U32(ctx, 31, 0x216B34u);
    ctx->pc = 0x216B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B2Cu;
    // 0x216b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x216B2Cu, 0x216B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B34u;
label_216b34:
    // 0x216b34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x216b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216b38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x216b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x216b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216b40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x216b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b48: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x216b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x216b4c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x216b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x216b50: 0x3e00008  jr          $ra
    ctx->pc = 0x216B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B50u;
        // 0x216b54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B58u;
}
