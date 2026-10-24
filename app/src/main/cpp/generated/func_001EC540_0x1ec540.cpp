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

// Function: func_001EC540
// Address: 0x1ec540 - 0x1ec820
void func_001EC540_0x1ec540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC540_0x1ec540");
#endif

    switch (ctx->pc) {
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec658u: goto label_1ec658;
        case 0x1ec680u: goto label_1ec680;
        case 0x1ec6b0u: goto label_1ec6b0;
        case 0x1ec7f8u: goto label_1ec7f8;
        default: break;
    }

    ctx->pc = 0x1ec540u;

    // 0x1ec540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ec544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ec544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec548: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ec54c: 0x0  nop
    ctx->pc = 0x1ec54cu;
    // NOP
label_1ec550:
    // 0x1ec550: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ec554: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ec558: 0x0  nop
    ctx->pc = 0x1ec558u;
    // NOP
    // 0x1ec55c: 0x0  nop
    ctx->pc = 0x1ec55cu;
    // NOP
    // 0x1ec560: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EC560u;
    {
        const bool branch_taken_0x1ec560 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1EC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC560u;
        // 0x1ec564: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec560) {
            ctx->pc = 0x1EC550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec550;
        }
    }
    ctx->pc = 0x1EC568u;
    // 0x1ec568: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x1ec568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1ec56c: 0x248f019c  addiu       $t7, $a0, 0x19C
    ctx->pc = 0x1ec56cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 412));
    // 0x1ec570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec574: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ec574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ec578: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ec578u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec57c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ec580: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ec580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ec584: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ec584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec588: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec58c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1ec590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ec590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec594: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ec594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ec598:
    // 0x1ec598: 0x9ca20030  lwu         $v0, 0x30($a1)
    ctx->pc = 0x1ec598u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ec59c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec5a0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EC5A0u;
    {
        const bool branch_taken_0x1ec5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5a0) {
            ctx->pc = 0x1EC5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC5A0u;
            // 0x1ec5a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC63Cu;
            goto label_1ec63c;
        }
    }
    ctx->pc = 0x1EC5A8u;
    // 0x1ec5a8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1ec5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ec5ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ec5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec5b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC5B0u;
    {
        const bool branch_taken_0x1ec5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5B0u;
        // 0x1ec5b4: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5b0) {
            ctx->pc = 0x1EC5E0u;
            goto label_1ec5e0;
        }
    }
    ctx->pc = 0x1EC5B8u;
    // 0x1ec5b8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ec5bc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC5BCu;
    {
        const bool branch_taken_0x1ec5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5BCu;
        // 0x1ec5c0: 0xc500e198  lwc1        $f0, -0x1E68($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5bc) {
            ctx->pc = 0x1EC60Cu;
            goto label_1ec60c;
        }
    }
    ctx->pc = 0x1EC5C4u;
    // 0x1ec5c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec5c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec5cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ec5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec5d0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec5d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ec5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec5d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC5D8u;
    {
        const bool branch_taken_0x1ec5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5D8u;
        // 0x1ec5dc: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5d8) {
            ctx->pc = 0x1EC608u;
            goto label_1ec608;
        }
    }
    ctx->pc = 0x1EC5E0u;
label_1ec5e0:
    // 0x1ec5e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1ec5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1ec5e4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1ec5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1ec5e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ec5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ec5ec: 0xe4e4000c  swc1        $f4, 0xC($a3)
    ctx->pc = 0x1ec5ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1ec5f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec5f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1ec5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec5f8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1ec5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec5fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec600: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec604: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1ec604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ec608:
    // 0x1ec608: 0xc500e198  lwc1        $f0, -0x1E68($t0)
    ctx->pc = 0x1ec608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec60c:
    // 0x1ec60c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1ec60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec610: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1ec610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1ec614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec618: 0x0  nop
    ctx->pc = 0x1ec618u;
    // NOP
    // 0x1ec61c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC61Cu;
    {
        const bool branch_taken_0x1ec61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC61Cu;
        // 0x1ec620: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec61c) {
            ctx->pc = 0x1EC63Cu;
            goto label_1ec63c;
        }
    }
    ctx->pc = 0x1EC624u;
    // 0x1ec624: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1ec624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1ec628: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ec628u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1ec62c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ec62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ec630: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1ec630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1ec634: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ec634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ec638: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1ec638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_1ec63c:
    // 0x1ec63c: 0x4c1ffd6  bgez        $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1EC63Cu;
    {
        const bool branch_taken_0x1ec63c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1EC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC63Cu;
        // 0x1ec640: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec63c) {
            ctx->pc = 0x1EC598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec598;
        }
    }
    ctx->pc = 0x1EC644u;
    // 0x1ec644: 0x2562ffff  addiu       $v0, $t3, -0x1
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1ec648: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1EC648u;
    {
        const bool branch_taken_0x1ec648 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC648u;
        // 0x1ec64c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec648) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC650u;
    // 0x1ec650: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1ec650u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec654: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ec658:
    // 0x1ec658: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x1ec658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1ec65c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1EC65Cu;
    {
        const bool branch_taken_0x1ec65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC65Cu;
        // 0x1ec660: 0x60602d  daddu       $t4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec65c) {
            ctx->pc = 0x1EC7D8u;
            goto label_1ec7d8;
        }
    }
    ctx->pc = 0x1EC664u;
    // 0x1ec664: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec66c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ec66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec670: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1ec670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ec674: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1ec674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ec678: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x1ec678u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x1ec67c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ec67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ec680:
    // 0x1ec680: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1EC680u;
    {
        const bool branch_taken_0x1ec680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC680u;
        // 0x1ec684: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec680) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC688u;
    // 0x1ec688: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ec688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec68c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ec690: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec694: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1EC694u;
    {
        const bool branch_taken_0x1ec694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC694u;
        // 0x1ec698: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec694) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC69Cu;
    // 0x1ec69c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ec69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec6a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ec6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6a8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1ec6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec6ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ec6b0:
    // 0x1ec6b0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1ec6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ec6b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ec6b8: 0x0  nop
    ctx->pc = 0x1ec6b8u;
    // NOP
    // 0x1ec6bc: 0x0  nop
    ctx->pc = 0x1ec6bcu;
    // NOP
    // 0x1ec6c0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EC6C0u;
    {
        const bool branch_taken_0x1ec6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6C0u;
        // 0x1ec6c4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6c0) {
            ctx->pc = 0x1EC6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec6b0;
        }
    }
    ctx->pc = 0x1EC6C8u;
    // 0x1ec6c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ec6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec6cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec6d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC6D0u;
    {
        const bool branch_taken_0x1ec6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec6d0) {
            ctx->pc = 0x1EC6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC6D0u;
            // 0x1ec6d4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC700u;
            goto label_1ec700;
        }
    }
    ctx->pc = 0x1EC6D8u;
    // 0x1ec6d8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ec6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ec6dc: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC6DCu;
    {
        const bool branch_taken_0x1ec6dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ec6dc) {
            ctx->pc = 0x1EC6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC6DCu;
            // 0x1ec6e0: 0x3a71021  addu        $v0, $sp, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC728u;
            goto label_1ec728;
        }
    }
    ctx->pc = 0x1EC6E4u;
    // 0x1ec6e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec6e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec6ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ec6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec6f0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec6f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ec6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec6f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC6F8u;
    {
        const bool branch_taken_0x1ec6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6F8u;
        // 0x1ec6fc: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6f8) {
            ctx->pc = 0x1EC724u;
            goto label_1ec724;
        }
    }
    ctx->pc = 0x1EC700u;
label_1ec700:
    // 0x1ec700: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1ec700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1ec704: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1ec704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1ec708: 0xe523000c  swc1        $f3, 0xC($t1)
    ctx->pc = 0x1ec708u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x1ec70c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ec70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec710: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ec710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec714: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1ec714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec718: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ec718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ec71c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ec71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ec720: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1ec720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ec724:
    // 0x1ec724: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_1ec728:
    // 0x1ec728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec72c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec730: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC730u;
    {
        const bool branch_taken_0x1ec730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec730) {
            ctx->pc = 0x1EC734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC730u;
            // 0x1ec734: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC760u;
            goto label_1ec760;
        }
    }
    ctx->pc = 0x1EC738u;
    // 0x1ec738: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1ec73c: 0x11030012  beq         $t0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC73Cu;
    {
        const bool branch_taken_0x1ec73c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC73Cu;
        // 0x1ec740: 0xc5a0e198  lwc1        $f0, -0x1E68($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec73c) {
            ctx->pc = 0x1EC788u;
            goto label_1ec788;
        }
    }
    ctx->pc = 0x1EC744u;
    // 0x1ec744: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ec744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec748: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec74c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ec74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec750: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ec750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec754: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ec754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec758: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC758u;
    {
        const bool branch_taken_0x1ec758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec758) {
            ctx->pc = 0x1EC784u;
            goto label_1ec784;
        }
    }
    ctx->pc = 0x1EC760u;
label_1ec760:
    // 0x1ec760: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1ec760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1ec764: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1ec764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1ec768: 0xe523000c  swc1        $f3, 0xC($t1)
    ctx->pc = 0x1ec768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x1ec76c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ec76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec770: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ec770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec774: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1ec774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec778: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ec778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec77c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ec77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec780: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ec780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ec784:
    // 0x1ec784: 0xc5a0e198  lwc1        $f0, -0x1E68($t5)
    ctx->pc = 0x1ec784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ec788:
    // 0x1ec788: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1ec788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec78c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1ec78cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec790: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1ec790u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1ec794: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1ec794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec798: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1ec798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ec79c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ec79cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1ec7a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ec7a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ec7a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ec7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec7a8: 0x0  nop
    ctx->pc = 0x1ec7a8u;
    // NOP
    // 0x1ec7ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC7ACu;
    {
        const bool branch_taken_0x1ec7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ACu;
        // 0x1ec7b0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ac) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC7B4u;
    // 0x1ec7b4: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x1ec7b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec7bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec7c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ec7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1ec7c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ec7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1ec7c8:
    // 0x1ec7c8: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x1ec7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7cc: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x1ec7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1ec7d0: 0x5440ffab  bnel        $v0, $zero, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1EC7D0u;
    {
        const bool branch_taken_0x1ec7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7d0) {
            ctx->pc = 0x1EC7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC7D0u;
            // 0x1ec7d4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec680;
        }
    }
    ctx->pc = 0x1EC7D8u;
label_1ec7d8:
    // 0x1ec7d8: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1ec7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7dc: 0x8e102a  slt         $v0, $a0, $t6
    ctx->pc = 0x1ec7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1ec7e0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1EC7E0u;
    {
        const bool branch_taken_0x1ec7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7E0u;
        // 0x1ec7e4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7e0) {
            ctx->pc = 0x1EC658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec658;
        }
    }
    ctx->pc = 0x1EC7E8u;
label_1ec7e8:
    // 0x1ec7e8: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7ec: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1ec7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec7f4: 0x0  nop
    ctx->pc = 0x1ec7f4u;
    // NOP
label_1ec7f8:
    // 0x1ec7f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec7fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC7FCu;
    {
        const bool branch_taken_0x1ec7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7fc) {
            ctx->pc = 0x1EC810u;
            goto label_1ec810;
        }
    }
    ctx->pc = 0x1EC804u;
    // 0x1ec804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec808: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ec80c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ec80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ec810:
    // 0x1ec810: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC810u;
    {
        const bool branch_taken_0x1ec810 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1EC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC810u;
        // 0x1ec814: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec810) {
            ctx->pc = 0x1EC7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec7f8;
        }
    }
    ctx->pc = 0x1EC818u;
    // 0x1ec818: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC820u;
}
