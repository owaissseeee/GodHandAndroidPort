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

// Function: cCoreSave_translateSaveItem
// Address: 0x1fb4d8 - 0x1fb6c8
void cCoreSave_translateSaveItem_0x1fb4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_translateSaveItem_0x1fb4d8");
#endif

    switch (ctx->pc) {
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb5f8u: goto label_1fb5f8;
        default: break;
    }

    ctx->pc = 0x1fb4d8u;

    // 0x1fb4d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1fb4dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fb4e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1fb4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1fb4e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fb4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1fb4e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4ec: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1fb4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1fb4f0: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x1fb4f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1fb4f4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1fb4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1fb4f8: 0x30b6ffff  andi        $s6, $a1, 0xFFFF
    ctx->pc = 0x1fb4f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1fb4fc: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1fb4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1fb500: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1fb500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb504: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1fb504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1fb508: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1fb508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1fb50c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1fb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1fb510: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1fb510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1fb514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fb514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fb518: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1fb518u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1fb51c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1fb51cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1fb520: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1FB520u;
    {
        const bool branch_taken_0x1fb520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB520u;
        // 0x1fb524: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb520) {
            ctx->pc = 0x1FB68Cu;
            goto label_1fb68c;
        }
    }
    ctx->pc = 0x1FB528u;
    // 0x1fb528: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb52c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1FB52Cu;
    {
        const bool branch_taken_0x1fb52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB52Cu;
        // 0x1fb530: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb52c) {
            ctx->pc = 0x1FB68Cu;
            goto label_1fb68c;
        }
    }
    ctx->pc = 0x1FB534u;
    // 0x1fb534: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1fb538: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fb538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fb53c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fb53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fb540: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1fb544: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fb544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fb548: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fb54c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb550: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1fb550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1fb554: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fb558: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb55c: 0x0  nop
    ctx->pc = 0x1fb55cu;
    // NOP
label_1fb560:
    // 0x1fb560: 0x138100  sll         $s0, $s3, 4
    ctx->pc = 0x1fb560u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1fb564: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1fb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fb568: 0x9443028a  lhu         $v1, 0x28A($v0)
    ctx->pc = 0x1fb568u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 650)));
    // 0x1fb56c: 0x54750044  bnel        $v1, $s5, . + 4 + (0x44 << 2)
    ctx->pc = 0x1FB56Cu;
    {
        const bool branch_taken_0x1fb56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1fb56c) {
            ctx->pc = 0x1FB570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB56Cu;
            // 0x1fb570: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB680u;
            goto label_1fb680;
        }
    }
    ctx->pc = 0x1FB574u;
    // 0x1fb574: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fb574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb578: 0xa476028a  sh          $s6, 0x28A($v1)
    ctx->pc = 0x1fb578u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 650), (uint16_t)GPR_U32(ctx, 22));
    // 0x1fb57c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb580: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fb584: 0x84430292  lh          $v1, 0x292($v0)
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 658)));
    // 0x1fb588: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fb588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb58c: 0x0  nop
    ctx->pc = 0x1fb58cu;
    // NOP
    // 0x1fb590: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fb590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fb594: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb598: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1fb598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x1fb59c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fb5a0: 0x84430294  lh          $v1, 0x294($v0)
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x1fb5a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb5a8: 0x0  nop
    ctx->pc = 0x1fb5a8u;
    // NOP
    // 0x1fb5ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb5b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb5b4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1fb5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1fb5b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fb5bc: 0x84430296  lh          $v1, 0x296($v0)
    ctx->pc = 0x1fb5bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 662)));
    // 0x1fb5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb5c4: 0x0  nop
    ctx->pc = 0x1fb5c4u;
    // NOP
    // 0x1fb5c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fb5cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1fb5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1fb5d0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1fb5d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1fb5d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1fb5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1fb5d8: 0xe7b6000c  swc1        $f22, 0xC($sp)
    ctx->pc = 0x1fb5d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1fb5dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1fb5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1fb5e0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1fb5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb5e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1fb5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1fb5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5f0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1FB5F0u;
    SET_GPR_U32(ctx, 31, 0x1FB5F8u);
    ctx->pc = 0x1FB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5F0u;
    // 0x1fb5f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1FB5F0u, 0x1FB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5F8u;
label_1fb5f8:
    // 0x1fb5f8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1fb5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fb5fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1fb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb600: 0x13b40006  beq         $sp, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB600u;
    {
        const bool branch_taken_0x1fb600 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB600u;
        // 0x1fb604: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb600) {
            ctx->pc = 0x1FB61Cu;
            goto label_1fb61c;
        }
    }
    ctx->pc = 0x1FB608u;
    // 0x1fb608: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1fb608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb60c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1fb60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb610: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1fb610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1fb614: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1fb614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1fb618: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1fb618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fb61c:
    // 0x1fb61c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb620: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1fb620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb624: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb628: 0x2463028a  addiu       $v1, $v1, 0x28A
    ctx->pc = 0x1fb628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 650));
    // 0x1fb62c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fb630: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb634: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb638: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x1fb638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb63c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb640: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1fb640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb644: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1fb644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fb648: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb64c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fb650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb654: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb658: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x1fb658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb65c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb660: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1fb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb664: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb668: 0x2463028a  addiu       $v1, $v1, 0x28A
    ctx->pc = 0x1fb668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 650));
    // 0x1fb66c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fb670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb674: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb678: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x1fb678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb67c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fb680:
    // 0x1fb680: 0x2e620080  sltiu       $v0, $s3, 0x80
    ctx->pc = 0x1fb680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fb684: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1FB684u;
    {
        const bool branch_taken_0x1fb684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb684) {
            ctx->pc = 0x1FB688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB684u;
            // 0x1fb688: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb560;
        }
    }
    ctx->pc = 0x1FB68Cu;
label_1fb68c:
    // 0x1fb68c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1fb68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fb690: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1fb690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fb694: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1fb694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fb698: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1fb698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb69c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1fb69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb6a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fb6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb6a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1fb6a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb6a8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1fb6a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb6ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fb6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb6b0: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1fb6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fb6b4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1fb6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fb6b8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1fb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fb6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6BCu;
        // 0x1fb6c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB6C4u;
    // 0x1fb6c4: 0x0  nop
    ctx->pc = 0x1fb6c4u;
    // NOP
    ctx->pc = 0x1fb6c8u;
}
