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

// Function: func_00115C00
// Address: 0x115c00 - 0x115f60
void func_00115C00_0x115c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00115C00_0x115c00");
#endif

    switch (ctx->pc) {
        case 0x115c94u: goto label_115c94;
        case 0x115c9cu: goto label_115c9c;
        case 0x115cd0u: goto label_115cd0;
        case 0x115ce4u: goto label_115ce4;
        case 0x115d08u: goto label_115d08;
        case 0x115d1cu: goto label_115d1c;
        case 0x115d44u: goto label_115d44;
        case 0x115d50u: goto label_115d50;
        case 0x115dfcu: goto label_115dfc;
        case 0x115e40u: goto label_115e40;
        case 0x115e68u: goto label_115e68;
        case 0x115e74u: goto label_115e74;
        case 0x115ec0u: goto label_115ec0;
        case 0x115ee0u: goto label_115ee0;
        case 0x115ef4u: goto label_115ef4;
        case 0x115efcu: goto label_115efc;
        case 0x115f10u: goto label_115f10;
        case 0x115f34u: goto label_115f34;
        case 0x115f40u: goto label_115f40;
        default: break;
    }

    ctx->pc = 0x115c00u;

    // 0x115c00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x115c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x115c04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x115c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x115c08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x115c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x115c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x115c10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x115c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x115c14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x115c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x115c18: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x115c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x115c1c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x115c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x115c20: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x115c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x115c24: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x115c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x115c28: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x115c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x115c2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x115c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x115c30: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x115c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x115c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115c3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115c40: 0x924502f6  lbu         $a1, 0x2F6($s2)
    ctx->pc = 0x115c40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x115c44: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x115c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x115c48: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x115C48u;
    {
        const bool branch_taken_0x115c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x115C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C48u;
        // 0x115c4c: 0xae420250  sw          $v0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c48) {
            ctx->pc = 0x115CDCu;
            goto label_115cdc;
        }
    }
    ctx->pc = 0x115C50u;
    // 0x115c50: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x115c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x115c54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115C54u;
    {
        const bool branch_taken_0x115c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c54) {
            ctx->pc = 0x115C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C54u;
            // 0x115c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C6Cu;
            goto label_115c6c;
        }
    }
    ctx->pc = 0x115C5Cu;
    // 0x115c5c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x115C5Cu;
    {
        const bool branch_taken_0x115c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C5Cu;
        // 0x115c60: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c5c) {
            ctx->pc = 0x115C84u;
            goto label_115c84;
        }
    }
    ctx->pc = 0x115C64u;
    // 0x115c64: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x115C64u;
    {
        const bool branch_taken_0x115c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C64u;
        // 0x115c68: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c64) {
            ctx->pc = 0x115F48u;
            goto label_115f48;
        }
    }
    ctx->pc = 0x115C6Cu;
label_115c6c:
    // 0x115c6c: 0x10a20083  beq         $a1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C6Cu;
        // 0x115c70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0x10a2009d  beq         $a1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x115C74u;
    {
        const bool branch_taken_0x115c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C74u;
        // 0x115c78: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c74) {
            ctx->pc = 0x115EECu;
            goto label_115eec;
        }
    }
    ctx->pc = 0x115C7Cu;
    // 0x115c7c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x115C7Cu;
    {
        const bool branch_taken_0x115c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C7Cu;
        // 0x115c80: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c7c) {
            ctx->pc = 0x115F48u;
            goto label_115f48;
        }
    }
    ctx->pc = 0x115C84u;
label_115c84:
    // 0x115c84: 0xa64005e0  sh          $zero, 0x5E0($s2)
    ctx->pc = 0x115c84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x115c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c8c: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x115C8Cu;
    SET_GPR_U32(ctx, 31, 0x115C94u);
    ctx->pc = 0x115C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C8Cu;
    // 0x115c90: 0xa64005e2  sh          $zero, 0x5E2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x115C8Cu, 0x115C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C94u;
label_115c94:
    // 0x115c94: 0xc049396  jal         func_124E58
    ctx->pc = 0x115C94u;
    SET_GPR_U32(ctx, 31, 0x115C9Cu);
    ctx->pc = 0x115C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C94u;
    // 0x115c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x115C94u, 0x115C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C9Cu;
label_115c9c:
    // 0x115c9c: 0xc6400670  lwc1        $f0, 0x670($s2)
    ctx->pc = 0x115c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ca4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x115ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cac: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x115cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x115cb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x115cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x115cb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115cb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cbc: 0x8c4508b0  lw          $a1, 0x8B0($v0)
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2224)));
    // 0x115cc0: 0x8c4608b4  lw          $a2, 0x8B4($v0)
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2228)));
    // 0x115cc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115cc8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x115CC8u;
    SET_GPR_U32(ctx, 31, 0x115CD0u);
    ctx->pc = 0x115CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CC8u;
    // 0x115ccc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115CC8u, 0x115CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CD0u;
label_115cd0:
    // 0x115cd0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x115cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x115cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115cd8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x115cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_115cdc:
    // 0x115cdc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x115CDCu;
    SET_GPR_U32(ctx, 31, 0x115CE4u);
    ctx->pc = 0x115CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CDCu;
    // 0x115ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x115CDCu, 0x115CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CE4u;
label_115ce4:
    // 0x115ce4: 0x8e4315f4  lw          $v1, 0x15F4($s2)
    ctx->pc = 0x115ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5620)));
    // 0x115ce8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x115ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x115cec: 0x24512fc0  addiu       $s1, $v0, 0x2FC0
    ctx->pc = 0x115cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x115cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x115cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cf4: 0x34632080  ori         $v1, $v1, 0x2080
    ctx->pc = 0x115cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8320);
    // 0x115cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cfc: 0xae4315f4  sw          $v1, 0x15F4($s2)
    ctx->pc = 0x115cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5620), GPR_U32(ctx, 3));
    // 0x115d00: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x115D00u;
    SET_GPR_U32(ctx, 31, 0x115D08u);
    ctx->pc = 0x115D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D00u;
    // 0x115d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x115D00u, 0x115D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D08u;
label_115d08:
    // 0x115d08: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x115d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x115d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d10: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x115d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x115d14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115D14u;
    SET_GPR_U32(ctx, 31, 0x115D1Cu);
    ctx->pc = 0x115D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D14u;
    // 0x115d18: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115D14u, 0x115D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D1Cu;
label_115d1c:
    // 0x115d1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115D1Cu;
    {
        const bool branch_taken_0x115d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D1Cu;
        // 0x115d20: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d1c) {
            ctx->pc = 0x115D30u;
            goto label_115d30;
        }
    }
    ctx->pc = 0x115D24u;
    // 0x115d24: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x115d28: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x115d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x115d2c: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x115d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_115d30:
    // 0x115d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115d34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x115d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d3c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x115D3Cu;
    SET_GPR_U32(ctx, 31, 0x115D44u);
    ctx->pc = 0x115D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D3Cu;
    // 0x115d40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x115D3Cu, 0x115D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D44u;
label_115d44:
    // 0x115d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d48: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x115D48u;
    SET_GPR_U32(ctx, 31, 0x115D50u);
    ctx->pc = 0x115D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D48u;
    // 0x115d4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x115D48u, 0x115D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D50u;
label_115d50:
    // 0x115d50: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x115d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x115d54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x115d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x115d58: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x115D58u;
    {
        const bool branch_taken_0x115d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D58u;
        // 0x115d5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d58) {
            ctx->pc = 0x115E4Cu;
            goto label_115e4c;
        }
    }
    ctx->pc = 0x115D60u;
    // 0x115d60: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115d64: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115D64u;
    {
        const bool branch_taken_0x115d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x115D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D64u;
        // 0x115d68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d64) {
            ctx->pc = 0x115D88u;
            goto label_115d88;
        }
    }
    ctx->pc = 0x115D6Cu;
    // 0x115d6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115d70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x115d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x115d74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115d78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x115d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x115d7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115d80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x115d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x115d84: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x115d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_115d88:
    // 0x115d88: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115D88u;
    {
        const bool branch_taken_0x115d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D88u;
        // 0x115d8c: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d88) {
            ctx->pc = 0x115DACu;
            goto label_115dac;
        }
    }
    ctx->pc = 0x115D90u;
    // 0x115d90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115d94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x115d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x115d98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115d9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x115d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115da0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115da4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x115da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115da8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x115da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_115dac:
    // 0x115dac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x115dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115db0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x115db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115db4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x115db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x115db8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x115db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x115dbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x115dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dc4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x115dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x115dc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115dcc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115dccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115dd0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115dd4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x115dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x115dd8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x115dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ddc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x115ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115de0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115de4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x115de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x115de8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x115de8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x115decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x115df0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x115df0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115df4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x115DF4u;
    SET_GPR_U32(ctx, 31, 0x115DFCu);
    ctx->pc = 0x115DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DF4u;
    // 0x115df8: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x115DF4u, 0x115DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DFCu;
label_115dfc:
    // 0x115dfc: 0x54500014  bnel        $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x115DFCu;
    {
        const bool branch_taken_0x115dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x115dfc) {
            ctx->pc = 0x115E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115DFCu;
            // 0x115e00: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E50u;
            goto label_115e50;
        }
    }
    ctx->pc = 0x115E04u;
    // 0x115e04: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x115e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115e0c: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x115e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x115e10: 0x2408ff7f  addiu       $t0, $zero, -0x81
    ctx->pc = 0x115e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x115e14: 0x2407dfff  addiu       $a3, $zero, -0x2001
    ctx->pc = 0x115e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x115e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e1c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x115e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x115e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x115e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e24: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x115e24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x115e28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x115e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115e2c: 0x8e4215f4  lw          $v0, 0x15F4($s2)
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5620)));
    // 0x115e30: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x115e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x115e34: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x115e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x115e38: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x115E38u;
    SET_GPR_U32(ctx, 31, 0x115E40u);
    ctx->pc = 0x115E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E38u;
    // 0x115e3c: 0xae4215f4  sw          $v0, 0x15F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x115E38u, 0x115E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E40u;
label_115e40:
    // 0x115e40: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x115e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x115e44: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x115e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x115e48: 0xa64203ac  sh          $v0, 0x3AC($s2)
    ctx->pc = 0x115e48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 940), (uint16_t)GPR_U32(ctx, 2));
label_115e4c:
    // 0x115e4c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x115e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_115e50:
    // 0x115e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x115e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x115e54: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x115E54u;
    {
        const bool branch_taken_0x115e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E54u;
        // 0x115e58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e54) {
            ctx->pc = 0x115F40u;
            goto label_115f40;
        }
    }
    ctx->pc = 0x115E5Cu;
    // 0x115e5c: 0xa640054a  sh          $zero, 0x54A($s2)
    ctx->pc = 0x115e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x115e60: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x115E60u;
    SET_GPR_U32(ctx, 31, 0x115E68u);
    ctx->pc = 0x115E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E60u;
    // 0x115e64: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x115E60u, 0x115E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E68u;
label_115e68:
    // 0x115e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e6c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x115E6Cu;
    SET_GPR_U32(ctx, 31, 0x115E74u);
    ctx->pc = 0x115E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E6Cu;
    // 0x115e70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x115E6Cu, 0x115E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E74u;
label_115e74:
    // 0x115e74: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x115E74u;
    {
        const bool branch_taken_0x115e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E74u;
        // 0x115e78: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e74) {
            ctx->pc = 0x115F44u;
            goto label_115f44;
        }
    }
    ctx->pc = 0x115E7Cu;
label_115e7c:
    // 0x115e7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x115e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x115e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x115e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115e88: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x115e8c: 0x8c5108d0  lw          $s1, 0x8D0($v0)
    ctx->pc = 0x115e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2256)));
    // 0x115e90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x115e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e94: 0x8c5008d4  lw          $s0, 0x8D4($v0)
    ctx->pc = 0x115e94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2260)));
    // 0x115e98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x115e98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x115e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115ea0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x115ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x115ea4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x115ea4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x115ea8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115eac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x115eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115eb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115eb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115eb8: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x115EB8u;
    SET_GPR_U32(ctx, 31, 0x115EC0u);
    ctx->pc = 0x115EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EB8u;
    // 0x115ebc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x115EB8u, 0x115EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EC0u;
label_115ec0:
    // 0x115ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x115ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x115ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ec8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115ec8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x115ED8u;
    SET_GPR_U32(ctx, 31, 0x115EE0u);
    ctx->pc = 0x115EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ED8u;
    // 0x115edc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115ED8u, 0x115EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EE0u;
label_115ee0:
    // 0x115ee0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x115ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x115ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115ee8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x115ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_115eec:
    // 0x115eec: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x115EECu;
    SET_GPR_U32(ctx, 31, 0x115EF4u);
    ctx->pc = 0x115EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EECu;
    // 0x115ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x115EECu, 0x115EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EF4u;
label_115ef4:
    // 0x115ef4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115EF4u;
    SET_GPR_U32(ctx, 31, 0x115EFCu);
    ctx->pc = 0x115EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EF4u;
    // 0x115ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115EF4u, 0x115EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EFCu;
label_115efc:
    // 0x115efc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115EFCu;
    {
        const bool branch_taken_0x115efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EFCu;
        // 0x115f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115efc) {
            ctx->pc = 0x115F20u;
            goto label_115f20;
        }
    }
    ctx->pc = 0x115F04u;
    // 0x115f04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115f08: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x115F08u;
    SET_GPR_U32(ctx, 31, 0x115F10u);
    ctx->pc = 0x115F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F08u;
    // 0x115f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x115F08u, 0x115F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F10u;
label_115f10:
    // 0x115f10: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x115f10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f14: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x115f14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f18: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x115f18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f1c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x115f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_115f20:
    // 0x115f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115f24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x115f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f2c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x115F2Cu;
    SET_GPR_U32(ctx, 31, 0x115F34u);
    ctx->pc = 0x115F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F2Cu;
    // 0x115f30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x115F2Cu, 0x115F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F34u;
label_115f34:
    // 0x115f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f38: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x115F38u;
    SET_GPR_U32(ctx, 31, 0x115F40u);
    ctx->pc = 0x115F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F38u;
    // 0x115f3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x115F38u, 0x115F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F40u;
label_115f40:
    // 0x115f40: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x115f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_115f44:
    // 0x115f44: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x115f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_115f48:
    // 0x115f48: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x115f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115f4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x115f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115f50: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x115f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115f54: 0x3e00008  jr          $ra
    ctx->pc = 0x115F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F54u;
        // 0x115f58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F5Cu;
    // 0x115f5c: 0x0  nop
    ctx->pc = 0x115f5cu;
    // NOP
    ctx->pc = 0x115f60u;
}
