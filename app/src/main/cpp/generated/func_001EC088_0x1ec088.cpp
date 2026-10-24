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

// Function: func_001EC088
// Address: 0x1ec088 - 0x1ec388
void func_001EC088_0x1ec088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC088_0x1ec088");
#endif

    switch (ctx->pc) {
        case 0x1ec0e8u: goto label_1ec0e8;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2e8u: goto label_1ec2e8;
        default: break;
    }

    ctx->pc = 0x1ec088u;

    // 0x1ec088: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ec08c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ec08cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec090: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1ec090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ec094: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1ec094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ec098: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ec098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1ec09c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1ec09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1ec0a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ec0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1ec0a8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1ec0a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec0ac: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ec0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1ec0b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1ec0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1ec0b4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ec0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ec0b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ec0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ec0bc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1ec0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1ec0c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1ec0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1ec0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec0c8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ec0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ec0cc: 0x3c013ea0  lui         $at, 0x3EA0
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16032 << 16));
    // 0x1ec0d0: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1ec0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1ec0d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ec0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ec0d8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1ec0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1ec0dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ec0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ec0e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ec0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ec0e4: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x1ec0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_1ec0e8:
    // 0x1ec0e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ec0ec: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1ec0ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec0f0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1ec0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ec0f4: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x1ec0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec0f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC0F8u;
    {
        const bool branch_taken_0x1ec0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0F8u;
        // 0x1ec0fc: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0f8) {
            ctx->pc = 0x1EC108u;
            goto label_1ec108;
        }
    }
    ctx->pc = 0x1EC100u;
    // 0x1ec100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC100u;
    {
        const bool branch_taken_0x1ec100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC100u;
        // 0x1ec104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec100) {
            ctx->pc = 0x1EC114u;
            goto label_1ec114;
        }
    }
    ctx->pc = 0x1EC108u;
label_1ec108:
    // 0x1ec108: 0x9e420054  lwu         $v0, 0x54($s2)
    ctx->pc = 0x1ec108u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ec10c: 0x2a21017  dsrav       $v0, $v0, $s5
    ctx->pc = 0x1ec10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 21) & 0x3F));
    // 0x1ec110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ec114:
    // 0x1ec114: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec118: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1EC118u;
    {
        const bool branch_taken_0x1ec118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC118u;
        // 0x1ec11c: 0x264301c4  addiu       $v1, $s2, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec118) {
            ctx->pc = 0x1EC338u;
            goto label_1ec338;
        }
    }
    ctx->pc = 0x1EC120u;
    // 0x1ec120: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec124: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ec124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec130: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1EC130u;
    {
        const bool branch_taken_0x1ec130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC130u;
        // 0x1ec134: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec130) {
            ctx->pc = 0x1EC338u;
            goto label_1ec338;
        }
    }
    ctx->pc = 0x1EC138u;
    // 0x1ec138: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ec138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ec13c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ec13cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec140: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ec140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ec144: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec148: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1EC148u;
    {
        const bool branch_taken_0x1ec148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC148u;
        // 0x1ec14c: 0x2e960020  sltiu       $s6, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec148) {
            ctx->pc = 0x1EC338u;
            goto label_1ec338;
        }
    }
    ctx->pc = 0x1EC150u;
    // 0x1ec150: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC150u;
    {
        const bool branch_taken_0x1ec150 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec150) {
            ctx->pc = 0x1EC154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC150u;
            // 0x1ec154: 0x9e420054  lwu         $v0, 0x54($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC160u;
            goto label_1ec160;
        }
    }
    ctx->pc = 0x1EC158u;
    // 0x1ec158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC158u;
    {
        const bool branch_taken_0x1ec158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC158u;
        // 0x1ec15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec158) {
            ctx->pc = 0x1EC168u;
            goto label_1ec168;
        }
    }
    ctx->pc = 0x1EC160u;
label_1ec160:
    // 0x1ec160: 0x2821017  dsrav       $v0, $v0, $s4
    ctx->pc = 0x1ec160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 20) & 0x3F));
    // 0x1ec164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ec168:
    // 0x1ec168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec16c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EC16Cu;
    {
        const bool branch_taken_0x1ec16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC16Cu;
        // 0x1ec170: 0x2072021  addu        $a0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec16c) {
            ctx->pc = 0x1EC26Cu;
            goto label_1ec26c;
        }
    }
    ctx->pc = 0x1EC174u;
    // 0x1ec174: 0x2078821  addu        $s1, $s0, $a3
    ctx->pc = 0x1ec174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ec178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec17c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec180: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ec180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ec184: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec188: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec18c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec190: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1ec190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec194: 0x0  nop
    ctx->pc = 0x1ec194u;
    // NOP
    // 0x1ec198: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC198u;
    {
        const bool branch_taken_0x1ec198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC198u;
        // 0x1ec19c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec198) {
            ctx->pc = 0x1EC1A8u;
            goto label_1ec1a8;
        }
    }
    ctx->pc = 0x1EC1A0u;
    // 0x1ec1a0: 0xe4560104  swc1        $f22, 0x104($v0)
    ctx->pc = 0x1ec1a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec1a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ec1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec1a8:
    // 0x1ec1a8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC1A8u;
    SET_GPR_U32(ctx, 31, 0x1EC1B0u);
    ctx->pc = 0x1EC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1A8u;
    // 0x1ec1ac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC1A8u, 0x1EC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1B0u;
label_1ec1b0:
    // 0x1ec1b0: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x1ec1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1ec1b4: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x1ec1b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x1ec1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec1bc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1c0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1ec1c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1ec1c4: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec1c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec1cc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ec1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec1d4: 0x0  nop
    ctx->pc = 0x1ec1d4u;
    // NOP
    // 0x1ec1d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC1D8u;
    {
        const bool branch_taken_0x1ec1d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1d8) {
            ctx->pc = 0x1EC1ECu;
            goto label_1ec1ec;
        }
    }
    ctx->pc = 0x1EC1E0u;
    // 0x1ec1e0: 0xe4410104  swc1        $f1, 0x104($v0)
    ctx->pc = 0x1ec1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec1e4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1ec1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ec1e8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1ec1e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec1ec:
    // 0x1ec1ec: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC1ECu;
    SET_GPR_U32(ctx, 31, 0x1EC1F4u);
    ctx->pc = 0x1EC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1ECu;
    // 0x1ec1f0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC1ECu, 0x1EC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1F4u;
label_1ec1f4:
    // 0x1ec1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ec1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec1f8: 0x16620050  bne         $s3, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1EC1F8u;
    {
        const bool branch_taken_0x1ec1f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1F8u;
        // 0x1ec1fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1f8) {
            ctx->pc = 0x1EC33Cu;
            goto label_1ec33c;
        }
    }
    ctx->pc = 0x1EC200u;
    // 0x1ec200: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC200u;
    {
        const bool branch_taken_0x1ec200 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC200u;
        // 0x1ec204: 0x29e1014  dsllv       $v0, $fp, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (GPR_U32(ctx, 20) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec200) {
            ctx->pc = 0x1EC21Cu;
            goto label_1ec21c;
        }
    }
    ctx->pc = 0x1EC208u;
    // 0x1ec208: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1ec208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ec20c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec210: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec214: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec218: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ec218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ec21c:
    // 0x1ec21c: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x1ec21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec220: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC220u;
    {
        const bool branch_taken_0x1ec220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC220u;
        // 0x1ec224: 0x2be1014  dsllv       $v0, $fp, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (GPR_U32(ctx, 21) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec220) {
            ctx->pc = 0x1EC240u;
            goto label_1ec240;
        }
    }
    ctx->pc = 0x1EC228u;
    // 0x1ec228: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1ec228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ec22c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec230: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec234: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec234u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec238: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec23c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ec23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ec240:
    // 0x1ec240: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec244: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ec248: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x1ec24c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec254: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1ec258: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec25c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EC25Cu;
    SET_GPR_U32(ctx, 31, 0x1EC264u);
    ctx->pc = 0x1EC260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC25Cu;
    // 0x1ec260: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EC25Cu, 0x1EC264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC264u;
label_1ec264:
    // 0x1ec264: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EC264u;
    {
        const bool branch_taken_0x1ec264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC264u;
        // 0x1ec268: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec264) {
            ctx->pc = 0x1EC33Cu;
            goto label_1ec33c;
        }
    }
    ctx->pc = 0x1EC26Cu;
label_1ec26c:
    // 0x1ec26c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ec26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ec270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ec270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec274: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec278: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1ec278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1ec27c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec284: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec288: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1ec288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec28c: 0x0  nop
    ctx->pc = 0x1ec28cu;
    // NOP
    // 0x1ec290: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC290u;
    {
        const bool branch_taken_0x1ec290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC290u;
        // 0x1ec294: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec290) {
            ctx->pc = 0x1EC2A0u;
            goto label_1ec2a0;
        }
    }
    ctx->pc = 0x1EC298u;
    // 0x1ec298: 0xe4540104  swc1        $f20, 0x104($v0)
    ctx->pc = 0x1ec298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec29c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ec29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec2a0:
    // 0x1ec2a0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC2A0u;
    SET_GPR_U32(ctx, 31, 0x1EC2A8u);
    ctx->pc = 0x1EC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC2A0u;
    // 0x1ec2a4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC2A0u, 0x1EC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2A8u;
label_1ec2a8:
    // 0x1ec2a8: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x1ec2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1ec2ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec2b0: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2b4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1ec2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ec2b8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec2bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec2c0: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1ec2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec2c4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1ec2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec2c8: 0x0  nop
    ctx->pc = 0x1ec2c8u;
    // NOP
    // 0x1ec2cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC2CCu;
    {
        const bool branch_taken_0x1ec2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec2cc) {
            ctx->pc = 0x1EC2E0u;
            goto label_1ec2e0;
        }
    }
    ctx->pc = 0x1EC2D4u;
    // 0x1ec2d4: 0xe4540104  swc1        $f20, 0x104($v0)
    ctx->pc = 0x1ec2d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1ec2d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1ec2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ec2dc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ec2dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec2e0:
    // 0x1ec2e0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1EC2E0u;
    SET_GPR_U32(ctx, 31, 0x1EC2E8u);
    ctx->pc = 0x1EC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC2E0u;
    // 0x1ec2e4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1EC2E0u, 0x1EC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2E8u;
label_1ec2e8:
    // 0x1ec2e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ec2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec2ec: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC2ECu;
    {
        const bool branch_taken_0x1ec2ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2ECu;
        // 0x1ec2f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2ec) {
            ctx->pc = 0x1EC33Cu;
            goto label_1ec33c;
        }
    }
    ctx->pc = 0x1EC2F4u;
    // 0x1ec2f4: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC2F4u;
    {
        const bool branch_taken_0x1ec2f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F4u;
        // 0x1ec2f8: 0x29e1014  dsllv       $v0, $fp, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (GPR_U32(ctx, 20) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2f4) {
            ctx->pc = 0x1EC314u;
            goto label_1ec314;
        }
    }
    ctx->pc = 0x1EC2FCu;
    // 0x1ec2fc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1ec2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ec300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec304: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec308: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec308u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec30c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec310: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ec310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ec314:
    // 0x1ec314: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x1ec314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ec318: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC318u;
    {
        const bool branch_taken_0x1ec318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC318u;
        // 0x1ec31c: 0x2be1014  dsllv       $v0, $fp, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (GPR_U32(ctx, 21) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec318) {
            ctx->pc = 0x1EC338u;
            goto label_1ec338;
        }
    }
    ctx->pc = 0x1EC320u;
    // 0x1ec320: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ec324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec328: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec328u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec32c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec32cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec334: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ec334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ec338:
    // 0x1ec338: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ec338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec33c:
    // 0x1ec33c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1ec33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ec340: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x1EC340u;
    {
        const bool branch_taken_0x1ec340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC340u;
        // 0x1ec344: 0x24750006  addiu       $s5, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec340) {
            ctx->pc = 0x1EC0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec0e8;
        }
    }
    ctx->pc = 0x1EC348u;
    // 0x1ec348: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1ec348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ec34c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1ec34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec350: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1ec350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec354: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1ec354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec358: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec35c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ec35cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec360: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1ec360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec364: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1ec364u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec368: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1ec368u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec370: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1ec370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ec374: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1ec374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec378: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ec378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC37Cu;
        // 0x1ec380: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC384u;
    // 0x1ec384: 0x0  nop
    ctx->pc = 0x1ec384u;
    // NOP
    ctx->pc = 0x1ec388u;
}
