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

// Function: func_002FCB88
// Address: 0x2fcb88 - 0x2fcd60
void func_002FCB88_0x2fcb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FCB88_0x2fcb88");
#endif

    switch (ctx->pc) {
        case 0x2fcbacu: goto label_2fcbac;
        case 0x2fcbe0u: goto label_2fcbe0;
        case 0x2fcc38u: goto label_2fcc38;
        case 0x2fcc40u: goto label_2fcc40;
        case 0x2fcc4cu: goto label_2fcc4c;
        case 0x2fcc60u: goto label_2fcc60;
        case 0x2fcc70u: goto label_2fcc70;
        case 0x2fccc0u: goto label_2fccc0;
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fcd08u: goto label_2fcd08;
        case 0x2fcd30u: goto label_2fcd30;
        case 0x2fcd3cu: goto label_2fcd3c;
        default: break;
    }

    ctx->pc = 0x2fcb88u;

    // 0x2fcb88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2fcb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2fcb8c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2fcb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2fcb90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fcb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb94: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2fcb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2fcb98: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2fcb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2fcb9c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2fcb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2fcba0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fcba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fcba4: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCBA4u;
    SET_GPR_U32(ctx, 31, 0x2FCBACu);
    ctx->pc = 0x2FCBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBA4u;
    // 0x2fcba8: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCBA4u, 0x2FCBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBACu;
label_2fcbac:
    // 0x2fcbac: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2FCBACu;
    {
        const bool branch_taken_0x2fcbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBACu;
        // 0x2fcbb0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbac) {
            ctx->pc = 0x2FCD40u;
            goto label_2fcd40;
        }
    }
    ctx->pc = 0x2FCBB4u;
    // 0x2fcbb4: 0x82230103  lb          $v1, 0x103($s1)
    ctx->pc = 0x2fcbb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 259)));
    // 0x2fcbb8: 0x4620062  bltzl       $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2FCBB8u;
    {
        const bool branch_taken_0x2fcbb8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2fcbb8) {
            ctx->pc = 0x2FCBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCBB8u;
            // 0x2fcbbc: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD44u;
            goto label_2fcd44;
        }
    }
    ctx->pc = 0x2FCBC0u;
    // 0x2fcbc0: 0x8622022e  lh          $v0, 0x22E($s1)
    ctx->pc = 0x2fcbc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 558)));
    // 0x2fcbc4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2fcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fcbc8: 0x5c40005e  bgtzl       $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2FCBC8u;
    {
        const bool branch_taken_0x2fcbc8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2fcbc8) {
            ctx->pc = 0x2FCBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCBC8u;
            // 0x2fcbcc: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD44u;
            goto label_2fcd44;
        }
    }
    ctx->pc = 0x2FCBD0u;
    // 0x2fcbd0: 0xa2200103  sb          $zero, 0x103($s1)
    ctx->pc = 0x2fcbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fcbd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fcbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcbd8: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2FCBD8u;
    SET_GPR_U32(ctx, 31, 0x2FCBE0u);
    ctx->pc = 0x2FCBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBD8u;
    // 0x2fcbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x2FCBD8u, 0x2FCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBE0u;
label_2fcbe0:
    // 0x2fcbe0: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2fcbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2fcbe4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2fcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2fcbe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fcbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fcbec: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FCBECu;
    {
        const bool branch_taken_0x2fcbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBECu;
        // 0x2fcbf0: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbec) {
            ctx->pc = 0x2FCCD8u;
            goto label_2fccd8;
        }
    }
    ctx->pc = 0x2FCBF4u;
    // 0x2fcbf4: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2FCBF4u;
    {
        const bool branch_taken_0x2fcbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBF4u;
        // 0x2fcbf8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbf4) {
            ctx->pc = 0x2FCD40u;
            goto label_2fcd40;
        }
    }
    ctx->pc = 0x2FCBFCu;
    // 0x2fcbfc: 0xc6220124  lwc1        $f2, 0x124($s1)
    ctx->pc = 0x2fcbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcc00: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x2fcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2fcc04: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2fcc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcc08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fcc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fcc0c: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2fcc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcc10: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2fcc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fcc14: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2fcc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fcc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc1c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2fcc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fcc20: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2fcc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fcc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fcc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fcc28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fcc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fcc2c: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2fcc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x2fcc30: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCC30u;
    SET_GPR_U32(ctx, 31, 0x2FCC38u);
    ctx->pc = 0x2FCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC30u;
    // 0x2fcc34: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCC30u, 0x2FCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC38u;
label_2fcc38:
    // 0x2fcc38: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2FCC38u;
    SET_GPR_U32(ctx, 31, 0x2FCC40u);
    ctx->pc = 0x2FCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC38u;
    // 0x2fcc3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2FCC38u, 0x2FCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC40u;
label_2fcc40:
    // 0x2fcc40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fcc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc44: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FCC44u;
    SET_GPR_U32(ctx, 31, 0x2FCC4Cu);
    ctx->pc = 0x2FCC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC44u;
    // 0x2fcc48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FCC44u, 0x2FCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC4Cu;
label_2fcc4c:
    // 0x2fcc4c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2fcc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fcc50: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2fcc50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fcc54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fcc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc58: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2FCC58u;
    SET_GPR_U32(ctx, 31, 0x2FCC60u);
    ctx->pc = 0x2FCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC58u;
    // 0x2fcc5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2FCC58u, 0x2FCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC60u;
label_2fcc60:
    // 0x2fcc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fcc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fcc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc68: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FCC68u;
    SET_GPR_U32(ctx, 31, 0x2FCC70u);
    ctx->pc = 0x2FCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC68u;
    // 0x2fcc6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FCC68u, 0x2FCC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC70u;
label_2fcc70:
    // 0x2fcc70: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2fcc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcc74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcc78: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2fcc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcc7c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2fcc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcc80: 0x92220141  lbu         $v0, 0x141($s1)
    ctx->pc = 0x2fcc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 321)));
    // 0x2fcc84: 0xe6220124  swc1        $f2, 0x124($s1)
    ctx->pc = 0x2fcc84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2fcc88: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2fcc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2fcc8c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FCC8Cu;
    {
        const bool branch_taken_0x2fcc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC8Cu;
        // 0x2fcc90: 0xe621012c  swc1        $f1, 0x12C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc8c) {
            ctx->pc = 0x2FCCD8u;
            goto label_2fccd8;
        }
    }
    ctx->pc = 0x2FCC94u;
    // 0x2fcc94: 0xc6220134  lwc1        $f2, 0x134($s1)
    ctx->pc = 0x2fcc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcc98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fcc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc9c: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x2fcc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcca0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fcca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcca4: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x2fcca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcca8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fcca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccac: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2fccacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fccb0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fccb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fccb4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fccb8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FCCB8u;
    SET_GPR_U32(ctx, 31, 0x2FCCC0u);
    ctx->pc = 0x2FCCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCCB8u;
    // 0x2fccbc: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FCCB8u, 0x2FCCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCCC0u;
label_2fccc0:
    // 0x2fccc0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fccc4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2fccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fccc8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2fccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcccc: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x2fccccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x2fccd0: 0xe6210138  swc1        $f1, 0x138($s1)
    ctx->pc = 0x2fccd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x2fccd4: 0xe622013c  swc1        $f2, 0x13C($s1)
    ctx->pc = 0x2fccd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
label_2fccd8:
    // 0x2fccd8: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCCD8u;
    SET_GPR_U32(ctx, 31, 0x2FCCE0u);
    ctx->pc = 0x2FCCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCCD8u;
    // 0x2fccdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCCD8u, 0x2FCCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCCE0u;
label_2fcce0:
    // 0x2fcce0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCCE0u;
    {
        const bool branch_taken_0x2fcce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCE0u;
        // 0x2fcce4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcce0) {
            ctx->pc = 0x2FCD24u;
            goto label_2fcd24;
        }
    }
    ctx->pc = 0x2FCCE8u;
    // 0x2fcce8: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2fcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2fccec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fccf0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FCCF0u;
    {
        const bool branch_taken_0x2fccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCF0u;
        // 0x2fccf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccf0) {
            ctx->pc = 0x2FCD28u;
            goto label_2fcd28;
        }
    }
    ctx->pc = 0x2FCCF8u;
    // 0x2fccf8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fccfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fccfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd00: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2FCD00u;
    SET_GPR_U32(ctx, 31, 0x2FCD08u);
    ctx->pc = 0x2FCD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD00u;
    // 0x2fcd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2FCD00u, 0x2FCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD08u;
label_2fcd08:
    // 0x2fcd08: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCD08u;
    {
        const bool branch_taken_0x2fcd08 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD08u;
        // 0x2fcd0c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd08) {
            ctx->pc = 0x2FCD24u;
            goto label_2fcd24;
        }
    }
    ctx->pc = 0x2FCD10u;
    // 0x2fcd10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fcd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcd14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fcd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcd18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fcd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fcd1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fcd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fcd20: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fcd20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fcd24:
    // 0x2fcd24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd28:
    // 0x2fcd28: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x2FCD28u;
    SET_GPR_U32(ctx, 31, 0x2FCD30u);
    ctx->pc = 0x2FCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD28u;
    // 0x2fcd2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x2FCD28u, 0x2FCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD30u;
label_2fcd30:
    // 0x2fcd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd34: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x2FCD34u;
    SET_GPR_U32(ctx, 31, 0x2FCD3Cu);
    ctx->pc = 0x2FCD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD34u;
    // 0x2fcd38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x2FCD34u, 0x2FCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD3Cu;
label_2fcd3c:
    // 0x2fcd3c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2fcd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2fcd40:
    // 0x2fcd40: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2fcd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2fcd44:
    // 0x2fcd44: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2fcd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fcd48: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2fcd48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fcd4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fcd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fcd50: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2fcd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fcd54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD54u;
        // 0x2fcd58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCD5Cu;
    // 0x2fcd5c: 0x0  nop
    ctx->pc = 0x2fcd5cu;
    // NOP
    ctx->pc = 0x2fcd60u;
}
