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

// Function: func_00286AA8
// Address: 0x286aa8 - 0x286d10
void func_00286AA8_0x286aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00286AA8_0x286aa8");
#endif

    switch (ctx->pc) {
        case 0x286b00u: goto label_286b00;
        case 0x286bc0u: goto label_286bc0;
        case 0x286c64u: goto label_286c64;
        case 0x286c6cu: goto label_286c6c;
        case 0x286c74u: goto label_286c74;
        case 0x286cacu: goto label_286cac;
        case 0x286cd8u: goto label_286cd8;
        case 0x286ce4u: goto label_286ce4;
        default: break;
    }

    ctx->pc = 0x286aa8u;

    // 0x286aa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286aac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x286aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x286ab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x286ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x286ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286abc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x286abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286ac0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x286ac4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x286ac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286ac8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x286ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x286acc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x286accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x286ad0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x286ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286ad4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x286ad8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x286ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x286adc: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x286adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x286ae0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x286ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x286ae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x286ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286ae8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x286ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x286aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x286af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286af4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x286af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286af8: 0xc0a4404  jal         func_291010
    ctx->pc = 0x286AF8u;
    SET_GPR_U32(ctx, 31, 0x286B00u);
    ctx->pc = 0x286AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286AF8u;
    // 0x286afc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x286AF8u, 0x286B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B00u;
label_286b00:
    // 0x286b00: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x286b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x286b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286b08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286B08u;
    {
        const bool branch_taken_0x286b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B08u;
        // 0x286b0c: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b08) {
            ctx->pc = 0x286B20u;
            goto label_286b20;
        }
    }
    ctx->pc = 0x286B10u;
    // 0x286b10: 0x50640039  beql        $v1, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x286B10u;
    {
        const bool branch_taken_0x286b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x286b10) {
            ctx->pc = 0x286B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286B10u;
            // 0x286b14: 0x8e0300f0  lw          $v1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286BF8u;
            goto label_286bf8;
        }
    }
    ctx->pc = 0x286B18u;
    // 0x286b18: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x286B18u;
    {
        const bool branch_taken_0x286b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B18u;
        // 0x286b1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b18) {
            ctx->pc = 0x286CFCu;
            goto label_286cfc;
        }
    }
    ctx->pc = 0x286B20u;
label_286b20:
    // 0x286b20: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286b24: 0x920402f7  lbu         $a0, 0x2F7($s0)
    ctx->pc = 0x286b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x286b28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286b2c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x286b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x286b30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286B30u;
    {
        const bool branch_taken_0x286b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B30u;
        // 0x286b34: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b30) {
            ctx->pc = 0x286B54u;
            goto label_286b54;
        }
    }
    ctx->pc = 0x286B38u;
    // 0x286b38: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x286b3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x286b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x286b40: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x286b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286b48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x286b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286b4c: 0x800008  jr          $a0
    ctx->pc = 0x286B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286B54u: goto label_286b54;
            case 0x286B64u: goto label_286b64;
            case 0x286B74u: goto label_286b74;
            case 0x286B84u: goto label_286b84;
            case 0x286B94u: goto label_286b94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286B4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286B54u;
label_286b54:
    // 0x286b54: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286b58: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x286b5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x286B5Cu;
    {
        const bool branch_taken_0x286b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B5Cu;
        // 0x286b60: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b5c) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286B64u;
label_286b64:
    // 0x286b64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286b68: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x286b6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x286B6Cu;
    {
        const bool branch_taken_0x286b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B6Cu;
        // 0x286b70: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b6c) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286B74u;
label_286b74:
    // 0x286b74: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286b78: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x286b7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286B7Cu;
    {
        const bool branch_taken_0x286b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B7Cu;
        // 0x286b80: 0x8c4400d4  lw          $a0, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b7c) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286B84u;
label_286b84:
    // 0x286b84: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286b88: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x286b8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286B8Cu;
    {
        const bool branch_taken_0x286b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B8Cu;
        // 0x286b90: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b8c) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286B94u;
label_286b94:
    // 0x286b94: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286b98: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x286b9c: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x286b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_286ba0:
    // 0x286ba0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286ba4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x286ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286ba8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bb0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bb8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286BB8u;
    SET_GPR_U32(ctx, 31, 0x286BC0u);
    ctx->pc = 0x286BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BB8u;
    // 0x286bbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286BB8u, 0x286BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286BC0u;
label_286bc0:
    // 0x286bc0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x286bc4: 0x260305c0  addiu       $v1, $s0, 0x5C0
    ctx->pc = 0x286bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x286bc8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286BC8u;
    {
        const bool branch_taken_0x286bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286bc8) {
            ctx->pc = 0x286BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286BC8u;
            // 0x286bcc: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286BECu;
            goto label_286bec;
        }
    }
    ctx->pc = 0x286BD0u;
    // 0x286bd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286bd4: 0xe60005c0  swc1        $f0, 0x5C0($s0)
    ctx->pc = 0x286bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    // 0x286bd8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x286bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286bdc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x286bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x286be0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x286be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286be4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x286be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x286be8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_286bec:
    // 0x286bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286bf0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x286bf4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_286bf8:
    // 0x286bf8: 0xc60105c0  lwc1        $f1, 0x5C0($s0)
    ctx->pc = 0x286bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286bfc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x286bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286c00: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x286c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x286c04: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x286c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x286c08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x286c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x286c0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x286c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x286c10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x286c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x286c14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286c18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x286c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x286c1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x286c20: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x286c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x286c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286c28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x286c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x286c2c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x286c30: 0xc60105c8  lwc1        $f1, 0x5C8($s0)
    ctx->pc = 0x286c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286c34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x286c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286c38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286c38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x286c3c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x286c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x286c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286c44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x286c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x286c48: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x286c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286c4c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x286c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286c50: 0x0  nop
    ctx->pc = 0x286c50u;
    // NOP
    // 0x286c54: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x286C54u;
    {
        const bool branch_taken_0x286c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286c54) {
            ctx->pc = 0x286C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286C54u;
            // 0x286c58: 0x92031560  lbu         $v1, 0x1560($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286C78u;
            goto label_286c78;
        }
    }
    ctx->pc = 0x286C5Cu;
    // 0x286c5c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286C5Cu;
    SET_GPR_U32(ctx, 31, 0x286C64u);
    ctx->pc = 0x286C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C5Cu;
    // 0x286c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286C5Cu, 0x286C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C64u;
label_286c64:
    // 0x286c64: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286C64u;
    SET_GPR_U32(ctx, 31, 0x286C6Cu);
    ctx->pc = 0x286C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C64u;
    // 0x286c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286C64u, 0x286C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C6Cu;
label_286c6c:
    // 0x286c6c: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286C6Cu;
    SET_GPR_U32(ctx, 31, 0x286C74u);
    ctx->pc = 0x286C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C6Cu;
    // 0x286c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286C6Cu, 0x286C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C74u;
label_286c74:
    // 0x286c74: 0x92031560  lbu         $v1, 0x1560($s0)
    ctx->pc = 0x286c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5472)));
label_286c78:
    // 0x286c78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x286c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x286c7c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x286C7Cu;
    {
        const bool branch_taken_0x286c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286c7c) {
            ctx->pc = 0x286C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286C7Cu;
            // 0x286c80: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CC0u;
            goto label_286cc0;
        }
    }
    ctx->pc = 0x286C84u;
    // 0x286c84: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x286c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286c88: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x286c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x286c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c90: 0x0  nop
    ctx->pc = 0x286c90u;
    // NOP
    // 0x286c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286c98: 0x0  nop
    ctx->pc = 0x286c98u;
    // NOP
    // 0x286c9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x286C9Cu;
    {
        const bool branch_taken_0x286c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286c9c) {
            ctx->pc = 0x286CB4u;
            goto label_286cb4;
        }
    }
    ctx->pc = 0x286CA4u;
    // 0x286ca4: 0xc0a24ca  jal         func_289328
    ctx->pc = 0x286CA4u;
    SET_GPR_U32(ctx, 31, 0x286CACu);
    ctx->pc = 0x286CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CA4u;
    // 0x286ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289328u, 0x286CA4u, 0x286CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CACu;
label_286cac:
    // 0x286cac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x286CACu;
    {
        const bool branch_taken_0x286cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286cac) {
            ctx->pc = 0x286CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CACu;
            // 0x286cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CCCu;
            goto label_286ccc;
        }
    }
    ctx->pc = 0x286CB4u;
label_286cb4:
    // 0x286cb4: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286CB4u;
    {
        const bool branch_taken_0x286cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x286cb4) {
            ctx->pc = 0x286CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CB4u;
            // 0x286cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CCCu;
            goto label_286ccc;
        }
    }
    ctx->pc = 0x286CBCu;
    // 0x286cbc: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
label_286cc0:
    // 0x286cc0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x286cc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286CC4u;
    {
        const bool branch_taken_0x286cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CC4u;
        // 0x286cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cc4) {
            ctx->pc = 0x286CF8u;
            goto label_286cf8;
        }
    }
    ctx->pc = 0x286CCCu;
label_286ccc:
    // 0x286ccc: 0x26051590  addiu       $a1, $s0, 0x1590
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x286cd0: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x286CD0u;
    SET_GPR_U32(ctx, 31, 0x286CD8u);
    ctx->pc = 0x286CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CD0u;
    // 0x286cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x286CD0u, 0x286CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CD8u;
label_286cd8:
    // 0x286cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cdc: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x286CDCu;
    SET_GPR_U32(ctx, 31, 0x286CE4u);
    ctx->pc = 0x286CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CDCu;
    // 0x286ce0: 0x26051570  addiu       $a1, $s0, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x286CDCu, 0x286CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CE4u;
label_286ce4:
    // 0x286ce4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x286ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286ce8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x286ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x286cec: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x286cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x286cf0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x286cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x286cf4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x286cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_286cf8:
    // 0x286cf8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x286cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286cfc:
    // 0x286cfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x286cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d04: 0x3e00008  jr          $ra
    ctx->pc = 0x286D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D04u;
        // 0x286d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D0Cu;
    // 0x286d0c: 0x0  nop
    ctx->pc = 0x286d0cu;
    // NOP
    ctx->pc = 0x286d10u;
}
