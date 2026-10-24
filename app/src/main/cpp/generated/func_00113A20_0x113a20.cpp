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

// Function: func_00113A20
// Address: 0x113a20 - 0x113cf8
void func_00113A20_0x113a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00113A20_0x113a20");
#endif

    switch (ctx->pc) {
        case 0x113a64u: goto label_113a64;
        case 0x113a6cu: goto label_113a6c;
        case 0x113a78u: goto label_113a78;
        case 0x113aa8u: goto label_113aa8;
        case 0x113ab8u: goto label_113ab8;
        case 0x113ad4u: goto label_113ad4;
        case 0x113af0u: goto label_113af0;
        case 0x113b0cu: goto label_113b0c;
        case 0x113b4cu: goto label_113b4c;
        case 0x113b68u: goto label_113b68;
        case 0x113b70u: goto label_113b70;
        case 0x113b78u: goto label_113b78;
        case 0x113bb4u: goto label_113bb4;
        case 0x113bbcu: goto label_113bbc;
        case 0x113bf8u: goto label_113bf8;
        case 0x113c18u: goto label_113c18;
        case 0x113c20u: goto label_113c20;
        case 0x113c30u: goto label_113c30;
        case 0x113c40u: goto label_113c40;
        case 0x113c64u: goto label_113c64;
        case 0x113c70u: goto label_113c70;
        case 0x113c7cu: goto label_113c7c;
        case 0x113c8cu: goto label_113c8c;
        case 0x113c9cu: goto label_113c9c;
        case 0x113cb8u: goto label_113cb8;
        default: break;
    }

    ctx->pc = 0x113a20u;

    // 0x113a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113a24: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x113a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113a2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x113a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x113a30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x113a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x113a38: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x113a38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x113a3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x113a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x113a40: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x113a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x113a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113a50: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x113a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x113a54: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x113a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x113a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a5c: 0xc0a480c  jal         func_292030
    ctx->pc = 0x113A5Cu;
    SET_GPR_U32(ctx, 31, 0x113A64u);
    ctx->pc = 0x113A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A5Cu;
    // 0x113a60: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x113A5Cu, 0x113A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A64u;
label_113a64:
    // 0x113a64: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x113A64u;
    SET_GPR_U32(ctx, 31, 0x113A6Cu);
    ctx->pc = 0x113A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A64u;
    // 0x113a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x113A64u, 0x113A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A6Cu;
label_113a6c:
    // 0x113a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a70: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x113A70u;
    SET_GPR_U32(ctx, 31, 0x113A78u);
    ctx->pc = 0x113A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A70u;
    // 0x113a74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x113A70u, 0x113A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A78u;
label_113a78:
    // 0x113a78: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x113a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x113a7c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113a80: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x113a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x113a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113A84u;
    {
        const bool branch_taken_0x113a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A84u;
        // 0x113a88: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a84) {
            ctx->pc = 0x113AA0u;
            goto label_113aa0;
        }
    }
    ctx->pc = 0x113A8Cu;
    // 0x113a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113a90: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x113A90u;
    {
        const bool branch_taken_0x113a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x113A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A90u;
        // 0x113a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a90) {
            ctx->pc = 0x113BF0u;
            goto label_113bf0;
        }
    }
    ctx->pc = 0x113A98u;
    // 0x113a98: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x113A98u;
    {
        const bool branch_taken_0x113a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113a98) {
            ctx->pc = 0x113C74u;
            goto label_113c74;
        }
    }
    ctx->pc = 0x113AA0u;
label_113aa0:
    // 0x113aa0: 0xc049396  jal         func_124E58
    ctx->pc = 0x113AA0u;
    SET_GPR_U32(ctx, 31, 0x113AA8u);
    ctx->pc = 0x113AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AA0u;
    // 0x113aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x113AA0u, 0x113AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AA8u;
label_113aa8:
    // 0x113aa8: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x113aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x113aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ab0: 0xc04a55e  jal         func_129578
    ctx->pc = 0x113AB0u;
    SET_GPR_U32(ctx, 31, 0x113AB8u);
    ctx->pc = 0x113AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AB0u;
    // 0x113ab4: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x113AB0u, 0x113AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AB8u;
label_113ab8:
    // 0x113ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113abc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x113ac0: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x113ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x113ac4: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x113ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x113ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113acc: 0xc042902  jal         func_10A408
    ctx->pc = 0x113ACCu;
    SET_GPR_U32(ctx, 31, 0x113AD4u);
    ctx->pc = 0x113AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113ACCu;
    // 0x113ad0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x113ACCu, 0x113AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AD4u;
label_113ad4:
    // 0x113ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ad8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x113ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x113adc: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x113ae0: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x113ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x113ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ae8: 0xc042908  jal         func_10A420
    ctx->pc = 0x113AE8u;
    SET_GPR_U32(ctx, 31, 0x113AF0u);
    ctx->pc = 0x113AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AE8u;
    // 0x113aec: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x113AE8u, 0x113AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AF0u;
label_113af0:
    // 0x113af0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x113af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113af8: 0xa2231684  sb          $v1, 0x1684($s1)
    ctx->pc = 0x113af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 3));
    // 0x113afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b00: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x113b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x113b04: 0xc04290e  jal         func_10A438
    ctx->pc = 0x113B04u;
    SET_GPR_U32(ctx, 31, 0x113B0Cu);
    ctx->pc = 0x113B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B04u;
    // 0x113b08: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x113B04u, 0x113B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B0Cu;
label_113b0c:
    // 0x113b0c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x113b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x113b10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113B10u;
    {
        const bool branch_taken_0x113b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B10u;
        // 0x113b14: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b10) {
            ctx->pc = 0x113B24u;
            goto label_113b24;
        }
    }
    ctx->pc = 0x113B18u;
    // 0x113b18: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x113b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x113b1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113B1Cu;
    {
        const bool branch_taken_0x113b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B1Cu;
        // 0x113b20: 0x8c44029c  lw          $a0, 0x29C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b1c) {
            ctx->pc = 0x113B2Cu;
            goto label_113b2c;
        }
    }
    ctx->pc = 0x113B24u;
label_113b24:
    // 0x113b24: 0x8c430294  lw          $v1, 0x294($v0)
    ctx->pc = 0x113b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
    // 0x113b28: 0x8c440298  lw          $a0, 0x298($v0)
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
label_113b2c:
    // 0x113b2c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113b30: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113b34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x113b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x113b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x113b40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b44: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x113B44u;
    SET_GPR_U32(ctx, 31, 0x113B4Cu);
    ctx->pc = 0x113B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B44u;
    // 0x113b48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x113B44u, 0x113B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B4Cu;
label_113b4c:
    // 0x113b4c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x113b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x113b50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113B50u;
    {
        const bool branch_taken_0x113b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B50u;
        // 0x113b54: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b50) {
            ctx->pc = 0x113B80u;
            goto label_113b80;
        }
    }
    ctx->pc = 0x113B58u;
    // 0x113b58: 0x86320548  lh          $s2, 0x548($s1)
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x113b5c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x113b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x113b60: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113B60u;
    SET_GPR_U32(ctx, 31, 0x113B68u);
    ctx->pc = 0x113B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B60u;
    // 0x113b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113B60u, 0x113B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B68u;
label_113b68:
    // 0x113b68: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113B68u;
    SET_GPR_U32(ctx, 31, 0x113B70u);
    ctx->pc = 0x113B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B68u;
    // 0x113b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113B68u, 0x113B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B70u;
label_113b70:
    // 0x113b70: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113B70u;
    SET_GPR_U32(ctx, 31, 0x113B78u);
    ctx->pc = 0x113B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B70u;
    // 0x113b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113B70u, 0x113B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B78u;
label_113b78:
    // 0x113b78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x113B78u;
    {
        const bool branch_taken_0x113b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B78u;
        // 0x113b7c: 0x9622054a  lhu         $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b78) {
            ctx->pc = 0x113BC0u;
            goto label_113bc0;
        }
    }
    ctx->pc = 0x113B80u;
label_113b80:
    // 0x113b80: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x113b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x113b84: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x113b88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x113b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x113b8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113b90: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x113b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113b98: 0x0  nop
    ctx->pc = 0x113b98u;
    // NOP
    // 0x113b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x113ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x113ba4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113ba8: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x113ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x113bac: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113BACu;
    SET_GPR_U32(ctx, 31, 0x113BB4u);
    ctx->pc = 0x113BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BACu;
    // 0x113bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113BACu, 0x113BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BB4u;
label_113bb4:
    // 0x113bb4: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113BB4u;
    SET_GPR_U32(ctx, 31, 0x113BBCu);
    ctx->pc = 0x113BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BB4u;
    // 0x113bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113BB4u, 0x113BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BBCu;
label_113bbc:
    // 0x113bbc: 0x9622054a  lhu         $v0, 0x54A($s1)
    ctx->pc = 0x113bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_113bc0:
    // 0x113bc0: 0x86240548  lh          $a0, 0x548($s1)
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x113bc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x113bc8: 0x96250548  lhu         $a1, 0x548($s1)
    ctx->pc = 0x113bc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x113bcc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113bd0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x113bd4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x113bd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113bd8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x113BD8u;
    {
        const bool branch_taken_0x113bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BD8u;
        // 0x113bdc: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bd8) {
            ctx->pc = 0x113BE4u;
            goto label_113be4;
        }
    }
    ctx->pc = 0x113BE0u;
    // 0x113be0: 0xa625054a  sh          $a1, 0x54A($s1)
    ctx->pc = 0x113be0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 5));
label_113be4:
    // 0x113be4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x113be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113bec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113becu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113bf0:
    // 0x113bf0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x113BF0u;
    SET_GPR_U32(ctx, 31, 0x113BF8u);
    ctx->pc = 0x113BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BF0u;
    // 0x113bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x113BF0u, 0x113BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BF8u;
label_113bf8:
    // 0x113bf8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x113bfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x113bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x113c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C00u;
    {
        const bool branch_taken_0x113c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C00u;
        // 0x113c04: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c00) {
            ctx->pc = 0x113C18u;
            goto label_113c18;
        }
    }
    ctx->pc = 0x113C08u;
    // 0x113c08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c0c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x113c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x113c10: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x113C10u;
    SET_GPR_U32(ctx, 31, 0x113C18u);
    ctx->pc = 0x113C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C10u;
    // 0x113c14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x113C10u, 0x113C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C18u;
label_113c18:
    // 0x113c18: 0xc055f06  jal         func_157C18
    ctx->pc = 0x113C18u;
    SET_GPR_U32(ctx, 31, 0x113C20u);
    ctx->pc = 0x113C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C18u;
    // 0x113c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113C18u, 0x113C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C20u;
label_113c20:
    // 0x113c20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113C20u;
    {
        const bool branch_taken_0x113c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c20) {
            ctx->pc = 0x113C50u;
            goto label_113c50;
        }
    }
    ctx->pc = 0x113C28u;
    // 0x113c28: 0xc04a58c  jal         func_129630
    ctx->pc = 0x113C28u;
    SET_GPR_U32(ctx, 31, 0x113C30u);
    ctx->pc = 0x113C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C28u;
    // 0x113c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113C28u, 0x113C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C30u;
label_113c30:
    // 0x113c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c38: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113C38u;
    SET_GPR_U32(ctx, 31, 0x113C40u);
    ctx->pc = 0x113C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C38u;
    // 0x113c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113C38u, 0x113C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C40u;
label_113c40:
    // 0x113c40: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x113c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x113c44: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x113c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x113c48: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x113c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x113c4c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x113c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_113c50:
    // 0x113c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113c54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x113c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c5c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x113C5Cu;
    SET_GPR_U32(ctx, 31, 0x113C64u);
    ctx->pc = 0x113C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C5Cu;
    // 0x113c60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x113C5Cu, 0x113C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C64u;
label_113c64:
    // 0x113c64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113c64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113c68: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x113C68u;
    SET_GPR_U32(ctx, 31, 0x113C70u);
    ctx->pc = 0x113C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C68u;
    // 0x113c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113C68u, 0x113C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C70u;
label_113c70:
    // 0x113c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113c74:
    // 0x113c74: 0xc048e4e  jal         func_123938
    ctx->pc = 0x113C74u;
    SET_GPR_U32(ctx, 31, 0x113C7Cu);
    ctx->pc = 0x113C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C74u;
    // 0x113c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x113C74u, 0x113C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C7Cu;
label_113c7c:
    // 0x113c7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113C7Cu;
    {
        const bool branch_taken_0x113c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c7c) {
            ctx->pc = 0x113CA4u;
            goto label_113ca4;
        }
    }
    ctx->pc = 0x113C84u;
    // 0x113c84: 0xc04a58c  jal         func_129630
    ctx->pc = 0x113C84u;
    SET_GPR_U32(ctx, 31, 0x113C8Cu);
    ctx->pc = 0x113C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C84u;
    // 0x113c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113C84u, 0x113C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C8Cu;
label_113c8c:
    // 0x113c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c94: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113C94u;
    SET_GPR_U32(ctx, 31, 0x113C9Cu);
    ctx->pc = 0x113C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C94u;
    // 0x113c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113C94u, 0x113C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C9Cu;
label_113c9c:
    // 0x113c9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x113C9Cu;
    {
        const bool branch_taken_0x113c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C9Cu;
        // 0x113ca0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c9c) {
            ctx->pc = 0x113CD8u;
            goto label_113cd8;
        }
    }
    ctx->pc = 0x113CA4u;
label_113ca4:
    // 0x113ca4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x113ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x113ca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x113cac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113cb0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x113CB0u;
    SET_GPR_U32(ctx, 31, 0x113CB8u);
    ctx->pc = 0x113CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CB0u;
    // 0x113cb4: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x113CB0u, 0x113CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CB8u;
label_113cb8:
    // 0x113cb8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x113cbc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x113cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x113cc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x113cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113cc8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x113ccc: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x113cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x113cd0: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x113cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x113cd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x113cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_113cd8:
    // 0x113cd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x113cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113cdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ce0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x113ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ce8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x113ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113cec: 0x3e00008  jr          $ra
    ctx->pc = 0x113CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CECu;
        // 0x113cf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CF4u;
    // 0x113cf4: 0x0  nop
    ctx->pc = 0x113cf4u;
    // NOP
    ctx->pc = 0x113cf8u;
}
