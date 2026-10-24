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

// Function: func_00282A18
// Address: 0x282a18 - 0x282bb0
void func_00282A18_0x282a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282A18_0x282a18");
#endif

    switch (ctx->pc) {
        case 0x282ac4u: goto label_282ac4;
        case 0x282af4u: goto label_282af4;
        case 0x282b08u: goto label_282b08;
        case 0x282b44u: goto label_282b44;
        case 0x282b74u: goto label_282b74;
        case 0x282b88u: goto label_282b88;
        default: break;
    }

    ctx->pc = 0x282a18u;

    // 0x282a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a28: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x282a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282a2c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x282a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x282a30: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x282A30u;
    {
        const bool branch_taken_0x282a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A30u;
        // 0x282a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a30) {
            ctx->pc = 0x282BA0u;
            goto label_282ba0;
        }
    }
    ctx->pc = 0x282A38u;
    // 0x282a38: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x282a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x282a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x282a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x282a40: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x282a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282a48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x282a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282a4c: 0x800008  jr          $a0
    ctx->pc = 0x282A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282A54u: goto label_282a54;
            case 0x282A90u: goto label_282a90;
            case 0x282B00u: goto label_282b00;
            case 0x282B10u: goto label_282b10;
            case 0x282B80u: goto label_282b80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282A54u;
label_282a54:
    // 0x282a54: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282a58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x282A58u;
    {
        const bool branch_taken_0x282a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A58u;
        // 0x282a5c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a58) {
            ctx->pc = 0x282A78u;
            goto label_282a78;
        }
    }
    ctx->pc = 0x282A60u;
    // 0x282a60: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282a64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a6c: 0x8cc50120  lw          $a1, 0x120($a2)
    ctx->pc = 0x282a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x282a70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282A70u;
    {
        const bool branch_taken_0x282a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A70u;
        // 0x282a74: 0x8cc20124  lw          $v0, 0x124($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a70) {
            ctx->pc = 0x282AB0u;
            goto label_282ab0;
        }
    }
    ctx->pc = 0x282A78u;
label_282a78:
    // 0x282a78: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282a7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a84: 0x8cc50108  lw          $a1, 0x108($a2)
    ctx->pc = 0x282a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x282a88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x282A88u;
    {
        const bool branch_taken_0x282a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A88u;
        // 0x282a8c: 0x8cc2010c  lw          $v0, 0x10C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a88) {
            ctx->pc = 0x282AE0u;
            goto label_282ae0;
        }
    }
    ctx->pc = 0x282A90u;
label_282a90:
    // 0x282a90: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282a94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282A94u;
    {
        const bool branch_taken_0x282a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A94u;
        // 0x282a98: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a94) {
            ctx->pc = 0x282ACCu;
            goto label_282acc;
        }
    }
    ctx->pc = 0x282A9Cu;
    // 0x282a9c: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282aa8: 0x8cc50128  lw          $a1, 0x128($a2)
    ctx->pc = 0x282aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x282aac: 0x8cc2012c  lw          $v0, 0x12C($a2)
    ctx->pc = 0x282aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
label_282ab0:
    // 0x282ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ab4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282ab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282abc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282ABCu;
    SET_GPR_U32(ctx, 31, 0x282AC4u);
    ctx->pc = 0x282AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282ABCu;
    // 0x282ac0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282ABCu, 0x282AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AC4u;
label_282ac4:
    // 0x282ac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282AC4u;
    {
        const bool branch_taken_0x282ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AC4u;
        // 0x282ac8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ac4) {
            ctx->pc = 0x282AF8u;
            goto label_282af8;
        }
    }
    ctx->pc = 0x282ACCu;
label_282acc:
    // 0x282acc: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282ad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ad8: 0x8cc50110  lw          $a1, 0x110($a2)
    ctx->pc = 0x282ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x282adc: 0x8cc20114  lw          $v0, 0x114($a2)
    ctx->pc = 0x282adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
label_282ae0:
    // 0x282ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ae4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282ae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282aec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282AECu;
    SET_GPR_U32(ctx, 31, 0x282AF4u);
    ctx->pc = 0x282AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282AECu;
    // 0x282af0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282AECu, 0x282AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AF4u;
label_282af4:
    // 0x282af4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282af8:
    // 0x282af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282afc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282b00:
    // 0x282b00: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282B00u;
    SET_GPR_U32(ctx, 31, 0x282B08u);
    ctx->pc = 0x282B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B00u;
    // 0x282b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282B00u, 0x282B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B08u;
label_282b08:
    // 0x282b08: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x282B08u;
    {
        const bool branch_taken_0x282b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B08u;
        // 0x282b0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b08) {
            ctx->pc = 0x282BA4u;
            goto label_282ba4;
        }
    }
    ctx->pc = 0x282B10u;
label_282b10:
    // 0x282b10: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282b14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282B14u;
    {
        const bool branch_taken_0x282b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B14u;
        // 0x282b18: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b14) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282B1Cu;
    // 0x282b1c: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b28: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x282b2c: 0x8cc20134  lw          $v0, 0x134($a2)
    ctx->pc = 0x282b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 308)));
    // 0x282b30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b3c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282B3Cu;
    SET_GPR_U32(ctx, 31, 0x282B44u);
    ctx->pc = 0x282B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B3Cu;
    // 0x282b40: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282B3Cu, 0x282B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B44u;
label_282b44:
    // 0x282b44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282B44u;
    {
        const bool branch_taken_0x282b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B44u;
        // 0x282b48: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b44) {
            ctx->pc = 0x282B78u;
            goto label_282b78;
        }
    }
    ctx->pc = 0x282B4Cu;
label_282b4c:
    // 0x282b4c: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x282b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b58: 0x8cc50118  lw          $a1, 0x118($a2)
    ctx->pc = 0x282b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
    // 0x282b5c: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x282b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x282b60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x282b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x282b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b6c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282B6Cu;
    SET_GPR_U32(ctx, 31, 0x282B74u);
    ctx->pc = 0x282B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B6Cu;
    // 0x282b70: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282B6Cu, 0x282B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B74u;
label_282b74:
    // 0x282b74: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282b78:
    // 0x282b78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282b7c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282b80:
    // 0x282b80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282B80u;
    SET_GPR_U32(ctx, 31, 0x282B88u);
    ctx->pc = 0x282B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B80u;
    // 0x282b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282B80u, 0x282B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B88u;
label_282b88:
    // 0x282b88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282B88u;
    {
        const bool branch_taken_0x282b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b88) {
            ctx->pc = 0x282B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B88u;
            // 0x282b8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282BA4u;
            goto label_282ba4;
        }
    }
    ctx->pc = 0x282B90u;
    // 0x282b90: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b94: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b98: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282b9c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_282ba0:
    // 0x282ba0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282ba4:
    // 0x282ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x282BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BA8u;
        // 0x282bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282BB0u;
}
