#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: ElectricTask__5cR505P5cR505
// Address: 0x799918 - 0x799fd8
void ElectricTask__5cR505P5cR505_0x799918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ElectricTask__5cR505P5cR505_0x799918");
#endif

    switch (ctx->pc) {
        case 0x799958u: goto label_799958;
        case 0x799988u: goto label_799988;
        case 0x7999b8u: goto label_7999b8;
        case 0x799b08u: goto label_799b08;
        case 0x799b18u: goto label_799b18;
        case 0x799b28u: goto label_799b28;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b74u: goto label_799b74;
        case 0x799b98u: goto label_799b98;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bd8u: goto label_799bd8;
        case 0x799be8u: goto label_799be8;
        case 0x799bf8u: goto label_799bf8;
        case 0x799c08u: goto label_799c08;
        case 0x799c18u: goto label_799c18;
        case 0x799c40u: goto label_799c40;
        case 0x799cacu: goto label_799cac;
        case 0x799cd4u: goto label_799cd4;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d8cu: goto label_799d8c;
        case 0x799da4u: goto label_799da4;
        case 0x799dc0u: goto label_799dc0;
        case 0x799e20u: goto label_799e20;
        case 0x799e94u: goto label_799e94;
        case 0x799ec8u: goto label_799ec8;
        case 0x799f00u: goto label_799f00;
        case 0x799f34u: goto label_799f34;
        case 0x799f48u: goto label_799f48;
        case 0x799f54u: goto label_799f54;
        case 0x799f70u: goto label_799f70;
        case 0x799f84u: goto label_799f84;
        case 0x799f9cu: goto label_799f9c;
        default: break;
    }

    ctx->pc = 0x799918u;

    // 0x799918: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x79991c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799920: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x799924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x79992c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x799930: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x799934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x799938: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x799938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x79993c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x79993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x799940: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x799940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x799944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799948: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x799948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x79994c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x79994cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x799950: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x799950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x799954: 0x0  nop
    ctx->pc = 0x799954u;
    // NOP
label_799958:
    // 0x799958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79995c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79995Cu;
    {
        const bool branch_taken_0x79995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79995Cu;
        // 0x799960: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79995c) {
            ctx->pc = 0x7999B0u;
            goto label_7999b0;
        }
    }
    ctx->pc = 0x799964u;
    // 0x799964: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x799964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x799968: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799968u;
    {
        const bool branch_taken_0x799968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799968) {
            ctx->pc = 0x7999B0u;
            goto label_7999b0;
        }
    }
    ctx->pc = 0x799970u;
    // 0x799970: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799974: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0x26230004  addiu       $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799974) {
            ctx->pc = 0x799F8Cu;
            goto label_799f8c;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x79997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799980: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799984: 0x0  nop
    ctx->pc = 0x799984u;
    // NOP
label_799988:
    // 0x799988: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79998c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x799990: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799994: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x799994u;
    {
        const bool branch_taken_0x799994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799994u;
        // 0x799998: 0xac60024c  sw          $zero, 0x24C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799994) {
            ctx->pc = 0x799F8Cu;
            goto label_799f8c;
        }
    }
    ctx->pc = 0x79999Cu;
    // 0x79999c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7999a0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7999A0u;
    {
        const bool branch_taken_0x7999a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999a0) {
            ctx->pc = 0x7999A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999A0u;
            // 0x7999a4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799988;
        }
    }
    ctx->pc = 0x7999A8u;
    // 0x7999a8: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x7999A8u;
    {
        const bool branch_taken_0x7999a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A8u;
        // 0x7999ac: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a8) {
            ctx->pc = 0x799F90u;
            goto label_799f90;
        }
    }
    ctx->pc = 0x7999B0u;
label_7999b0:
    // 0x7999b0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7999bc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x7999c0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x7999c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x7999c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7999c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7999c8: 0xc4417a14  lwc1        $f1, 0x7A14($v0)
    ctx->pc = 0x7999c8u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7999cc: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x7999ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7999d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x7999d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x7999d4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x7999d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7999d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7999dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x7999dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x7999e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x7999e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x7999e4: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x7999e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7999e8: 0x0  nop
    ctx->pc = 0x7999e8u;
    // NOP
    // 0x7999ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0xe622001c  swc1        $f2, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x799A00u;
            goto label_799a00;
        }
    }
    ctx->pc = 0x7999F4u;
    // 0x7999f4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x7999f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x7999f8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x7999F8u;
    {
        const bool branch_taken_0x7999f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f8) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x799a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a08: 0x0  nop
    ctx->pc = 0x799a08u;
    // NOP
    // 0x799a0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x799a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a10: 0x0  nop
    ctx->pc = 0x799a10u;
    // NOP
    // 0x799a14: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x799A14u;
    {
        const bool branch_taken_0x799a14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799a14) {
            ctx->pc = 0x799A34u;
            goto label_799a34;
        }
    }
    ctx->pc = 0x799A1Cu;
    // 0x799a1c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x799a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a24: 0x0  nop
    ctx->pc = 0x799a24u;
    // NOP
    // 0x799a28: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x799a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x799a2c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x799A2Cu;
    {
        const bool branch_taken_0x799a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a2c) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x799a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a3c: 0x0  nop
    ctx->pc = 0x799a3cu;
    // NOP
    // 0x799a40: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x799a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
    // 0x799a48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x799A48u;
    {
        const bool branch_taken_0x799a48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799a48) {
            ctx->pc = 0x799A6Cu;
            goto label_799a6c;
        }
    }
    ctx->pc = 0x799A50u;
    // 0x799a50: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x799a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a58: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x799a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a60: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x799a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x799a64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x799A64u;
    {
        const bool branch_taken_0x799a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A64u;
        // 0x799a68: 0xe6210040  swc1        $f1, 0x40($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a64) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799A6Cu;
label_799a6c:
    // 0x799a6c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x799a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a74: 0x0  nop
    ctx->pc = 0x799a74u;
    // NOP
    // 0x799a78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x799a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a7c: 0x0  nop
    ctx->pc = 0x799a7cu;
    // NOP
    // 0x799a80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799A9Cu;
            goto label_799a9c;
        }
    }
    ctx->pc = 0x799A88u;
    // 0x799a88: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x799a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a90: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x799a90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x799a94: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x799A94u;
    {
        const bool branch_taken_0x799a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a94) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x799aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799aa4: 0x0  nop
    ctx->pc = 0x799aa4u;
    // NOP
    // 0x799aa8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x799aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799aac: 0x0  nop
    ctx->pc = 0x799aacu;
    // NOP
    // 0x799ab0: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799AB8u;
    // 0x799ab8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x799abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ac0: 0x0  nop
    ctx->pc = 0x799ac0u;
    // NOP
    // 0x799ac4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x799ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x799ac8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799AD0u;
    // 0x799ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ad8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799adc: 0xa2250020  sb          $a1, 0x20($s1)
    ctx->pc = 0x799adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x799ae0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x799ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x799ae4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799ae8: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799aec: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x799aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x799af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799af4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x799af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x799af8: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x799af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x799afc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x799afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x799b00: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799B00u;
    SET_GPR_U32(ctx, 31, 0x799B08u);
    ctx->pc = 0x799B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B00u;
    // 0x799b04: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799B00u, 0x799B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b0c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799b10: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799B10u;
    SET_GPR_U32(ctx, 31, 0x799B18u);
    ctx->pc = 0x799B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B10u;
    // 0x799b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799B10u, 0x799B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b1c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799b20: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799B20u;
    SET_GPR_U32(ctx, 31, 0x799B28u);
    ctx->pc = 0x799B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B20u;
    // 0x799b24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799B20u, 0x799B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B28u;
label_799b28:
    // 0x799b28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b2c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b34: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799B50u;
            goto label_799b50;
        }
    }
    ctx->pc = 0x799B44u;
    // 0x799b44: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x799b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x799b48: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x799B48u;
    {
        const bool branch_taken_0x799b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b48) {
            ctx->pc = 0x799B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B48u;
            // 0x799b4c: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799B50u;
label_799b50:
    // 0x799b50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b54: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b5c: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x799b60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b6c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B6Cu;
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->pc = 0x799B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B6Cu, 0x799B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b80: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x799b84: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b90: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B90u;
    SET_GPR_U32(ctx, 31, 0x799B98u);
    ctx->pc = 0x799B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B90u;
    // 0x799b94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B90u, 0x799B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x26350004  addiu       $s5, $s1, 0x4
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x799ba4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x799ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x799ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bac: 0x1444005a  bne         $v0, $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799D18u;
            goto label_799d18;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x799bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x799bb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799bbc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799bc0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799bcc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799bd0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799BD0u;
    SET_GPR_U32(ctx, 31, 0x799BD8u);
    ctx->pc = 0x799BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD0u;
    // 0x799bd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799BD0u, 0x799BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799bdc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799be0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799BE0u;
    SET_GPR_U32(ctx, 31, 0x799BE8u);
    ctx->pc = 0x799BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE0u;
    // 0x799be4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799BE0u, 0x799BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bf0: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799BF0u;
    SET_GPR_U32(ctx, 31, 0x799BF8u);
    ctx->pc = 0x799BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF0u;
    // 0x799bf4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799BF0u, 0x799BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c00: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799C00u;
    SET_GPR_U32(ctx, 31, 0x799C08u);
    ctx->pc = 0x799C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C00u;
    // 0x799c04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799C00u, 0x799C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C08u;
label_799c08:
    // 0x799c08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799c10: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799C10u;
    SET_GPR_U32(ctx, 31, 0x799C18u);
    ctx->pc = 0x799C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C10u;
    // 0x799c14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799C10u, 0x799C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x799c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_799c1c:
    // 0x799c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c20: 0x1445003d  bne         $v0, $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x799C20u;
    {
        const bool branch_taken_0x799c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x799C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C20u;
        // 0x799c24: 0x26350004  addiu       $s5, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c20) {
            ctx->pc = 0x799D18u;
            goto label_799d18;
        }
    }
    ctx->pc = 0x799C28u;
    // 0x799c28: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c2c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c30: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c34: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c38: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x799c3c: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_799c40:
    // 0x799c40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799c44: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C44u;
    {
        const bool branch_taken_0x799c44 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x799C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C44u;
        // 0x799c48: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c44) {
            ctx->pc = 0x799C54u;
            goto label_799c54;
        }
    }
    ctx->pc = 0x799C4Cu;
    // 0x799c4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799C4Cu;
    {
        const bool branch_taken_0x799c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C4Cu;
        // 0x799c50: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c4c) {
            ctx->pc = 0x799D00u;
            goto label_799d00;
        }
    }
    ctx->pc = 0x799C54u;
label_799c54:
    // 0x799c54: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x799c58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799c5c: 0x24d3c158  addiu       $s3, $a2, -0x3EA8
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951256));
    // 0x799c60: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799c64: 0x24e6c168  addiu       $a2, $a3, -0x3E98
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951272));
    // 0x799c68: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x799c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799c6c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x799c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799c70: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C170u));
    // 0x799c74: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c78: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799c7c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x799c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x799c80: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x799c84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x799c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c88: 0x145e000d  bne         $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x799C88u;
    {
        const bool branch_taken_0x799c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x799C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C88u;
        // 0x799c8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c88) {
            ctx->pc = 0x799CC0u;
            goto label_799cc0;
        }
    }
    ctx->pc = 0x799C90u;
    // 0x799c90: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x799c94: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ca4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x799CA4u;
    SET_GPR_U32(ctx, 31, 0x799CACu);
    ctx->pc = 0x799CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA4u;
    // 0x799ca8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x799CA4u, 0x799CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CACu;
label_799cac:
    // 0x799cac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799cb0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x799cb4: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x799cb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x799cb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799CB8u;
    {
        const bool branch_taken_0x799cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB8u;
        // 0x799cbc: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cb8) {
            ctx->pc = 0x799CF4u;
            goto label_799cf4;
        }
    }
    ctx->pc = 0x799CC0u;
label_799cc0:
    // 0x799cc0: 0x14570007  bne         $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x799CC0u;
    {
        const bool branch_taken_0x799cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x799cc0) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799CC8u;
    // 0x799cc8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x799ccc: 0xc0c185a  jal         func_306168
    ctx->pc = 0x799CCCu;
    SET_GPR_U32(ctx, 31, 0x799CD4u);
    ctx->pc = 0x799CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CCCu;
    // 0x799cd0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x799CCCu, 0x799CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD4u;
label_799cd4:
    // 0x799cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799cd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799CD8u;
    {
        const bool branch_taken_0x799cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd8) {
            ctx->pc = 0x799CECu;
            goto label_799cec;
        }
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x799CE0u;
    {
        const bool branch_taken_0x799ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ce0) {
            ctx->pc = 0x799CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CE0u;
            // 0x799ce4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D04u;
            goto label_799d04;
        }
    }
    ctx->pc = 0x799CE8u;
    // 0x799ce8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_799cec:
    // 0x799cec: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x799cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x799cf0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x799cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_799cf4:
    // 0x799cf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799cf8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x799cfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x799cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_799d00:
    // 0x799d00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_799d04:
    // 0x799d04: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x799d08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x799d0c: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d10: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x799D10u;
    {
        const bool branch_taken_0x799d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D10u;
        // 0x799d14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d10) {
            ctx->pc = 0x799C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c40;
        }
    }
    ctx->pc = 0x799D18u;
label_799d18:
    // 0x799d18: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x799d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x799d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799d20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x799d24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799d28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799d2c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x799D2Cu;
    {
        const bool branch_taken_0x799d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D2Cu;
        // 0x799d30: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d2c) {
            ctx->pc = 0x799E08u;
            goto label_799e08;
        }
    }
    ctx->pc = 0x799D34u;
    // 0x799d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x799d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799d38: 0x0  nop
    ctx->pc = 0x799d38u;
    // NOP
    // 0x799d3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x799d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x799d40: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x799d40u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x799d44: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x799d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x799d48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x799d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x799d4c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x799d4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x799d50: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x799d54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799d5c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799d60: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799d64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799d68: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x799d68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x799d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799d70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799d74: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x799D74u;
    SET_GPR_U32(ctx, 31, 0x799D7Cu);
    ctx->pc = 0x799D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D74u;
    // 0x799d78: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x799D74u, 0x799D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D7Cu;
label_799d7c:
    // 0x799d7c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x799d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799d80: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x799d80u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x799d84: 0xc1e6c56  jal         func_79B158
    ctx->pc = 0x799D84u;
    SET_GPR_U32(ctx, 31, 0x799D8Cu);
    ctx->pc = 0x799D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D84u;
    // 0x799d88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B158u, 0x799D84u, 0x799D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x799d90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d94: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799d98: 0x8ce42f84  lw          $a0, 0x2F84($a3)
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799d9c: 0xc1e6fbc  jal         func_79BEF0
    ctx->pc = 0x799D9Cu;
    SET_GPR_U32(ctx, 31, 0x799DA4u);
    ctx->pc = 0x799DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D9Cu;
    // 0x799da0: 0x2445c178  addiu       $a1, $v0, -0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEF0u, 0x799D9Cu, 0x799DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA4u;
label_799da4:
    // 0x799da4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x799DACu;
    {
        const bool branch_taken_0x799dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DACu;
        // 0x799db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dac) {
            ctx->pc = 0x799E40u;
            goto label_799e40;
        }
    }
    ctx->pc = 0x799DB4u;
    // 0x799db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dbc: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x799dbcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_799dc0:
    // 0x799dc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x799dc4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x799dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799dc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x799dcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x799DCCu;
    {
        const bool branch_taken_0x799dcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DCCu;
        // 0x799dd0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dcc) {
            ctx->pc = 0x799DDCu;
            goto label_799ddc;
        }
    }
    ctx->pc = 0x799DD4u;
    // 0x799dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799DD4u;
    {
        const bool branch_taken_0x799dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0xe441024c  swc1        $f1, 0x24C($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd4) {
            ctx->pc = 0x799DE0u;
            goto label_799de0;
        }
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0xe454024c  swc1        $f20, 0x24C($v0)
    ctx->pc = 0x799ddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
label_799de0:
    // 0x799de0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799de4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799de8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x799DE8u;
    {
        const bool branch_taken_0x799de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE8u;
        // 0x799dec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de8) {
            ctx->pc = 0x799E40u;
            goto label_799e40;
        }
    }
    ctx->pc = 0x799DF0u;
    // 0x799df0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x799df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799df8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x799DF8u;
    {
        const bool branch_taken_0x799df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df8) {
            ctx->pc = 0x799DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dc0;
        }
    }
    ctx->pc = 0x799E00u;
    // 0x799e00: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x799E00u;
    {
        const bool branch_taken_0x799e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0xc6210040  lwc1        $f1, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e00) {
            ctx->pc = 0x799E44u;
            goto label_799e44;
        }
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799e0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799E0Cu;
    {
        const bool branch_taken_0x799e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E0Cu;
        // 0x799e10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e0c) {
            ctx->pc = 0x799E40u;
            goto label_799e40;
        }
    }
    ctx->pc = 0x799E14u;
    // 0x799e14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799e1c: 0x0  nop
    ctx->pc = 0x799e1cu;
    // NOP
label_799e20:
    // 0x799e20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799e24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x799e28: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x799e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E2Cu;
    {
        const bool branch_taken_0x799e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E2Cu;
        // 0x799e30: 0xac60024c  sw          $zero, 0x24C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e2c) {
            ctx->pc = 0x799E40u;
            goto label_799e40;
        }
    }
    ctx->pc = 0x799E34u;
    // 0x799e34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799e38: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E38u;
            // 0x799e3c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e20;
        }
    }
    ctx->pc = 0x799E40u;
label_799e40:
    // 0x799e40: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x799e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799e44:
    // 0x799e44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x799e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799e48: 0x0  nop
    ctx->pc = 0x799e48u;
    // NOP
    // 0x799e4c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x799e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799e50: 0x0  nop
    ctx->pc = 0x799e50u;
    // NOP
    // 0x799e54: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x799E54u;
    {
        const bool branch_taken_0x799e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799e54) {
            ctx->pc = 0x799ED4u;
            goto label_799ed4;
        }
    }
    ctx->pc = 0x799E5Cu;
    // 0x799e5c: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x799e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799e68: 0x0  nop
    ctx->pc = 0x799e68u;
    // NOP
    // 0x799e6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x799e6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x799e70: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x799e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799e74: 0x0  nop
    ctx->pc = 0x799e74u;
    // NOP
    // 0x799e78: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x799E78u;
    {
        const bool branch_taken_0x799e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E78u;
        // 0x799e7c: 0xe621003c  swc1        $f1, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e78) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799E80u;
    // 0x799e80: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x799e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e88: 0x2464ea60  addiu       $a0, $v1, -0x15A0
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    // 0x799e8c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E94u;
    {
        const bool branch_taken_0x799e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E94u;
        // 0x799e98: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e94) {
            ctx->pc = 0x799EA8u;
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799E9Cu;
    // 0x799e9c: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x799e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x799ea0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x799EA0u;
    {
        const bool branch_taken_0x799ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ea0) {
            ctx->pc = 0x799EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EA0u;
            // 0x799ea4: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x799ECCu;
            goto label_799ecc;
        }
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x799eac: 0x24a4ee00  addiu       $a0, $a1, -0x1200
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x799eb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799eb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799eb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799EC0u;
    SET_GPR_U32(ctx, 31, 0x799EC8u);
    ctx->pc = 0x799EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC0u;
    // 0x799ec4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799EC0u, 0x799EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC8u;
label_799ec8:
    // 0x799ec8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x799ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799ecc:
    // 0x799ecc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x799ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799edc: 0x0  nop
    ctx->pc = 0x799edcu;
    // NOP
    // 0x799ee0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x799ee0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ee4: 0x0  nop
    ctx->pc = 0x799ee4u;
    // NOP
    // 0x799ee8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x799EE8u;
    {
        const bool branch_taken_0x799ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE8u;
        // 0x799eec: 0x3c060060  lui         $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee8) {
            ctx->pc = 0x799F3Cu;
            goto label_799f3c;
        }
    }
    ctx->pc = 0x799EF0u;
    // 0x799ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ef4: 0x24c4ea60  addiu       $a0, $a2, -0x15A0
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
    // 0x799ef8: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F00u;
    {
        const bool branch_taken_0x799f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f00) {
            ctx->pc = 0x799F14u;
            goto label_799f14;
        }
    }
    ctx->pc = 0x799F08u;
    // 0x799f08: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x799f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x799f0c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x799F0Cu;
    {
        const bool branch_taken_0x799f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f0c) {
            ctx->pc = 0x799F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F0Cu;
            // 0x799f10: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799f18: 0x24e4ee00  addiu       $a0, $a3, -0x1200
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962688));
    // 0x799f1c: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x799f20: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f2c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799F34u;
    {
        const bool branch_taken_0x799f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F34u;
        // 0x799f38: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f34) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0xe622003c  swc1        $f2, 0x3C($s1)
    ctx->pc = 0x799f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_799f40:
    // 0x799f40: 0xc1e6c56  jal         func_79B158
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0xc62c003c  lwc1        $f12, 0x3C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B158u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x799f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799f4c: 0xc1e6c56  jal         func_79B158
    ctx->pc = 0x799F4Cu;
    SET_GPR_U32(ctx, 31, 0x799F54u);
    ctx->pc = 0x799F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F4Cu;
    // 0x799f50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B158u, 0x799F4Cu, 0x799F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F54u;
label_799f54:
    // 0x799f54: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799f58: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x799f5c: 0x24c5c188  addiu       $a1, $a2, -0x3E78
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951304));
    // 0x799f60: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799f64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f68: 0xc1e6fbc  jal         func_79BEF0
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEF0u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x799f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f78: 0x8ce22f84  lw          $v0, 0x2F84($a3)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799f7c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x1000fe74  b           . + 4 + (-0x18C << 2)
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x92220045  lbu         $v0, 0x45($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799958;
        }
    }
    ctx->pc = 0x799F8Cu;
label_799f8c:
    // 0x799f8c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799f90:
    // 0x799f90: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799f94: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799fa0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x799fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799fa4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799fa8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799fac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799fb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x799fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799fb4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x799fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799fb8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x799fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799fbc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x799fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799fc4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x799fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799fc8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x799fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x799FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FD4u;
    // 0x799fd4: 0x0  nop
    ctx->pc = 0x799fd4u;
    // NOP
    ctx->pc = 0x799fd8u;
}
} // namespace gh_r505
