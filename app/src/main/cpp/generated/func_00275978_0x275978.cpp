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

// Function: func_00275978
// Address: 0x275978 - 0x275d68
void func_00275978_0x275978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275978_0x275978");
#endif

    switch (ctx->pc) {
        case 0x27599cu: goto label_27599c;
        case 0x275a48u: goto label_275a48;
        case 0x275ab4u: goto label_275ab4;
        case 0x275b64u: goto label_275b64;
        case 0x275c04u: goto label_275c04;
        case 0x275c34u: goto label_275c34;
        case 0x275c98u: goto label_275c98;
        case 0x275d1cu: goto label_275d1c;
        default: break;
    }

    ctx->pc = 0x275978u;

    // 0x275978: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x275978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27597c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x27597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x275980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x275980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275988: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x275988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x27598c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x275990: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275994: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x275994u;
    SET_GPR_U32(ctx, 31, 0x27599Cu);
    ctx->pc = 0x275998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275994u;
    // 0x275998: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x275994u, 0x27599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27599Cu;
label_27599c:
    // 0x27599c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27599cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2759a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2759a4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2759a8: 0x26241680  addiu       $a0, $s1, 0x1680
    ctx->pc = 0x2759a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x2759ac: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2759ACu;
    {
        const bool branch_taken_0x2759ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2759ac) {
            ctx->pc = 0x2759B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759ACu;
            // 0x2759b0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2759D0u;
            goto label_2759d0;
        }
    }
    ctx->pc = 0x2759B4u;
    // 0x2759b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2759b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2759b8: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x2759b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x2759bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2759bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2759c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2759c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2759c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2759c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2759c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2759c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2759cc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2759d0:
    // 0x2759d0: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x2759d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x2759d4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2759D4u;
    {
        const bool branch_taken_0x2759d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2759D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759D4u;
        // 0x2759d8: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759d4) {
            ctx->pc = 0x275AC0u;
            goto label_275ac0;
        }
    }
    ctx->pc = 0x2759DCu;
    // 0x2759dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2759DCu;
    {
        const bool branch_taken_0x2759dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759DCu;
        // 0x2759e0: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759dc) {
            ctx->pc = 0x2759F4u;
            goto label_2759f4;
        }
    }
    ctx->pc = 0x2759E4u;
    // 0x2759e4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2759E4u;
    {
        const bool branch_taken_0x2759e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759E4u;
        // 0x2759e8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759e4) {
            ctx->pc = 0x275A08u;
            goto label_275a08;
        }
    }
    ctx->pc = 0x2759ECu;
    // 0x2759ec: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2759ECu;
    {
        const bool branch_taken_0x2759ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759ECu;
        // 0x2759f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759ec) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x2759F4u;
label_2759f4:
    // 0x2759f4: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2759f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x2759f8: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2759F8u;
    {
        const bool branch_taken_0x2759f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2759FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759F8u;
        // 0x2759fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759f8) {
            ctx->pc = 0x275BACu;
            goto label_275bac;
        }
    }
    ctx->pc = 0x275A00u;
    // 0x275a00: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x275A00u;
    {
        const bool branch_taken_0x275a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A00u;
        // 0x275a04: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a00) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x275A08u;
label_275a08:
    // 0x275a08: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275a0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275a10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275A14u;
    {
        const bool branch_taken_0x275a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A14u;
        // 0x275a18: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a14) {
            ctx->pc = 0x275A28u;
            goto label_275a28;
        }
    }
    ctx->pc = 0x275A1Cu;
    // 0x275a1c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275a20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275A20u;
    {
        const bool branch_taken_0x275a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A20u;
        // 0x275a24: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a20) {
            ctx->pc = 0x275A2Cu;
            goto label_275a2c;
        }
    }
    ctx->pc = 0x275A28u;
label_275a28:
    // 0x275a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275a2c:
    // 0x275a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a30: 0xc6340618  lwc1        $f20, 0x618($s1)
    ctx->pc = 0x275a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275a34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x275A34u;
    {
        const bool branch_taken_0x275a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A34u;
        // 0x275a38: 0x26321680  addiu       $s2, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a34) {
            ctx->pc = 0x275A78u;
            goto label_275a78;
        }
    }
    ctx->pc = 0x275A3Cu;
    // 0x275a3c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x275a40: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x275A40u;
    SET_GPR_U32(ctx, 31, 0x275A48u);
    ctx->pc = 0x275A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A40u;
    // 0x275a44: 0x8e6400f0  lw          $a0, 0xF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x275A40u, 0x275A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A48u;
label_275a48:
    // 0x275a48: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x275a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x275a4c: 0x12450007  beq         $s2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x275A4Cu;
    {
        const bool branch_taken_0x275a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x275A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A4Cu;
        // 0x275a50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a4c) {
            ctx->pc = 0x275A6Cu;
            goto label_275a6c;
        }
    }
    ctx->pc = 0x275A54u;
    // 0x275a54: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x275a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a58: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275a5c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x275a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a60: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275a64: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x275a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a68: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_275a6c:
    // 0x275a6c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x275a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x275a70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a74: 0xe6201684  swc1        $f0, 0x1684($s1)
    ctx->pc = 0x275a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5764), bits); }
label_275a78:
    // 0x275a78: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275a7c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x275a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x275a80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275A84u;
    {
        const bool branch_taken_0x275a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A84u;
        // 0x275a88: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a84) {
            ctx->pc = 0x275A98u;
            goto label_275a98;
        }
    }
    ctx->pc = 0x275A8Cu;
    // 0x275a8c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275A90u;
    {
        const bool branch_taken_0x275a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A90u;
        // 0x275a94: 0x8c450094  lw          $a1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a90) {
            ctx->pc = 0x275A9Cu;
            goto label_275a9c;
        }
    }
    ctx->pc = 0x275A98u;
label_275a98:
    // 0x275a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275a9c:
    // 0x275a9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275aa0: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x275AA0u;
    {
        const bool branch_taken_0x275aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AA0u;
        // 0x275aa4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275aa0) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x275AA8u;
    // 0x275aa8: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x275aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275aac: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x275AACu;
    SET_GPR_U32(ctx, 31, 0x275AB4u);
    ctx->pc = 0x275AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275AACu;
    // 0x275ab0: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x275AACu, 0x275AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AB4u;
label_275ab4:
    // 0x275ab4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x275ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275ab8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x275AB8u;
    {
        const bool branch_taken_0x275ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ab8) {
            ctx->pc = 0x275B6Cu;
            goto label_275b6c;
        }
    }
    ctx->pc = 0x275AC0u;
label_275ac0:
    // 0x275ac0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x275ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275ac8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275ACCu;
    {
        const bool branch_taken_0x275acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275ACCu;
        // 0x275ad0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275acc) {
            ctx->pc = 0x275AE0u;
            goto label_275ae0;
        }
    }
    ctx->pc = 0x275AD4u;
    // 0x275ad4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275AD8u;
    {
        const bool branch_taken_0x275ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AD8u;
        // 0x275adc: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ad8) {
            ctx->pc = 0x275AE4u;
            goto label_275ae4;
        }
    }
    ctx->pc = 0x275AE0u;
label_275ae0:
    // 0x275ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275ae4:
    // 0x275ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ae8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x275AE8u;
    {
        const bool branch_taken_0x275ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AE8u;
        // 0x275aec: 0x26321680  addiu       $s2, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ae8) {
            ctx->pc = 0x275B20u;
            goto label_275b20;
        }
    }
    ctx->pc = 0x275AF0u;
    // 0x275af0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x275af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x275af4: 0x52450008  beql        $s2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x275AF4u;
    {
        const bool branch_taken_0x275af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x275af4) {
            ctx->pc = 0x275AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275AF4u;
            // 0x275af8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275B18u;
            goto label_275b18;
        }
    }
    ctx->pc = 0x275AFCu;
    // 0x275afc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x275afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b00: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275b04: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x275b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b08: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275b0c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x275b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b10: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x275b14: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x275b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_275b18:
    // 0x275b18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b1c: 0xe6201684  swc1        $f0, 0x1684($s1)
    ctx->pc = 0x275b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5764), bits); }
label_275b20:
    // 0x275b20: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x275b24: 0x10800086  beqz        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x275B24u;
    {
        const bool branch_taken_0x275b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B24u;
        // 0x275b28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b24) {
            ctx->pc = 0x275D40u;
            goto label_275d40;
        }
    }
    ctx->pc = 0x275B2Cu;
    // 0x275b2c: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x275b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x275b30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275b34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275B34u;
    {
        const bool branch_taken_0x275b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B34u;
        // 0x275b38: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b34) {
            ctx->pc = 0x275B48u;
            goto label_275b48;
        }
    }
    ctx->pc = 0x275B3Cu;
    // 0x275b3c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x275b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275B40u;
    {
        const bool branch_taken_0x275b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B40u;
        // 0x275b44: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b40) {
            ctx->pc = 0x275B4Cu;
            goto label_275b4c;
        }
    }
    ctx->pc = 0x275B48u;
label_275b48:
    // 0x275b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275b4c:
    // 0x275b4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b50: 0x1200007c  beqz        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x275B50u;
    {
        const bool branch_taken_0x275b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B50u;
        // 0x275b54: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b50) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x275B58u;
    // 0x275b58: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x275b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275b5c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x275B5Cu;
    SET_GPR_U32(ctx, 31, 0x275B64u);
    ctx->pc = 0x275B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B5Cu;
    // 0x275b60: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x275B5Cu, 0x275B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B64u;
label_275b64:
    // 0x275b64: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x275b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x275b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_275b6c:
    // 0x275b6c: 0x0  nop
    ctx->pc = 0x275b6cu;
    // NOP
    // 0x275b70: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x275B70u;
    {
        const bool branch_taken_0x275b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B70u;
        // 0x275b74: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b70) {
            ctx->pc = 0x275D44u;
            goto label_275d44;
        }
    }
    ctx->pc = 0x275B78u;
    // 0x275b78: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x275b7c: 0x52450008  beql        $s2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x275B7Cu;
    {
        const bool branch_taken_0x275b7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x275b7c) {
            ctx->pc = 0x275B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275B7Cu;
            // 0x275b80: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275BA0u;
            goto label_275ba0;
        }
    }
    ctx->pc = 0x275B84u;
    // 0x275b84: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x275b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b88: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275b8c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x275b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b90: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275b94: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x275b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b98: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x275b9c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_275ba0:
    // 0x275ba0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275ba4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x275BA4u;
    {
        const bool branch_taken_0x275ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BA4u;
        // 0x275ba8: 0xe6201684  swc1        $f0, 0x1684($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ba4) {
            ctx->pc = 0x275D40u;
            goto label_275d40;
        }
    }
    ctx->pc = 0x275BACu;
label_275bac:
    // 0x275bac: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275bb0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x275bb4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275bb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275BB8u;
    {
        const bool branch_taken_0x275bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BB8u;
        // 0x275bbc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bb8) {
            ctx->pc = 0x275BCCu;
            goto label_275bcc;
        }
    }
    ctx->pc = 0x275BC0u;
    // 0x275bc0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275bc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275BC4u;
    {
        const bool branch_taken_0x275bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BC4u;
        // 0x275bc8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bc4) {
            ctx->pc = 0x275BD0u;
            goto label_275bd0;
        }
    }
    ctx->pc = 0x275BCCu;
label_275bcc:
    // 0x275bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275bd0:
    // 0x275bd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bd4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x275BD4u;
    {
        const bool branch_taken_0x275bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BD4u;
        // 0x275bd8: 0x26321680  addiu       $s2, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bd4) {
            ctx->pc = 0x275C34u;
            goto label_275c34;
        }
    }
    ctx->pc = 0x275BDCu;
    // 0x275bdc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x275bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x275be0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275be8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x275be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x275bec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275bf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bf4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275bf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bfc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x275BFCu;
    SET_GPR_U32(ctx, 31, 0x275C04u);
    ctx->pc = 0x275C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BFCu;
    // 0x275c00: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x275BFCu, 0x275C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C04u;
label_275c04:
    // 0x275c04: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275c08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x275c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275c0c: 0x125d0006  beq         $s2, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x275C0Cu;
    {
        const bool branch_taken_0x275c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 29));
        ctx->pc = 0x275C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C0Cu;
        // 0x275c10: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c0c) {
            ctx->pc = 0x275C28u;
            goto label_275c28;
        }
    }
    ctx->pc = 0x275C14u;
    // 0x275c14: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x275c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c18: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275c1c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275c20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x275c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c24: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_275c28:
    // 0x275c28: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x275c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275c2c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x275C2Cu;
    SET_GPR_U32(ctx, 31, 0x275C34u);
    ctx->pc = 0x275C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C2Cu;
    // 0x275c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x275C2Cu, 0x275C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C34u;
label_275c34:
    // 0x275c34: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x275c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x275c38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x275c3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x275c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x275c40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x275C40u;
    {
        const bool branch_taken_0x275c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C40u;
        // 0x275c44: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c40) {
            ctx->pc = 0x275CBCu;
            goto label_275cbc;
        }
    }
    ctx->pc = 0x275C48u;
    // 0x275c48: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275c4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275c50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275C50u;
    {
        const bool branch_taken_0x275c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C50u;
        // 0x275c54: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c50) {
            ctx->pc = 0x275C64u;
            goto label_275c64;
        }
    }
    ctx->pc = 0x275C58u;
    // 0x275c58: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275C5Cu;
    {
        const bool branch_taken_0x275c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C5Cu;
        // 0x275c60: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c5c) {
            ctx->pc = 0x275C68u;
            goto label_275c68;
        }
    }
    ctx->pc = 0x275C64u;
label_275c64:
    // 0x275c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275c68:
    // 0x275c68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c6c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x275C6Cu;
    {
        const bool branch_taken_0x275c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C6Cu;
        // 0x275c70: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c6c) {
            ctx->pc = 0x275CBCu;
            goto label_275cbc;
        }
    }
    ctx->pc = 0x275C74u;
    // 0x275c74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x275c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x275c78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275c80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275c84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c88: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275c8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c90: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x275C90u;
    SET_GPR_U32(ctx, 31, 0x275C98u);
    ctx->pc = 0x275C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C90u;
    // 0x275c94: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x275C90u, 0x275C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C98u;
label_275c98:
    // 0x275c98: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x275c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275c9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x275c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275ca0: 0x125d0006  beq         $s2, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x275CA0u;
    {
        const bool branch_taken_0x275ca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 29));
        ctx->pc = 0x275CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CA0u;
        // 0x275ca4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ca0) {
            ctx->pc = 0x275CBCu;
            goto label_275cbc;
        }
    }
    ctx->pc = 0x275CA8u;
    // 0x275ca8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x275ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275cac: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275cb0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275cb4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x275cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275cb8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_275cbc:
    // 0x275cbc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x275cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x275cc0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x275cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x275cc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x275cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x275cc8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x275CC8u;
    {
        const bool branch_taken_0x275cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CC8u;
        // 0x275ccc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cc8) {
            ctx->pc = 0x275D40u;
            goto label_275d40;
        }
    }
    ctx->pc = 0x275CD0u;
    // 0x275cd0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x275cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x275cd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x275cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275CD8u;
    {
        const bool branch_taken_0x275cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CD8u;
        // 0x275cdc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cd8) {
            ctx->pc = 0x275CECu;
            goto label_275cec;
        }
    }
    ctx->pc = 0x275CE0u;
    // 0x275ce0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x275ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x275ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275CE4u;
    {
        const bool branch_taken_0x275ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CE4u;
        // 0x275ce8: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ce4) {
            ctx->pc = 0x275CF0u;
            goto label_275cf0;
        }
    }
    ctx->pc = 0x275CECu;
label_275cec:
    // 0x275cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275cf0:
    // 0x275cf0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x275CF0u;
    {
        const bool branch_taken_0x275cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CF0u;
        // 0x275cf4: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cf0) {
            ctx->pc = 0x275D40u;
            goto label_275d40;
        }
    }
    ctx->pc = 0x275CF8u;
    // 0x275cf8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x275cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x275cfc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x275cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x275d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275d04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x275d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275d10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d14: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x275D14u;
    SET_GPR_U32(ctx, 31, 0x275D1Cu);
    ctx->pc = 0x275D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D14u;
    // 0x275d18: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x275D14u, 0x275D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D1Cu;
label_275d1c:
    // 0x275d1c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x275d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x275d20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x275d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275d24: 0x125d0006  beq         $s2, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x275D24u;
    {
        const bool branch_taken_0x275d24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 29));
        ctx->pc = 0x275D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D24u;
        // 0x275d28: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d24) {
            ctx->pc = 0x275D40u;
            goto label_275d40;
        }
    }
    ctx->pc = 0x275D2Cu;
    // 0x275d2c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x275d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275d30: 0xe6201680  swc1        $f0, 0x1680($s1)
    ctx->pc = 0x275d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5760), bits); }
    // 0x275d34: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x275d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x275d38: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x275d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275d3c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x275d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_275d40:
    // 0x275d40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x275d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275d44:
    // 0x275d44: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x275d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275d48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x275d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275d4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x275d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275d58: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x275d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x275D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D5Cu;
        // 0x275d60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275D64u;
    // 0x275d64: 0x0  nop
    ctx->pc = 0x275d64u;
    // NOP
    ctx->pc = 0x275d68u;
}
