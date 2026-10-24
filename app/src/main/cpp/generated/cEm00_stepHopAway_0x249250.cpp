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

// Function: cEm00_stepHopAway
// Address: 0x249250 - 0x2495e0
void cEm00_stepHopAway_0x249250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepHopAway_0x249250");
#endif

    switch (ctx->pc) {
        case 0x2492b8u: goto label_2492b8;
        case 0x2492ecu: goto label_2492ec;
        case 0x2492f4u: goto label_2492f4;
        case 0x249318u: goto label_249318;
        case 0x249388u: goto label_249388;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493d4u: goto label_2493d4;
        case 0x2494c8u: goto label_2494c8;
        case 0x2494d4u: goto label_2494d4;
        case 0x2494e0u: goto label_2494e0;
        case 0x2494f0u: goto label_2494f0;
        case 0x24951cu: goto label_24951c;
        case 0x249568u: goto label_249568;
        case 0x249584u: goto label_249584;
        case 0x249598u: goto label_249598;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c8u: goto label_2495c8;
        default: break;
    }

    ctx->pc = 0x249250u;

    // 0x249250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x249250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x249254: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x249254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x249258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24925c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249260: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x249260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x249264: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x249264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x249268: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x249268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24926c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x24926cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249274: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x249274u;
    {
        const bool branch_taken_0x249274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249274u;
        // 0x249278: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249274) {
            ctx->pc = 0x2493B0u;
            goto label_2493b0;
        }
    }
    ctx->pc = 0x24927Cu;
    // 0x24927c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24927Cu;
    {
        const bool branch_taken_0x24927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24927c) {
            ctx->pc = 0x249280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24927Cu;
            // 0x249280: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249294u;
            goto label_249294;
        }
    }
    ctx->pc = 0x249284u;
    // 0x249284: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x249284u;
    {
        const bool branch_taken_0x249284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249284) {
            ctx->pc = 0x2492ACu;
            goto label_2492ac;
        }
    }
    ctx->pc = 0x24928Cu;
    // 0x24928c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x24928Cu;
    {
        const bool branch_taken_0x24928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24928Cu;
        // 0x249290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24928c) {
            ctx->pc = 0x2495CCu;
            goto label_2495cc;
        }
    }
    ctx->pc = 0x249294u;
label_249294:
    // 0x249294: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x249294u;
    {
        const bool branch_taken_0x249294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249294u;
        // 0x249298: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249294) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x24929Cu;
    // 0x24929c: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x24929Cu;
    {
        const bool branch_taken_0x24929c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24929c) {
            ctx->pc = 0x249590u;
            goto label_249590;
        }
    }
    ctx->pc = 0x2492A4u;
    // 0x2492a4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2492A4u;
    {
        const bool branch_taken_0x2492a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2492A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492A4u;
        // 0x2492a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492a4) {
            ctx->pc = 0x2495CCu;
            goto label_2495cc;
        }
    }
    ctx->pc = 0x2492ACu;
label_2492ac:
    // 0x2492ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2492acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2492b0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2492B0u;
    SET_GPR_U32(ctx, 31, 0x2492B8u);
    ctx->pc = 0x2492B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492B0u;
    // 0x2492b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2492B0u, 0x2492B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492B8u;
label_2492b8:
    // 0x2492b8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2492b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2492bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2492bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2492c0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2492c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2492c4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2492c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2492c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2492c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2492ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492d0: 0x8c651d80  lw          $a1, 0x1D80($v1)
    ctx->pc = 0x2492d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7552)));
    // 0x2492d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2492d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2492d8: 0x8c661d84  lw          $a2, 0x1D84($v1)
    ctx->pc = 0x2492d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7556)));
    // 0x2492dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2492dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2492e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2492E4u;
    SET_GPR_U32(ctx, 31, 0x2492ECu);
    ctx->pc = 0x2492E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492E4u;
    // 0x2492e8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2492E4u, 0x2492ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492ECu;
label_2492ec:
    // 0x2492ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2492ECu;
    SET_GPR_U32(ctx, 31, 0x2492F4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2492ECu, 0x2492F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492F4u;
label_2492f4:
    // 0x2492f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2492f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2492f8: 0x3c01402e  lui         $at, 0x402E
    ctx->pc = 0x2492f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16430 << 16));
    // 0x2492fc: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x2492fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
    // 0x249300: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249304: 0x0  nop
    ctx->pc = 0x249304u;
    // NOP
    // 0x249308: 0xe6010584  swc1        $f1, 0x584($s0)
    ctx->pc = 0x249308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
    // 0x24930c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24930cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x249310: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x249310u;
    SET_GPR_U32(ctx, 31, 0x249318u);
    ctx->pc = 0x249314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249310u;
    // 0x249314: 0xe6000580  swc1        $f0, 0x580($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x249310u, 0x249318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249318u;
label_249318:
    // 0x249318: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x249318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24931c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x24931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x249320: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249324: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x249324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x249328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24932c: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x249330: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x249334: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x249334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x249338: 0xe6020600  swc1        $f2, 0x600($s0)
    ctx->pc = 0x249338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24933c: 0xe6010604  swc1        $f1, 0x604($s0)
    ctx->pc = 0x24933cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x249340: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249340u;
    {
        const bool branch_taken_0x249340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249340u;
        // 0x249344: 0xe6000588  swc1        $f0, 0x588($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249340) {
            ctx->pc = 0x24936Cu;
            goto label_24936c;
        }
    }
    ctx->pc = 0x249348u;
    // 0x249348: 0x28620222  slti        $v0, $v1, 0x222
    ctx->pc = 0x249348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)546) ? 1 : 0);
    // 0x24934c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24934Cu;
    {
        const bool branch_taken_0x24934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24934Cu;
        // 0x249350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24934c) {
            ctx->pc = 0x249360u;
            goto label_249360;
        }
    }
    ctx->pc = 0x249354u;
    // 0x249354: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x249354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x249358: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249358u;
    {
        const bool branch_taken_0x249358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249358u;
        // 0x24935c: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249358) {
            ctx->pc = 0x249390u;
            goto label_249390;
        }
    }
    ctx->pc = 0x249360u;
label_249360:
    // 0x249360: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x249364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249364u;
    {
        const bool branch_taken_0x249364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249364u;
        // 0x249368: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249364) {
            ctx->pc = 0x249378u;
            goto label_249378;
        }
    }
    ctx->pc = 0x24936Cu;
label_24936c:
    // 0x24936c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249370: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x249374: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_249378:
    // 0x249378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24937c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249380: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x249380u;
    SET_GPR_U32(ctx, 31, 0x249388u);
    ctx->pc = 0x249384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249380u;
    // 0x249384: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x249380u, 0x249388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249388u;
label_249388:
    // 0x249388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249388u;
    {
        const bool branch_taken_0x249388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249388u;
        // 0x24938c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249388) {
            ctx->pc = 0x2493A8u;
            goto label_2493a8;
        }
    }
    ctx->pc = 0x249390u;
label_249390:
    // 0x249390: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x249390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x249394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249398: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x249398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24939c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x24939Cu;
    SET_GPR_U32(ctx, 31, 0x2493A4u);
    ctx->pc = 0x2493A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24939Cu;
    // 0x2493a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x24939Cu, 0x2493A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493A4u;
label_2493a4:
    // 0x2493a4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2493a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2493a8:
    // 0x2493a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2493ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2493acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2493b0:
    // 0x2493b0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2493b4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2493b8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2493bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2493bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2493c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2493c4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2493c8: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x2493c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x2493cc: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2493CCu;
    SET_GPR_U32(ctx, 31, 0x2493D4u);
    ctx->pc = 0x2493D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493CCu;
    // 0x2493d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2493CCu, 0x2493D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493D4u;
label_2493d4:
    // 0x2493d4: 0xc6020604  lwc1        $f2, 0x604($s0)
    ctx->pc = 0x2493d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2493d8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2493d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2493dc: 0x0  nop
    ctx->pc = 0x2493dcu;
    // NOP
    // 0x2493e0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2493e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2493e4: 0x0  nop
    ctx->pc = 0x2493e4u;
    // NOP
    // 0x2493e8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2493E8u;
    {
        const bool branch_taken_0x2493e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2493e8) {
            ctx->pc = 0x2493ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493E8u;
            // 0x2493ec: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24940Cu;
            goto label_24940c;
        }
    }
    ctx->pc = 0x2493F0u;
    // 0x2493f0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2493f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2493f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2493f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2493f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2493f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2493fc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2493fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x249400: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x249400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x249404: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x249404u;
    {
        const bool branch_taken_0x249404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249404u;
        // 0x249408: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249404) {
            ctx->pc = 0x2494B8u;
            goto label_2494b8;
        }
    }
    ctx->pc = 0x24940Cu;
label_24940c:
    // 0x24940c: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x249410: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x249410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x249414: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x249414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x249418: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x249418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24941c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x24941cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249420: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x249420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x249424: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x249424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x249428: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24942c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24942cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249430: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x249430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x249434: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x249434u;
    {
        const bool branch_taken_0x249434 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x249438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249434u;
        // 0x249438: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249434) {
            ctx->pc = 0x249450u;
            goto label_249450;
        }
    }
    ctx->pc = 0x24943Cu;
    // 0x24943c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x24943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249440: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x249440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249444: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x249444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x249448: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x249448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24944c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24944cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_249450:
    // 0x249450: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x249450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249454: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x249458: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24945c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24945cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249460: 0x0  nop
    ctx->pc = 0x249460u;
    // NOP
    // 0x249464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x249464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x249468: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x249468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24946c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x24946cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x249470: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x249470u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x249474: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x249474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x249478: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x249478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24947c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249480: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x249480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249484: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x249484u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249488: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x249488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24948c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24948cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x249490: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x249490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249494: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x249494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249498: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x249498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24949c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x24949cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2494a0: 0x0  nop
    ctx->pc = 0x2494a0u;
    // NOP
    // 0x2494a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2494A4u;
    {
        const bool branch_taken_0x2494a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2494A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A4u;
        // 0x2494a8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494a4) {
            ctx->pc = 0x2494B8u;
            goto label_2494b8;
        }
    }
    ctx->pc = 0x2494ACu;
    // 0x2494ac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2494acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2494b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2494b4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2494b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2494b8:
    // 0x2494b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2494b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2494bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2494bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2494c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2494C0u;
    SET_GPR_U32(ctx, 31, 0x2494C8u);
    ctx->pc = 0x2494C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494C0u;
    // 0x2494c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2494C0u, 0x2494C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494C8u;
label_2494c8:
    // 0x2494c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2494c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494cc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2494CCu;
    SET_GPR_U32(ctx, 31, 0x2494D4u);
    ctx->pc = 0x2494D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494CCu;
    // 0x2494d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2494CCu, 0x2494D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494D4u;
label_2494d4:
    // 0x2494d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2494d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494d8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2494D8u;
    SET_GPR_U32(ctx, 31, 0x2494E0u);
    ctx->pc = 0x2494DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494D8u;
    // 0x2494dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2494D8u, 0x2494E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494E0u;
label_2494e0:
    // 0x2494e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2494E0u;
    {
        const bool branch_taken_0x2494e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494E0u;
        // 0x2494e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494e0) {
            ctx->pc = 0x2495CCu;
            goto label_2495cc;
        }
    }
    ctx->pc = 0x2494E8u;
label_2494e8:
    // 0x2494e8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2494E8u;
    SET_GPR_U32(ctx, 31, 0x2494F0u);
    ctx->pc = 0x2494ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494E8u;
    // 0x2494ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2494E8u, 0x2494F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494F0u;
label_2494f0:
    // 0x2494f0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2494f4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2494f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2494f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2494f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2494fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2494fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249500: 0x8c651d88  lw          $a1, 0x1D88($v1)
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7560)));
    // 0x249504: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x249504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249508: 0x8c661d8c  lw          $a2, 0x1D8C($v1)
    ctx->pc = 0x249508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7564)));
    // 0x24950c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24950cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249510: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249514: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x249514u;
    SET_GPR_U32(ctx, 31, 0x24951Cu);
    ctx->pc = 0x249518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249514u;
    // 0x249518: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x249514u, 0x24951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24951Cu;
label_24951c:
    // 0x24951c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x249520: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x249520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x249524: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249524u;
    {
        const bool branch_taken_0x249524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249524u;
        // 0x249528: 0x28620222  slti        $v0, $v1, 0x222 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)546) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249524) {
            ctx->pc = 0x24954Cu;
            goto label_24954c;
        }
    }
    ctx->pc = 0x24952Cu;
    // 0x24952c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24952Cu;
    {
        const bool branch_taken_0x24952c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24952Cu;
        // 0x249530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24952c) {
            ctx->pc = 0x249540u;
            goto label_249540;
        }
    }
    ctx->pc = 0x249534u;
    // 0x249534: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x249534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x249538: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249538u;
    {
        const bool branch_taken_0x249538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249538u;
        // 0x24953c: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249538) {
            ctx->pc = 0x249570u;
            goto label_249570;
        }
    }
    ctx->pc = 0x249540u;
label_249540:
    // 0x249540: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x249544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249544u;
    {
        const bool branch_taken_0x249544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249544u;
        // 0x249548: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249544) {
            ctx->pc = 0x249558u;
            goto label_249558;
        }
    }
    ctx->pc = 0x24954Cu;
label_24954c:
    // 0x24954c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249550: 0x240500c2  addiu       $a1, $zero, 0xC2
    ctx->pc = 0x249550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x249554: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x249554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_249558:
    // 0x249558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24955c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249560: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x249560u;
    SET_GPR_U32(ctx, 31, 0x249568u);
    ctx->pc = 0x249564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249560u;
    // 0x249564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x249560u, 0x249568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249568u;
label_249568:
    // 0x249568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249568u;
    {
        const bool branch_taken_0x249568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249568u;
        // 0x24956c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249568) {
            ctx->pc = 0x249588u;
            goto label_249588;
        }
    }
    ctx->pc = 0x249570u;
label_249570:
    // 0x249570: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x249570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x249574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249578: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24957c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x24957Cu;
    SET_GPR_U32(ctx, 31, 0x249584u);
    ctx->pc = 0x249580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24957Cu;
    // 0x249580: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x24957Cu, 0x249584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249584u;
label_249584:
    // 0x249584: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x249584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_249588:
    // 0x249588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24958c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24958cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_249590:
    // 0x249590: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249590u;
    SET_GPR_U32(ctx, 31, 0x249598u);
    ctx->pc = 0x249594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249590u;
    // 0x249594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249590u, 0x249598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249598u;
label_249598:
    // 0x249598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249598u;
    {
        const bool branch_taken_0x249598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249598) {
            ctx->pc = 0x2495A8u;
            goto label_2495a8;
        }
    }
    ctx->pc = 0x2495A0u;
    // 0x2495a0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2495A0u;
    SET_GPR_U32(ctx, 31, 0x2495A8u);
    ctx->pc = 0x2495A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495A0u;
    // 0x2495a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2495A0u, 0x2495A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495A8u;
label_2495a8:
    // 0x2495a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2495a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2495ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2495acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2495b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2495b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2495B4u;
    SET_GPR_U32(ctx, 31, 0x2495BCu);
    ctx->pc = 0x2495B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495B4u;
    // 0x2495b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2495B4u, 0x2495BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495BCu;
label_2495bc:
    // 0x2495bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2495bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2495C0u;
    SET_GPR_U32(ctx, 31, 0x2495C8u);
    ctx->pc = 0x2495C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495C0u;
    // 0x2495c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2495C0u, 0x2495C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495C8u;
label_2495c8:
    // 0x2495c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2495c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2495cc:
    // 0x2495cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2495ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2495d0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2495d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2495d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2495d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2495d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2495D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2495DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495D8u;
        // 0x2495dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2495D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2495E0u;
}
