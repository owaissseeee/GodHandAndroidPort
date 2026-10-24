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

// Function: func_00304A48
// Address: 0x304a48 - 0x304bb8
void func_00304A48_0x304a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304A48_0x304a48");
#endif

    switch (ctx->pc) {
        case 0x304a94u: goto label_304a94;
        case 0x304aa0u: goto label_304aa0;
        case 0x304ab8u: goto label_304ab8;
        case 0x304ac8u: goto label_304ac8;
        case 0x304ad4u: goto label_304ad4;
        case 0x304ae0u: goto label_304ae0;
        case 0x304af8u: goto label_304af8;
        case 0x304b08u: goto label_304b08;
        case 0x304b14u: goto label_304b14;
        case 0x304b20u: goto label_304b20;
        case 0x304b2cu: goto label_304b2c;
        case 0x304b64u: goto label_304b64;
        case 0x304b74u: goto label_304b74;
        case 0x304b98u: goto label_304b98;
        default: break;
    }

    ctx->pc = 0x304a48u;

    // 0x304a48: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x304a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x304a4c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x304a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x304a50: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x304a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x304a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a58: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x304a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x304a5c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x304a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x304a60: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x304a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x304a64: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x304a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x304a68: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x304A68u;
    {
        const bool branch_taken_0x304a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A68u;
        // 0x304a6c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a68) {
            ctx->pc = 0x304BA0u;
            goto label_304ba0;
        }
    }
    ctx->pc = 0x304A70u;
    // 0x304a70: 0x8642018a  lh          $v0, 0x18A($s2)
    ctx->pc = 0x304a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 394)));
    // 0x304a74: 0x440004a  bltz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x304A74u;
    {
        const bool branch_taken_0x304a74 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A74u;
        // 0x304a78: 0x9643018a  lhu         $v1, 0x18A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 394)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a74) {
            ctx->pc = 0x304BA0u;
            goto label_304ba0;
        }
    }
    ctx->pc = 0x304A7Cu;
    // 0x304a7c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x304a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x304a80: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x304a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x304a84: 0x1c600046  bgtz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x304A84u;
    {
        const bool branch_taken_0x304a84 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x304A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A84u;
        // 0x304a88: 0xa642018a  sh          $v0, 0x18A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a84) {
            ctx->pc = 0x304BA0u;
            goto label_304ba0;
        }
    }
    ctx->pc = 0x304A8Cu;
    // 0x304a8c: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x304A8Cu;
    SET_GPR_U32(ctx, 31, 0x304A94u);
    ctx->pc = 0x304A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A8Cu;
    // 0x304a90: 0xa640018a  sh          $zero, 0x18A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x304A8Cu, 0x304A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A94u;
label_304a94:
    // 0x304a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a98: 0xc051d4a  jal         func_147528
    ctx->pc = 0x304A98u;
    SET_GPR_U32(ctx, 31, 0x304AA0u);
    ctx->pc = 0x304A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A98u;
    // 0x304a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x304A98u, 0x304AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AA0u;
label_304aa0:
    // 0x304aa0: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x304aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x304aa4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x304AA4u;
    {
        const bool branch_taken_0x304aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA4u;
        // 0x304aa8: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aa4) {
            ctx->pc = 0x304AD4u;
            goto label_304ad4;
        }
    }
    ctx->pc = 0x304AACu;
    // 0x304aac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x304ab0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x304AB0u;
    SET_GPR_U32(ctx, 31, 0x304AB8u);
    ctx->pc = 0x304AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AB0u;
    // 0x304ab4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x304AB0u, 0x304AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AB8u;
label_304ab8:
    // 0x304ab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304abc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ac0: 0xc051d52  jal         func_147548
    ctx->pc = 0x304AC0u;
    SET_GPR_U32(ctx, 31, 0x304AC8u);
    ctx->pc = 0x304AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AC0u;
    // 0x304ac4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x304AC0u, 0x304AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AC8u;
label_304ac8:
    // 0x304ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304acc: 0xc0ad8d4  jal         func_2B6350
    ctx->pc = 0x304ACCu;
    SET_GPR_U32(ctx, 31, 0x304AD4u);
    ctx->pc = 0x304AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304ACCu;
    // 0x304ad0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x304ACCu, 0x304AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AD4u;
label_304ad4:
    // 0x304ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ad8: 0xc0ad820  jal         func_2B6080
    ctx->pc = 0x304AD8u;
    SET_GPR_U32(ctx, 31, 0x304AE0u);
    ctx->pc = 0x304ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AD8u;
    // 0x304adc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6080u, 0x304AD8u, 0x304AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AE0u;
label_304ae0:
    // 0x304ae0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x304ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x304ae4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x304ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304ae8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x304ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304af0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x304AF0u;
    SET_GPR_U32(ctx, 31, 0x304AF8u);
    ctx->pc = 0x304AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AF0u;
    // 0x304af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x304AF0u, 0x304AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AF8u;
label_304af8:
    // 0x304af8: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x304af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304afc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x304afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b00: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x304B00u;
    SET_GPR_U32(ctx, 31, 0x304B08u);
    ctx->pc = 0x304B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B00u;
    // 0x304b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x304B00u, 0x304B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B08u;
label_304b08:
    // 0x304b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b0c: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x304B0Cu;
    SET_GPR_U32(ctx, 31, 0x304B14u);
    ctx->pc = 0x304B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B0Cu;
    // 0x304b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x304B0Cu, 0x304B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B14u;
label_304b14:
    // 0x304b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x304b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b18: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x304B18u;
    SET_GPR_U32(ctx, 31, 0x304B20u);
    ctx->pc = 0x304B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B18u;
    // 0x304b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x304B18u, 0x304B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B20u;
label_304b20:
    // 0x304b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b24: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x304B24u;
    SET_GPR_U32(ctx, 31, 0x304B2Cu);
    ctx->pc = 0x304B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B24u;
    // 0x304b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x304B24u, 0x304B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B2Cu;
label_304b2c:
    // 0x304b2c: 0xc643011c  lwc1        $f3, 0x11C($s2)
    ctx->pc = 0x304b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304b30: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x304b34: 0xc6400120  lwc1        $f0, 0x120($s2)
    ctx->pc = 0x304b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b38: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x304b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304b40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x304b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304b44: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x304b44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x304b48: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x304b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x304b4c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x304b4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x304b50: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x304b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x304b54: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x304b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x304b58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b5c: 0xc051f10  jal         func_147C40
    ctx->pc = 0x304B5Cu;
    SET_GPR_U32(ctx, 31, 0x304B64u);
    ctx->pc = 0x304B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B5Cu;
    // 0x304b60: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x304B5Cu, 0x304B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B64u;
label_304b64:
    // 0x304b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x304b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b6c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x304B6Cu;
    SET_GPR_U32(ctx, 31, 0x304B74u);
    ctx->pc = 0x304B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B6Cu;
    // 0x304b70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x304B6Cu, 0x304B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B74u;
label_304b74:
    // 0x304b74: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x304b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b7c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x304b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b84: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x304b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b88: 0xe642011c  swc1        $f2, 0x11C($s2)
    ctx->pc = 0x304b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x304b8c: 0xe6410120  swc1        $f1, 0x120($s2)
    ctx->pc = 0x304b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x304b90: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x304B90u;
    SET_GPR_U32(ctx, 31, 0x304B98u);
    ctx->pc = 0x304B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B90u;
    // 0x304b94: 0xe6400124  swc1        $f0, 0x124($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x304B90u, 0x304B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B98u;
label_304b98:
    // 0x304b98: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x304b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x304b9c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x304b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_304ba0:
    // 0x304ba0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x304ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x304ba4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x304ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x304ba8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x304ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304bac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x304bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x304BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BB0u;
        // 0x304bb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304BB8u;
}
