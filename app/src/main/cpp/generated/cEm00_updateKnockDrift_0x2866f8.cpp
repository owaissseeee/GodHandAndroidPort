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

// Function: cEm00_updateKnockDrift
// Address: 0x2866f8 - 0x286aa8
void cEm00_updateKnockDrift_0x2866f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_updateKnockDrift_0x2866f8");
#endif

    switch (ctx->pc) {
        case 0x286758u: goto label_286758;
        case 0x286770u: goto label_286770;
        case 0x2867ecu: goto label_2867ec;
        case 0x286884u: goto label_286884;
        case 0x28688cu: goto label_28688c;
        case 0x286894u: goto label_286894;
        case 0x2868dcu: goto label_2868dc;
        case 0x286930u: goto label_286930;
        case 0x286974u: goto label_286974;
        case 0x2869a8u: goto label_2869a8;
        case 0x2869d4u: goto label_2869d4;
        case 0x2869e8u: goto label_2869e8;
        case 0x286a5cu: goto label_286a5c;
        case 0x286a68u: goto label_286a68;
        case 0x286a84u: goto label_286a84;
        case 0x286a8cu: goto label_286a8c;
        default: break;
    }

    ctx->pc = 0x2866f8u;

    // 0x2866f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2866f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2866fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2866fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x286700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x286704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x286708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28670c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286714: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x286714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x286718: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x286718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28671c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x28671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x286720: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x286720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x286724: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x286724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x286728: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28672c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x286730: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x286730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286734: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x286734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x286738: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x28673c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x28673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286740: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x286748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28674c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28674cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286750: 0xc0a4404  jal         func_291010
    ctx->pc = 0x286750u;
    SET_GPR_U32(ctx, 31, 0x286758u);
    ctx->pc = 0x286754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286750u;
    // 0x286754: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x286750u, 0x286758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286758u;
label_286758:
    // 0x286758: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28675c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x28675cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x286760: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x286760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x286764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286768: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x286768u;
    SET_GPR_U32(ctx, 31, 0x286770u);
    ctx->pc = 0x28676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286768u;
    // 0x28676c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x286768u, 0x286770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286770u;
label_286770:
    // 0x286770: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x286770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x286774: 0x1070002a  beq         $v1, $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x286774u;
    {
        const bool branch_taken_0x286774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x286778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286774u;
        // 0x286778: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286774) {
            ctx->pc = 0x286820u;
            goto label_286820;
        }
    }
    ctx->pc = 0x28677Cu;
    // 0x28677c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28677Cu;
    {
        const bool branch_taken_0x28677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28677c) {
            ctx->pc = 0x286780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28677Cu;
            // 0x286780: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286794u;
            goto label_286794;
        }
    }
    ctx->pc = 0x286784u;
    // 0x286784: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x286784u;
    {
        const bool branch_taken_0x286784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286784u;
        // 0x286788: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286784) {
            ctx->pc = 0x2867ACu;
            goto label_2867ac;
        }
    }
    ctx->pc = 0x28678Cu;
    // 0x28678c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x28678Cu;
    {
        const bool branch_taken_0x28678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28678Cu;
        // 0x286790: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28678c) {
            ctx->pc = 0x286A94u;
            goto label_286a94;
        }
    }
    ctx->pc = 0x286794u;
label_286794:
    // 0x286794: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x286794u;
    {
        const bool branch_taken_0x286794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286794u;
        // 0x286798: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286794) {
            ctx->pc = 0x28697Cu;
            goto label_28697c;
        }
    }
    ctx->pc = 0x28679Cu;
    // 0x28679c: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x28679Cu;
    {
        const bool branch_taken_0x28679c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2867A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28679Cu;
        // 0x2867a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28679c) {
            ctx->pc = 0x2869CCu;
            goto label_2869cc;
        }
    }
    ctx->pc = 0x2867A4u;
    // 0x2867a4: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2867A4u;
    {
        const bool branch_taken_0x2867a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867a4) {
            ctx->pc = 0x286A94u;
            goto label_286a94;
        }
    }
    ctx->pc = 0x2867ACu;
label_2867ac:
    // 0x2867ac: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x2867acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x2867b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2867b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2867b4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2867b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2867b8: 0x8e2a0304  lw          $t2, 0x304($s1)
    ctx->pc = 0x2867b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2867bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2867bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2867c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2867c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2867c4: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x2867c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x2867c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2867c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2867ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2867d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2867d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867d4: 0x8d450028  lw          $a1, 0x28($t2)
    ctx->pc = 0x2867d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x2867d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2867d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867dc: 0x8d46002c  lw          $a2, 0x2C($t2)
    ctx->pc = 0x2867dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2867e0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2867e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2867e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2867E4u;
    SET_GPR_U32(ctx, 31, 0x2867ECu);
    ctx->pc = 0x2867E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2867E4u;
    // 0x2867e8: 0xca3021  addu        $a2, $a2, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2867E4u, 0x2867ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867ECu;
label_2867ec:
    // 0x2867ec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2867ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2867f0: 0x262305c0  addiu       $v1, $s1, 0x5C0
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x2867f4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2867F4u;
    {
        const bool branch_taken_0x2867f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2867f4) {
            ctx->pc = 0x2867F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2867F4u;
            // 0x2867f8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286818u;
            goto label_286818;
        }
    }
    ctx->pc = 0x2867FCu;
    // 0x2867fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286800: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x286800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x286804: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x286804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286808: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x286808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28680c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286810: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x286810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x286814: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x286814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_286818:
    // 0x286818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28681c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x28681cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_286820:
    // 0x286820: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x286824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286828: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x28682c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28682cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x286830: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x286830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x286834: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x286834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x286838: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x286838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28683c: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x28683cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x286840: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x286840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x286844: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x286844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x286848: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28684c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x28684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286850: 0xc62105c0  lwc1        $f1, 0x5C0($s1)
    ctx->pc = 0x286850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286854: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x286854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x286858: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28685c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28685cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286860: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x286860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x286864: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x286864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x286868: 0xc62105c8  lwc1        $f1, 0x5C8($s1)
    ctx->pc = 0x286868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28686c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286870: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x286874: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x286874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x286878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28687c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28687Cu;
    SET_GPR_U32(ctx, 31, 0x286884u);
    ctx->pc = 0x286880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28687Cu;
    // 0x286880: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28687Cu, 0x286884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286884u;
label_286884:
    // 0x286884: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286884u;
    SET_GPR_U32(ctx, 31, 0x28688Cu);
    ctx->pc = 0x286888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286884u;
    // 0x286888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286884u, 0x28688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28688Cu;
label_28688c:
    // 0x28688c: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x28688Cu;
    SET_GPR_U32(ctx, 31, 0x286894u);
    ctx->pc = 0x286890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28688Cu;
    // 0x286890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x28688Cu, 0x286894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286894u;
label_286894:
    // 0x286894: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x286898: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x286898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x28689c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x28689Cu;
    {
        const bool branch_taken_0x28689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2868A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28689Cu;
        // 0x2868a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28689c) {
            ctx->pc = 0x286A90u;
            goto label_286a90;
        }
    }
    ctx->pc = 0x2868A4u;
    // 0x2868a4: 0x92231560  lbu         $v1, 0x1560($s1)
    ctx->pc = 0x2868a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5472)));
    // 0x2868a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2868ac: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x2868B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868ACu;
            // 0x2868b0: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2868FCu;
            goto label_2868fc;
        }
    }
    ctx->pc = 0x2868B4u;
    // 0x2868b4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2868b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2868b8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2868bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2868bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2868c0: 0x0  nop
    ctx->pc = 0x2868c0u;
    // NOP
    // 0x2868c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2868c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2868c8: 0x0  nop
    ctx->pc = 0x2868c8u;
    // NOP
    // 0x2868cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2868CCu;
    {
        const bool branch_taken_0x2868cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2868cc) {
            ctx->pc = 0x2868E8u;
            goto label_2868e8;
        }
    }
    ctx->pc = 0x2868D4u;
    // 0x2868d4: 0xc0a24ca  jal         func_289328
    ctx->pc = 0x2868D4u;
    SET_GPR_U32(ctx, 31, 0x2868DCu);
    ctx->pc = 0x2868D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2868D4u;
    // 0x2868d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289328u, 0x2868D4u, 0x2868DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868DCu;
label_2868dc:
    // 0x2868dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2868DCu;
    {
        const bool branch_taken_0x2868dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868DCu;
        // 0x2868e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868dc) {
            ctx->pc = 0x2868E8u;
            goto label_2868e8;
        }
    }
    ctx->pc = 0x2868E4u;
    // 0x2868e4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2868e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2868e8:
    // 0x2868e8: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2868E8u;
    {
        const bool branch_taken_0x2868e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2868e8) {
            ctx->pc = 0x2868ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2868E8u;
            // 0x2868ec: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2868FCu;
            goto label_2868fc;
        }
    }
    ctx->pc = 0x2868F0u;
    // 0x2868f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2868f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2868f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2868f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2868f8: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x2868f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_2868fc:
    // 0x2868fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2868fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x286900: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x286900u;
    {
        const bool branch_taken_0x286900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286900u;
        // 0x286904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286900) {
            ctx->pc = 0x28690Cu;
            goto label_28690c;
        }
    }
    ctx->pc = 0x286908u;
    // 0x286908: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x286908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_28690c:
    // 0x28690c: 0xc62115bc  lwc1        $f1, 0x15BC($s1)
    ctx->pc = 0x28690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286914: 0x0  nop
    ctx->pc = 0x286914u;
    // NOP
    // 0x286918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x286918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28691c: 0x0  nop
    ctx->pc = 0x28691cu;
    // NOP
    // 0x286920: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x286920u;
    {
        const bool branch_taken_0x286920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286920u;
        // 0x286924: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286920) {
            ctx->pc = 0x286A90u;
            goto label_286a90;
        }
    }
    ctx->pc = 0x286928u;
    // 0x286928: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x286928u;
    SET_GPR_U32(ctx, 31, 0x286930u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x286928u, 0x286930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286930u;
label_286930:
    // 0x286930: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x286930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x286934: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x286934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286938: 0x0  nop
    ctx->pc = 0x286938u;
    // NOP
    // 0x28693c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28693cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286944: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x286944u;
    {
        const bool branch_taken_0x286944 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286944u;
        // 0x286948: 0xe62015bc  swc1        $f0, 0x15BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286944) {
            ctx->pc = 0x286A8Cu;
            goto label_286a8c;
        }
    }
    ctx->pc = 0x28694Cu;
    // 0x28694c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28694cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x286950: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x286950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286954: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x286954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x286958: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28695c: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x28695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x286960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x286968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28696c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28696Cu;
    SET_GPR_U32(ctx, 31, 0x286974u);
    ctx->pc = 0x286970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28696Cu;
    // 0x286970: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28696Cu, 0x286974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286974u;
label_286974:
    // 0x286974: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x286974u;
    {
        const bool branch_taken_0x286974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286974u;
        // 0x286978: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286974) {
            ctx->pc = 0x286A90u;
            goto label_286a90;
        }
    }
    ctx->pc = 0x28697Cu;
label_28697c:
    // 0x28697c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x286980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286984: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286988: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28698c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x28698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x286990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286994: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x286998: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28699c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2869a0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2869A0u;
    SET_GPR_U32(ctx, 31, 0x2869A8u);
    ctx->pc = 0x2869A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869A0u;
    // 0x2869a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2869A0u, 0x2869A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869A8u;
label_2869a8:
    // 0x2869a8: 0x8e2415b0  lw          $a0, 0x15B0($s1)
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x2869ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2869acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2869b0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2869b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2869b4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2869b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2869b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2869bc: 0xa2201560  sb          $zero, 0x1560($s1)
    ctx->pc = 0x2869bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5472), (uint8_t)GPR_U32(ctx, 0));
    // 0x2869c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2869c4: 0xae2415b0  sw          $a0, 0x15B0($s1)
    ctx->pc = 0x2869c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 4));
    // 0x2869c8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2869c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2869cc:
    // 0x2869cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2869CCu;
    SET_GPR_U32(ctx, 31, 0x2869D4u);
    ctx->pc = 0x2869D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869CCu;
    // 0x2869d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2869CCu, 0x2869D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869D4u;
label_2869d4:
    // 0x2869d4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2869D4u;
    {
        const bool branch_taken_0x2869d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869D4u;
        // 0x2869d8: 0x26301590  addiu       $s0, $s1, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869d4) {
            ctx->pc = 0x286A7Cu;
            goto label_286a7c;
        }
    }
    ctx->pc = 0x2869DCu;
    // 0x2869dc: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2869dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2869e0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2869E0u;
    SET_GPR_U32(ctx, 31, 0x2869E8u);
    ctx->pc = 0x2869E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869E0u;
    // 0x2869e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2869E0u, 0x2869E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869E8u;
label_2869e8:
    // 0x2869e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2869ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2869ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2869f0: 0x0  nop
    ctx->pc = 0x2869f0u;
    // NOP
    // 0x2869f4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2869f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2869f8: 0x0  nop
    ctx->pc = 0x2869f8u;
    // NOP
    // 0x2869fc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2869FCu;
    {
        const bool branch_taken_0x2869fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869FCu;
        // 0x286a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869fc) {
            ctx->pc = 0x286A50u;
            goto label_286a50;
        }
    }
    ctx->pc = 0x286A04u;
    // 0x286a04: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x286a08: 0xc6221594  lwc1        $f2, 0x1594($s1)
    ctx->pc = 0x286a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286a0c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x286a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286a10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x286a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286a14: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x286a14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x286a18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x286a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286a1c: 0x0  nop
    ctx->pc = 0x286a1cu;
    // NOP
    // 0x286a20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x286A20u;
    {
        const bool branch_taken_0x286a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A20u;
        // 0x286a24: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a20) {
            ctx->pc = 0x286A2Cu;
            goto label_286a2c;
        }
    }
    ctx->pc = 0x286A28u;
    // 0x286a28: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x286a28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_286a2c:
    // 0x286a2c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x286a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286a30: 0x0  nop
    ctx->pc = 0x286a30u;
    // NOP
    // 0x286a34: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x286A34u;
    {
        const bool branch_taken_0x286a34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286a34) {
            ctx->pc = 0x286A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286A34u;
            // 0x286a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A54u;
            goto label_286a54;
        }
    }
    ctx->pc = 0x286A3Cu;
    // 0x286a3c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x286a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a40: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x286a40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a44: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x286a44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x286A48u;
    {
        const bool branch_taken_0x286a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A48u;
        // 0x286a4c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a48) {
            ctx->pc = 0x286A8Cu;
            goto label_286a8c;
        }
    }
    ctx->pc = 0x286A50u;
label_286a50:
    // 0x286a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286a54:
    // 0x286a54: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x286A54u;
    SET_GPR_U32(ctx, 31, 0x286A5Cu);
    ctx->pc = 0x286A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A54u;
    // 0x286a58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x286A54u, 0x286A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A5Cu;
label_286a5c:
    // 0x286a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a60: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x286A60u;
    SET_GPR_U32(ctx, 31, 0x286A68u);
    ctx->pc = 0x286A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A60u;
    // 0x286a64: 0x26251570  addiu       $a1, $s1, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x286A60u, 0x286A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A68u;
label_286a68:
    // 0x286a68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286a6c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x286a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a70: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x286a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x286a74: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x286a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a78: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x286a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_286a7c:
    // 0x286a7c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286A7Cu;
    SET_GPR_U32(ctx, 31, 0x286A84u);
    ctx->pc = 0x286A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A7Cu;
    // 0x286a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286A7Cu, 0x286A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A84u;
label_286a84:
    // 0x286a84: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286A84u;
    SET_GPR_U32(ctx, 31, 0x286A8Cu);
    ctx->pc = 0x286A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A84u;
    // 0x286a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286A84u, 0x286A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A8Cu;
label_286a8c:
    // 0x286a8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x286a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286a90:
    // 0x286a90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x286a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286a94:
    // 0x286a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x286A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A9Cu;
        // 0x286aa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286AA4u;
    // 0x286aa4: 0x0  nop
    ctx->pc = 0x286aa4u;
    // NOP
    ctx->pc = 0x286aa8u;
}
