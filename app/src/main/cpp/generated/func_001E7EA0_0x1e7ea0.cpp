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

// Function: func_001E7EA0
// Address: 0x1e7ea0 - 0x1e8798
void func_001E7EA0_0x1e7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7EA0_0x1e7ea0");
#endif

    switch (ctx->pc) {
        case 0x1e7f14u: goto label_1e7f14;
        case 0x1e7f38u: goto label_1e7f38;
        case 0x1e7fccu: goto label_1e7fcc;
        case 0x1e7fe4u: goto label_1e7fe4;
        case 0x1e8028u: goto label_1e8028;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80c0u: goto label_1e80c0;
        case 0x1e8170u: goto label_1e8170;
        case 0x1e8230u: goto label_1e8230;
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e85e0u: goto label_1e85e0;
        case 0x1e86a0u: goto label_1e86a0;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e8728u: goto label_1e8728;
        case 0x1e873cu: goto label_1e873c;
        case 0x1e8744u: goto label_1e8744;
        case 0x1e8768u: goto label_1e8768;
        default: break;
    }

    ctx->pc = 0x1e7ea0u;

    // 0x1e7ea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e7ea4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e7ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e7ea8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e7ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e7eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e7eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e7eb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e7eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e7eb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e7ebc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e7ec0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1e7ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1e7ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7ec8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1e7ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e7ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7ed0: 0x50400226  beql        $v0, $zero, . + 4 + (0x226 << 2)
    ctx->pc = 0x1E7ED0u;
    {
        const bool branch_taken_0x1e7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ed0) {
            ctx->pc = 0x1E7ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7ED0u;
            // 0x1e7ed4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E876Cu;
            goto label_1e876c;
        }
    }
    ctx->pc = 0x1E7ED8u;
    // 0x1e7ed8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7edc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1e7edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e7ee0: 0x1040021f  beqz        $v0, . + 4 + (0x21F << 2)
    ctx->pc = 0x1E7EE0u;
    {
        const bool branch_taken_0x1e7ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EE0u;
        // 0x1e7ee4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ee0) {
            ctx->pc = 0x1E8760u;
            goto label_1e8760;
        }
    }
    ctx->pc = 0x1E7EE8u;
    // 0x1e7ee8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7eec: 0x2442bb60  addiu       $v0, $v0, -0x44A0
    ctx->pc = 0x1e7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949728));
    // 0x1e7ef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7ef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7ef8: 0x800008  jr          $a0
    ctx->pc = 0x1E7EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7F00u: goto label_1e7f00;
            case 0x1E7F8Cu: goto label_1e7f8c;
            case 0x1E8010u: goto label_1e8010;
            case 0x1E8698u: goto label_1e8698;
            case 0x1E8760u: goto label_1e8760;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7EF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E7F00u;
label_1e7f00:
    // 0x1e7f00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e7f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e7f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f08: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1e7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1e7f0c: 0xc07a3de  jal         func_1E8F78
    ctx->pc = 0x1E7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F14u);
    ctx->pc = 0x1E7F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F0Cu;
    // 0x1e7f10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F78u, 0x1E7F0Cu, 0x1E7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F14u;
label_1e7f14:
    // 0x1e7f14: 0xe6140100  swc1        $f20, 0x100($s0)
    ctx->pc = 0x1e7f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1e7f18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1e7f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e7f1c: 0x260700f4  addiu       $a3, $s0, 0xF4
    ctx->pc = 0x1e7f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x1e7f20: 0x260600e8  addiu       $a2, $s0, 0xE8
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1e7f24: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1e7f28: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x1e7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e7f2c: 0x260200c4  addiu       $v0, $s0, 0xC4
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x1e7f30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7f34: 0x0  nop
    ctx->pc = 0x1e7f34u;
    // NOP
label_1e7f38:
    // 0x1e7f38: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e7f3c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1e7f40: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1e7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1e7f44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e7f48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e7f4c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1e7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e7f50: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1e7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1e7f54: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1e7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e7f58: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1e7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1e7f5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e7f60: 0x501fff5  bgez        $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7F60u;
    {
        const bool branch_taken_0x1e7f60 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x1E7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F60u;
        // 0x1e7f64: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f60) {
            ctx->pc = 0x1E7F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7f38;
        }
    }
    ctx->pc = 0x1E7F68u;
    // 0x1e7f68: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e7f6c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e7f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7f74: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1e7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1e7f78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e7f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e7f7c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1e7f80: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1e7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1e7f84: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x1E7F84u;
    {
        const bool branch_taken_0x1e7f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F84u;
        // 0x1e7f88: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f84) {
            ctx->pc = 0x1E875Cu;
            goto label_1e875c;
        }
    }
    ctx->pc = 0x1E7F8Cu;
label_1e7f8c:
    // 0x1e7f8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7F90u;
    {
        const bool branch_taken_0x1e7f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F90u;
        // 0x1e7f94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f90) {
            ctx->pc = 0x1E7FA4u;
            goto label_1e7fa4;
        }
    }
    ctx->pc = 0x1E7F98u;
    // 0x1e7f98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e7f98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7F9Cu;
    {
        const bool branch_taken_0x1e7f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F9Cu;
        // 0x1e7fa0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f9c) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7FA4u;
label_1e7fa4:
    // 0x1e7fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7fa8:
    // 0x1e7fa8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e7fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e7fac: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7FACu;
    {
        const bool branch_taken_0x1e7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fac) {
            ctx->pc = 0x1E7FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7FACu;
            // 0x1e7fb0: 0x8e0300c0  lw          $v1, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7FD4u;
            goto label_1e7fd4;
        }
    }
    ctx->pc = 0x1E7FB4u;
    // 0x1e7fb4: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x1e7fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x1e7fb8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1e7fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1e7fbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fc4: 0xc07a40a  jal         func_1E9028
    ctx->pc = 0x1E7FC4u;
    SET_GPR_U32(ctx, 31, 0x1E7FCCu);
    ctx->pc = 0x1E7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FC4u;
    // 0x1e7fc8: 0xc60d00bc  lwc1        $f13, 0xBC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9028u, 0x1E7FC4u, 0x1E7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FCCu;
label_1e7fcc:
    // 0x1e7fcc: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x1E7FCCu;
    {
        const bool branch_taken_0x1e7fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fcc) {
            ctx->pc = 0x1E8760u;
            goto label_1e8760;
        }
    }
    ctx->pc = 0x1E7FD4u;
label_1e7fd4:
    // 0x1e7fd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7fd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e7fdc: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x1E7FDCu;
    {
        const bool branch_taken_0x1e7fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FDCu;
        // 0x1e7fe0: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fdc) {
            ctx->pc = 0x1E8754u;
            goto label_1e8754;
        }
    }
    ctx->pc = 0x1E7FE4u;
label_1e7fe4:
    // 0x1e7fe4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e7fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fe8: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e7fec: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e7fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e7ff0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7ff4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e7ff4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7ff8: 0x0  nop
    ctx->pc = 0x1e7ff8u;
    // NOP
    // 0x1e7ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8000: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8008: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1E8008u;
    {
        const bool branch_taken_0x1e8008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8008u;
        // 0x1e800c: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8008) {
            ctx->pc = 0x1E80F8u;
            goto label_1e80f8;
        }
    }
    ctx->pc = 0x1E8010u;
label_1e8010:
    // 0x1e8010: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e8014: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e8014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e8018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e801c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e8020: 0xc07a41e  jal         func_1E9078
    ctx->pc = 0x1E8020u;
    SET_GPR_U32(ctx, 31, 0x1E8028u);
    ctx->pc = 0x1E8024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8020u;
    // 0x1e8024: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9078u, 0x1E8020u, 0x1E8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8028u;
label_1e8028:
    // 0x1e8028: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e8028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e802c: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e802cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8038: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1e803c: 0x0  nop
    ctx->pc = 0x1e803cu;
    // NOP
    // 0x1e8040: 0x0  nop
    ctx->pc = 0x1e8040u;
    // NOP
    // 0x1e8044: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e8044u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1e8048: 0x38c40009  xori        $a0, $a2, 0x9
    ctx->pc = 0x1e8048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
    // 0x1e804c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e804cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e8050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e8054: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8058: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e805c: 0x29230015  slti        $v1, $t1, 0x15
    ctx->pc = 0x1e805cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8060: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8060u;
    {
        const bool branch_taken_0x1e8060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8060u;
        // 0x1e8064: 0x43480a  movz        $t1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8060) {
            ctx->pc = 0x1E8078u;
            goto label_1e8078;
        }
    }
    ctx->pc = 0x1E8068u;
    // 0x1e8068: 0x9e0200c0  lwu         $v0, 0xC0($s0)
    ctx->pc = 0x1e8068u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e806c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1e806cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1e8070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e8074: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1e8074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e8078:
    // 0x1e8078: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e807c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E807Cu;
    {
        const bool branch_taken_0x1e807c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E807Cu;
        // 0x1e8080: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e807c) {
            ctx->pc = 0x1E8128u;
            goto label_1e8128;
        }
    }
    ctx->pc = 0x1E8084u;
    // 0x1e8084: 0x96020104  lhu         $v0, 0x104($s0)
    ctx->pc = 0x1e8084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1e8088: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e8088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e808c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e808cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8090: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e8090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8094: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1e8094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e8098: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E8098u;
    {
        const bool branch_taken_0x1e8098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8098u;
        // 0x1e809c: 0x260b0054  addiu       $t3, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8098) {
            ctx->pc = 0x1E80F8u;
            goto label_1e80f8;
        }
    }
    ctx->pc = 0x1E80A0u;
    // 0x1e80a0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1e80a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e80a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80a8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x1e80a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80ac: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x1e80acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1e80b0:
    // 0x1e80b0: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x1e80b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e80b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E80B4u;
    {
        const bool branch_taken_0x1e80b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80B4u;
        // 0x1e80b8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80b4) {
            ctx->pc = 0x1E80DCu;
            goto label_1e80dc;
        }
    }
    ctx->pc = 0x1E80BCu;
    // 0x1e80bc: 0x24c6ffeb  addiu       $a2, $a2, -0x15
    ctx->pc = 0x1e80bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
label_1e80c0:
    // 0x1e80c0: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x1e80c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e80c4: 0x0  nop
    ctx->pc = 0x1e80c4u;
    // NOP
    // 0x1e80c8: 0x0  nop
    ctx->pc = 0x1e80c8u;
    // NOP
    // 0x1e80cc: 0x0  nop
    ctx->pc = 0x1e80ccu;
    // NOP
    // 0x1e80d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E80D0u;
    {
        const bool branch_taken_0x1e80d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e80d0) {
            ctx->pc = 0x1E80D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E80D0u;
            // 0x1e80d4: 0x24c6ffeb  addiu       $a2, $a2, -0x15 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E80C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e80c0;
        }
    }
    ctx->pc = 0x1E80D8u;
    // 0x1e80d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e80dc:
    // 0x1e80dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e80e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e80e4: 0x1064ffbf  beq         $v1, $a0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1E80E4u;
    {
        const bool branch_taken_0x1e80e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80E4u;
        // 0x1e80e8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80e4) {
            ctx->pc = 0x1E7FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7fe4;
        }
    }
    ctx->pc = 0x1E80ECu;
    // 0x1e80ec: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x1e80ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1e80f0: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E80F0u;
    {
        const bool branch_taken_0x1e80f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80F0u;
        // 0x1e80f4: 0x1283021  addu        $a2, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80f0) {
            ctx->pc = 0x1E80B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e80b0;
        }
    }
    ctx->pc = 0x1E80F8u;
label_1e80f8:
    // 0x1e80f8: 0x15800086  bnez        $t4, . + 4 + (0x86 << 2)
    ctx->pc = 0x1E80F8u;
    {
        const bool branch_taken_0x1e80f8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80F8u;
        // 0x1e80fc: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80f8) {
            ctx->pc = 0x1E8314u;
            goto label_1e8314;
        }
    }
    ctx->pc = 0x1E8100u;
    // 0x1e8100: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1e8100u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8104: 0x0  nop
    ctx->pc = 0x1e8104u;
    // NOP
    // 0x1e8108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e810c: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e810cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8110: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8118: 0x0  nop
    ctx->pc = 0x1e8118u;
    // NOP
    // 0x1e811c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e811cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8120: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1E8120u;
    {
        const bool branch_taken_0x1e8120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8120u;
        // 0x1e8124: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8120) {
            ctx->pc = 0x1E8314u;
            goto label_1e8314;
        }
    }
    ctx->pc = 0x1E8128u;
label_1e8128:
    // 0x1e8128: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1e812c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8130: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1e8130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1e8134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8134u;
    {
        const bool branch_taken_0x1e8134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8134u;
        // 0x1e8138: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8134) {
            ctx->pc = 0x1E814Cu;
            goto label_1e814c;
        }
    }
    ctx->pc = 0x1E813Cu;
    // 0x1e813c: 0x9e0200c0  lwu         $v0, 0xC0($s0)
    ctx->pc = 0x1e813cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e8140: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1e8140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1e8144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e8148: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1e8148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e814c:
    // 0x1e814c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8150: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E8150u;
    {
        const bool branch_taken_0x1e8150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8150u;
        // 0x1e8154: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8150) {
            ctx->pc = 0x1E81ECu;
            goto label_1e81ec;
        }
    }
    ctx->pc = 0x1E8158u;
    // 0x1e8158: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e8158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e815c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e815cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8160: 0x96070104  lhu         $a3, 0x104($s0)
    ctx->pc = 0x1e8160u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1e8164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8164u;
    {
        const bool branch_taken_0x1e8164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8164u;
        // 0x1e8168: 0x260b0054  addiu       $t3, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8164) {
            ctx->pc = 0x1E8180u;
            goto label_1e8180;
        }
    }
    ctx->pc = 0x1E816Cu;
    // 0x1e816c: 0x0  nop
    ctx->pc = 0x1e816cu;
    // NOP
label_1e8170:
    // 0x1e8170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8174: 0x28a30015  slti        $v1, $a1, 0x15
    ctx->pc = 0x1e8174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8178: 0x24a2ffeb  addiu       $v0, $a1, -0x15
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x1e817c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1e817cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1e8180:
    // 0x1e8180: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1e8180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e8184: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E8184u;
    {
        const bool branch_taken_0x1e8184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8184u;
        // 0x1e8188: 0x24a4ffff  addiu       $a0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8184) {
            ctx->pc = 0x1E81DCu;
            goto label_1e81dc;
        }
    }
    ctx->pc = 0x1E818Cu;
    // 0x1e818c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E818Cu;
    {
        const bool branch_taken_0x1e818c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E818Cu;
        // 0x1e8190: 0x28830015  slti        $v1, $a0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e818c) {
            ctx->pc = 0x1E819Cu;
            goto label_1e819c;
        }
    }
    ctx->pc = 0x1E8194u;
    // 0x1e8194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8194u;
    {
        const bool branch_taken_0x1e8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8194u;
        // 0x1e8198: 0x24a40014  addiu       $a0, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8194) {
            ctx->pc = 0x1E81A4u;
            goto label_1e81a4;
        }
    }
    ctx->pc = 0x1E819Cu;
label_1e819c:
    // 0x1e819c: 0x24a2ffea  addiu       $v0, $a1, -0x16
    ctx->pc = 0x1e819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
    // 0x1e81a0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x1e81a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1e81a4:
    // 0x1e81a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e81a8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1e81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1e81ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e81b0: 0x546affef  bnel        $v1, $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E81B0u;
    {
        const bool branch_taken_0x1e81b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e81b0) {
            ctx->pc = 0x1E81B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E81B0u;
            // 0x1e81b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8170;
        }
    }
    ctx->pc = 0x1E81B8u;
    // 0x1e81b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e81b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e81bc: 0x0  nop
    ctx->pc = 0x1e81bcu;
    // NOP
    // 0x1e81c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e81c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e81c4: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e81c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e81c8: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e81c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e81cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e81ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e81d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e81d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e81d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e81d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e81d8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1e81d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1e81dc:
    // 0x1e81dc: 0x1100002f  beqz        $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E81DCu;
    {
        const bool branch_taken_0x1e81dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81DCu;
        // 0x1e81e0: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81dc) {
            ctx->pc = 0x1E829Cu;
            goto label_1e829c;
        }
    }
    ctx->pc = 0x1E81E4u;
    // 0x1e81e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E81E4u;
    {
        const bool branch_taken_0x1e81e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81E4u;
        // 0x1e81e8: 0x24a3ffec  addiu       $v1, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81e4) {
            ctx->pc = 0x1E8318u;
            goto label_1e8318;
        }
    }
    ctx->pc = 0x1E81ECu;
label_1e81ec:
    // 0x1e81ec: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1e81f0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1e81f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81f4: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1e81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1e81f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E81F8u;
    {
        const bool branch_taken_0x1e81f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81F8u;
        // 0x1e81fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81f8) {
            ctx->pc = 0x1E8210u;
            goto label_1e8210;
        }
    }
    ctx->pc = 0x1E8200u;
    // 0x1e8200: 0x9e0200c0  lwu         $v0, 0xC0($s0)
    ctx->pc = 0x1e8200u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e8204: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1e8204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1e8208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e820c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1e820cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e8210:
    // 0x1e8210: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e8210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e8214: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1E8214u;
    {
        const bool branch_taken_0x1e8214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8214u;
        // 0x1e8218: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8214) {
            ctx->pc = 0x1E8368u;
            goto label_1e8368;
        }
    }
    ctx->pc = 0x1E821Cu;
    // 0x1e821c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e821cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8224: 0x96070104  lhu         $a3, 0x104($s0)
    ctx->pc = 0x1e8224u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1e8228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8228u;
    {
        const bool branch_taken_0x1e8228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8228u;
        // 0x1e822c: 0x260b0054  addiu       $t3, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8228) {
            ctx->pc = 0x1E8240u;
            goto label_1e8240;
        }
    }
    ctx->pc = 0x1E8230u;
label_1e8230:
    // 0x1e8230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e8234: 0x28a30015  slti        $v1, $a1, 0x15
    ctx->pc = 0x1e8234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8238: 0x24a2ffeb  addiu       $v0, $a1, -0x15
    ctx->pc = 0x1e8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x1e823c: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1e823cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1e8240:
    // 0x1e8240: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1e8240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1e8244: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8244u;
    {
        const bool branch_taken_0x1e8244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8244u;
        // 0x1e8248: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8244) {
            ctx->pc = 0x1E8294u;
            goto label_1e8294;
        }
    }
    ctx->pc = 0x1E824Cu;
    // 0x1e824c: 0x24a4ffec  addiu       $a0, $a1, -0x14
    ctx->pc = 0x1e824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x1e8250: 0x28430015  slti        $v1, $v0, 0x15
    ctx->pc = 0x1e8250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8254: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e8254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8258: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1e8258u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e825c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e825cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8260: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1e8264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8268: 0x546cfff1  bnel        $v1, $t4, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E8268u;
    {
        const bool branch_taken_0x1e8268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x1e8268) {
            ctx->pc = 0x1E826Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8268u;
            // 0x1e826c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8230;
        }
    }
    ctx->pc = 0x1E8270u;
    // 0x1e8270: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e8270u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8274: 0x0  nop
    ctx->pc = 0x1e8274u;
    // NOP
    // 0x1e8278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e827c: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8280: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e8284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8288: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e828c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e828cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8290: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1e8290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1e8294:
    // 0x1e8294: 0x1540001f  bnez        $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E8294u;
    {
        const bool branch_taken_0x1e8294 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8294u;
        // 0x1e8298: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8294) {
            ctx->pc = 0x1E8314u;
            goto label_1e8314;
        }
    }
    ctx->pc = 0x1E829Cu;
label_1e829c:
    // 0x1e829c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1e829cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e82a0: 0x0  nop
    ctx->pc = 0x1e82a0u;
    // NOP
    // 0x1e82a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e82a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e82a8: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e82a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e82ac: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e82acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e82b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e82b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e82b4: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1e82b8: 0x2524ffec  addiu       $a0, $t1, -0x14
    ctx->pc = 0x1e82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967276));
    // 0x1e82bc: 0x29020015  slti        $v0, $t0, 0x15
    ctx->pc = 0x1e82bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e82c0: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x1e82c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e82c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e82c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e82c8: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x1e82c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x1e82cc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e82d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e82d4: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1e82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1e82d8: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x1e82d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1e82dc: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1e82dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1e82e0: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1e82e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1e82e4: 0x25250014  addiu       $a1, $t1, 0x14
    ctx->pc = 0x1e82e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x1e82e8: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1e82ec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e82f0: 0xa2400a  movz        $t0, $a1, $v0
    ctx->pc = 0x1e82f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1e82f4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1e82f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e82f8: 0xae0600f4  sw          $a2, 0xF4($s0)
    ctx->pc = 0x1e82f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 6));
    // 0x1e82fc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1e82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1e8300: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e8300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e8304: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1e8304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1e8308: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e830c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1E830Cu;
    {
        const bool branch_taken_0x1e830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E830Cu;
        // 0x1e8310: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e830c) {
            ctx->pc = 0x1E8688u;
            goto label_1e8688;
        }
    }
    ctx->pc = 0x1E8314u;
label_1e8314:
    // 0x1e8314: 0x24a3ffec  addiu       $v1, $a1, -0x14
    ctx->pc = 0x1e8314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
label_1e8318:
    // 0x1e8318: 0x28e20015  slti        $v0, $a3, 0x15
    ctx->pc = 0x1e8318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e831c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1e831cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8320: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x1e8320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1e8324: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1e8324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1e8328: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e8328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e832c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8330: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1e8334: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x1e8334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1e8338: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e8338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e833c: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1e833cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e8340: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x1e8340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1e8344: 0xae0400f4  sw          $a0, 0xF4($s0)
    ctx->pc = 0x1e8344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
    // 0x1e8348: 0xa3380a  movz        $a3, $a1, $v1
    ctx->pc = 0x1e8348u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x1e834c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e834cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8350: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8354: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1e8358: 0xae0400f8  sw          $a0, 0xF8($s0)
    ctx->pc = 0x1e8358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 4));
    // 0x1e835c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8360: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1E8360u;
    {
        const bool branch_taken_0x1e8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8360u;
        // 0x1e8364: 0xae0300fc  sw          $v1, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8360) {
            ctx->pc = 0x1E8688u;
            goto label_1e8688;
        }
    }
    ctx->pc = 0x1E8368u;
label_1e8368:
    // 0x1e8368: 0x9e0200c0  lwu         $v0, 0xC0($s0)
    ctx->pc = 0x1e8368u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e836c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1e836cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1e8370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e8374: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1E8374u;
    {
        const bool branch_taken_0x1e8374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8374u;
        // 0x1e8378: 0x260b0054  addiu       $t3, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8374) {
            ctx->pc = 0x1E84D0u;
            goto label_1e84d0;
        }
    }
    ctx->pc = 0x1E837Cu;
    // 0x1e837c: 0x8e1500d0  lw          $s5, 0xD0($s0)
    ctx->pc = 0x1e837cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1e8380: 0x8e1400dc  lw          $s4, 0xDC($s0)
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1e8384: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1e8384u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8388: 0x8e1300e8  lw          $s3, 0xE8($s0)
    ctx->pc = 0x1e8388u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1e838c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1e838cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8390: 0x261200d0  addiu       $s2, $s0, 0xD0
    ctx->pc = 0x1e8390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e8394: 0x261100dc  addiu       $s1, $s0, 0xDC
    ctx->pc = 0x1e8394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1e8398: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e839c: 0x261900e8  addiu       $t9, $s0, 0xE8
    ctx->pc = 0x1e839cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1e83a0:
    // 0x1e83a0: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e83a4: 0x24e2ffec  addiu       $v0, $a3, -0x14
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
    // 0x1e83a8: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x1e83a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e83ac: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1e83acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83b0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1e83b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1e83b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e83b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e83bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e83bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83c0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e83c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e83c8: 0x1055000d  beq         $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1E83C8u;
    {
        const bool branch_taken_0x1e83c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1E83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83C8u;
        // 0x1e83cc: 0x24f80001  addiu       $t8, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83c8) {
            ctx->pc = 0x1E8400u;
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E83D0u;
    // 0x1e83d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e83d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e83d4: 0x0  nop
    ctx->pc = 0x1e83d4u;
    // NOP
label_1e83d8:
    // 0x1e83d8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e83d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e83dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E83DCu;
    {
        const bool branch_taken_0x1e83dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83DCu;
        // 0x1e83e0: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83dc) {
            ctx->pc = 0x1E8404u;
            goto label_1e8404;
        }
    }
    ctx->pc = 0x1E83E4u;
    // 0x1e83e4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1e83e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e83e8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e83e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e83ec: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e83f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e83f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e83f8: 0x54a2fff7  bnel        $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E83F8u;
    {
        const bool branch_taken_0x1e83f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e83f8) {
            ctx->pc = 0x1E83FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E83F8u;
            // 0x1e83fc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E83D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83d8;
        }
    }
    ctx->pc = 0x1E8400u;
label_1e8400:
    // 0x1e8400: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8404:
    // 0x1e8404: 0x5520002e  bnel        $t1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E8404u;
    {
        const bool branch_taken_0x1e8404 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8404) {
            ctx->pc = 0x1E8408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8404u;
            // 0x1e8408: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E84C0u;
            goto label_1e84c0;
        }
    }
    ctx->pc = 0x1E840Cu;
    // 0x1e840c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8410: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x1e8410u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8414: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e8418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e841c: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1E841Cu;
    {
        const bool branch_taken_0x1e841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1E8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E841Cu;
        // 0x1e8420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e841c) {
            ctx->pc = 0x1E844Cu;
            goto label_1e844c;
        }
    }
    ctx->pc = 0x1E8424u;
    // 0x1e8424: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8428:
    // 0x1e8428: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1e8428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e842c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E842Cu;
    {
        const bool branch_taken_0x1e842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E842Cu;
        // 0x1e8430: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e842c) {
            ctx->pc = 0x1E8450u;
            goto label_1e8450;
        }
    }
    ctx->pc = 0x1E8434u;
    // 0x1e8434: 0x14e2021  addu        $a0, $t2, $t6
    ctx->pc = 0x1e8434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1e8438: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e843c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8444: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E8444u;
    {
        const bool branch_taken_0x1e8444 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8444u;
        // 0x1e8448: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8444) {
            ctx->pc = 0x1E8428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8428;
        }
    }
    ctx->pc = 0x1E844Cu;
label_1e844c:
    // 0x1e844c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8450:
    // 0x1e8450: 0x5520001b  bnel        $t1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E8450u;
    {
        const bool branch_taken_0x1e8450 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8450) {
            ctx->pc = 0x1E8454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8450u;
            // 0x1e8454: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E84C0u;
            goto label_1e84c0;
        }
    }
    ctx->pc = 0x1E8458u;
    // 0x1e8458: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e845c: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1e8460: 0x2c6182a  slt         $v1, $s6, $a2
    ctx->pc = 0x1e8460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e8464: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8468: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1e8468u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1e846c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e846cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8470: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8474: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1e8478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e847c: 0x1073000c  beq         $v1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1E847Cu;
    {
        const bool branch_taken_0x1e847c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E847Cu;
        // 0x1e8480: 0x24edffff  addiu       $t5, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e847c) {
            ctx->pc = 0x1E84B0u;
            goto label_1e84b0;
        }
    }
    ctx->pc = 0x1E8484u;
    // 0x1e8484: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e8488:
    // 0x1e8488: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e8488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e848c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E848Cu;
    {
        const bool branch_taken_0x1e848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E848Cu;
        // 0x1e8490: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e848c) {
            ctx->pc = 0x1E84B4u;
            goto label_1e84b4;
        }
    }
    ctx->pc = 0x1E8494u;
    // 0x1e8494: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8498: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e849c: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x1e849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x1e84a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e84a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e84a8: 0x14a2fff7  bne         $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E84A8u;
    {
        const bool branch_taken_0x1e84a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84A8u;
        // 0x1e84ac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84a8) {
            ctx->pc = 0x1E8488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8488;
        }
    }
    ctx->pc = 0x1E84B0u;
label_1e84b0:
    // 0x1e84b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e84b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e84b4:
    // 0x1e84b4: 0x1120005c  beqz        $t1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1E84B4u;
    {
        const bool branch_taken_0x1e84b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84b4) {
            ctx->pc = 0x1E8628u;
            goto label_1e8628;
        }
    }
    ctx->pc = 0x1E84BCu;
    // 0x1e84bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e84c0:
    // 0x1e84c0: 0x28e30015  slti        $v1, $a3, 0x15
    ctx->pc = 0x1e84c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e84c4: 0x24e2ffeb  addiu       $v0, $a3, -0x15
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967275));
    // 0x1e84c8: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E84C8u;
    {
        const bool branch_taken_0x1e84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84C8u;
        // 0x1e84cc: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84c8) {
            ctx->pc = 0x1E83A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83a0;
        }
    }
    ctx->pc = 0x1E84D0u;
label_1e84d0:
    // 0x1e84d0: 0x8e1500d0  lw          $s5, 0xD0($s0)
    ctx->pc = 0x1e84d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1e84d4: 0x8e1400dc  lw          $s4, 0xDC($s0)
    ctx->pc = 0x1e84d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1e84d8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84dc: 0x8e1300e8  lw          $s3, 0xE8($s0)
    ctx->pc = 0x1e84dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1e84e0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1e84e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84e4: 0x261200d0  addiu       $s2, $s0, 0xD0
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e84e8: 0x261100dc  addiu       $s1, $s0, 0xDC
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x1e84ec: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1e84ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e84f0: 0x261900e8  addiu       $t9, $s0, 0xE8
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x1e84f4: 0x0  nop
    ctx->pc = 0x1e84f4u;
    // NOP
label_1e84f8:
    // 0x1e84f8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1e84f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e84fc: 0x24e2ffec  addiu       $v0, $a3, -0x14
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
    // 0x1e8500: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x1e8500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8504: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1e8504u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8508: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1e8508u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1e850c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e850cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8510: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8518: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e851c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8520: 0x1055000d  beq         $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8520u;
    {
        const bool branch_taken_0x1e8520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1E8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8520u;
        // 0x1e8524: 0x24f80001  addiu       $t8, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8520) {
            ctx->pc = 0x1E8558u;
            goto label_1e8558;
        }
    }
    ctx->pc = 0x1E8528u;
    // 0x1e8528: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e852c: 0x0  nop
    ctx->pc = 0x1e852cu;
    // NOP
label_1e8530:
    // 0x1e8530: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e8530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e8534: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8534u;
    {
        const bool branch_taken_0x1e8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8534u;
        // 0x1e8538: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8534) {
            ctx->pc = 0x1E855Cu;
            goto label_1e855c;
        }
    }
    ctx->pc = 0x1E853Cu;
    // 0x1e853c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1e853cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e8540: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e8544: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e8548: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e854c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8550: 0x54a2fff7  bnel        $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8550u;
    {
        const bool branch_taken_0x1e8550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8550) {
            ctx->pc = 0x1E8554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8550u;
            // 0x1e8554: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8530;
        }
    }
    ctx->pc = 0x1E8558u;
label_1e8558:
    // 0x1e8558: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e855c:
    // 0x1e855c: 0x5520002e  bnel        $t1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E855Cu;
    {
        const bool branch_taken_0x1e855c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e855c) {
            ctx->pc = 0x1E8560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E855Cu;
            // 0x1e8560: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8618u;
            goto label_1e8618;
        }
    }
    ctx->pc = 0x1E8564u;
    // 0x1e8564: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1e8564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e8568: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x1e8568u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e856c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e8570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8574: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8574u;
    {
        const bool branch_taken_0x1e8574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1E8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8574u;
        // 0x1e8578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8574) {
            ctx->pc = 0x1E85A4u;
            goto label_1e85a4;
        }
    }
    ctx->pc = 0x1E857Cu;
    // 0x1e857c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e8580:
    // 0x1e8580: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1e8580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e8584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8584u;
    {
        const bool branch_taken_0x1e8584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8584u;
        // 0x1e8588: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8584) {
            ctx->pc = 0x1E85A8u;
            goto label_1e85a8;
        }
    }
    ctx->pc = 0x1E858Cu;
    // 0x1e858c: 0x14e2021  addu        $a0, $t2, $t6
    ctx->pc = 0x1e858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1e8590: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e8594: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e859c: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E859Cu;
    {
        const bool branch_taken_0x1e859c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E859Cu;
        // 0x1e85a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e859c) {
            ctx->pc = 0x1E8580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8580;
        }
    }
    ctx->pc = 0x1E85A4u;
label_1e85a4:
    // 0x1e85a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e85a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e85a8:
    // 0x1e85a8: 0x5520001b  bnel        $t1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E85A8u;
    {
        const bool branch_taken_0x1e85a8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e85a8) {
            ctx->pc = 0x1E85ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85A8u;
            // 0x1e85ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8618u;
            goto label_1e8618;
        }
    }
    ctx->pc = 0x1E85B0u;
    // 0x1e85b0: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e85b4: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1e85b8: 0x2c6182a  slt         $v1, $s6, $a2
    ctx->pc = 0x1e85b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e85bc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1e85bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85c0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1e85c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1e85c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e85c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e85cc: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1e85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1e85d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e85d4: 0x1073000c  beq         $v1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1E85D4u;
    {
        const bool branch_taken_0x1e85d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85D4u;
        // 0x1e85d8: 0x24edffff  addiu       $t5, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85d4) {
            ctx->pc = 0x1E8608u;
            goto label_1e8608;
        }
    }
    ctx->pc = 0x1E85DCu;
    // 0x1e85dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e85dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e85e0:
    // 0x1e85e0: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e85e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e85e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E85E4u;
    {
        const bool branch_taken_0x1e85e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E4u;
        // 0x1e85e8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85e4) {
            ctx->pc = 0x1E860Cu;
            goto label_1e860c;
        }
    }
    ctx->pc = 0x1E85ECu;
    // 0x1e85ec: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1e85ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e85f0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1e85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1e85f4: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x1e85f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e85fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8600: 0x14a2fff7  bne         $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E8600u;
    {
        const bool branch_taken_0x1e8600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8600u;
        // 0x1e8604: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8600) {
            ctx->pc = 0x1E85E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e85e0;
        }
    }
    ctx->pc = 0x1E8608u;
label_1e8608:
    // 0x1e8608: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e8608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e860c:
    // 0x1e860c: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E860Cu;
    {
        const bool branch_taken_0x1e860c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e860c) {
            ctx->pc = 0x1E8628u;
            goto label_1e8628;
        }
    }
    ctx->pc = 0x1E8614u;
    // 0x1e8614: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e8618:
    // 0x1e8618: 0x28e30015  slti        $v1, $a3, 0x15
    ctx->pc = 0x1e8618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e861c: 0x24e2ffeb  addiu       $v0, $a3, -0x15
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967275));
    // 0x1e8620: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E8620u;
    {
        const bool branch_taken_0x1e8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8620u;
        // 0x1e8624: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8620) {
            ctx->pc = 0x1E84F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e84f8;
        }
    }
    ctx->pc = 0x1E8628u;
label_1e8628:
    // 0x1e8628: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1e8628u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e862c: 0x0  nop
    ctx->pc = 0x1e862cu;
    // NOP
    // 0x1e8630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8634: 0x3c014189  lui         $at, 0x4189
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16777 << 16));
    // 0x1e8638: 0x34212492  ori         $at, $at, 0x2492
    ctx->pc = 0x1e8638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9362);
    // 0x1e863c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e863cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8640: 0x2b030015  slti        $v1, $t8, 0x15
    ctx->pc = 0x1e8640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1e8644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e8644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8648: 0x303780b  movn        $t7, $t8, $v1
    ctx->pc = 0x1e8648u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 24));
    // 0x1e864c: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x1e864cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1e8650: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8654: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x1e8654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1e8658: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1e8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1e865c: 0x1a2600b  movn        $t4, $t5, $v0
    ctx->pc = 0x1e865cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
    // 0x1e8660: 0x16e2821  addu        $a1, $t3, $t6
    ctx->pc = 0x1e8660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1e8664: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1e8668: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1e8668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1e866c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1e866cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1e8670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e8670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8674: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1e8674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1e8678: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e867c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1e867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1e8680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8684: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1e8684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_1e8688:
    // 0x1e8688: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e868c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e8690: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e8690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e8694: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e8694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1e8698:
    // 0x1e8698: 0xc07a41e  jal         func_1E9078
    ctx->pc = 0x1E8698u;
    SET_GPR_U32(ctx, 31, 0x1E86A0u);
    ctx->pc = 0x1E869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8698u;
    // 0x1e869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9078u, 0x1E8698u, 0x1E86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E86A0u;
label_1e86a0:
    // 0x1e86a0: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x1e86a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e86a4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1e86a4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1e86a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e86a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86ac: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x1e86acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1e86b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e86b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86b4: 0x0  nop
    ctx->pc = 0x1e86b4u;
    // NOP
    // 0x1e86b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E86B8u;
    {
        const bool branch_taken_0x1e86b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e86b8) {
            ctx->pc = 0x1E86C8u;
            goto label_1e86c8;
        }
    }
    ctx->pc = 0x1E86C0u;
    // 0x1e86c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E86C0u;
    {
        const bool branch_taken_0x1e86c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86C0u;
        // 0x1e86c4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e86c0) {
            ctx->pc = 0x1E86DCu;
            goto label_1e86dc;
        }
    }
    ctx->pc = 0x1E86C8u;
label_1e86c8:
    // 0x1e86c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e86c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e86cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e86ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e86d0: 0x0  nop
    ctx->pc = 0x1e86d0u;
    // NOP
    // 0x1e86d4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e86d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e86d8: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1e86d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1e86dc:
    // 0x1e86dc: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1e86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e86e0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1e86e4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1e86e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1e86e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e86e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e86ec: 0x0  nop
    ctx->pc = 0x1e86ecu;
    // NOP
    // 0x1e86f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e86f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e86f4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1e86f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86f8: 0x0  nop
    ctx->pc = 0x1e86f8u;
    // NOP
    // 0x1e86fc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1E86FCu;
    {
        const bool branch_taken_0x1e86fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e86fc) {
            ctx->pc = 0x1E8760u;
            goto label_1e8760;
        }
    }
    ctx->pc = 0x1E8704u;
    // 0x1e8704: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8708: 0xc07a3de  jal         func_1E8F78
    ctx->pc = 0x1E8708u;
    SET_GPR_U32(ctx, 31, 0x1E8710u);
    ctx->pc = 0x1E870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8708u;
    // 0x1e870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F78u, 0x1E8708u, 0x1E8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8710u;
label_1e8710:
    // 0x1e8710: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1e8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8714: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e8714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e8718: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1e8718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1e871c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e871cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8720: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1E8720u;
    SET_GPR_U32(ctx, 31, 0x1E8728u);
    ctx->pc = 0x1E8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8720u;
    // 0x1e8724: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1E8720u, 0x1E8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8728u;
label_1e8728:
    // 0x1e8728: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e872c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8730: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1e8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1e8734: 0xc05404a  jal         func_150128
    ctx->pc = 0x1E8734u;
    SET_GPR_U32(ctx, 31, 0x1E873Cu);
    ctx->pc = 0x1E8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8734u;
    // 0x1e8738: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x1E8734u, 0x1E873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E873Cu;
label_1e873c:
    // 0x1e873c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1E873Cu;
    SET_GPR_U32(ctx, 31, 0x1E8744u);
    ctx->pc = 0x1E8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E873Cu;
    // 0x1e8740: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1E873Cu, 0x1E8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8744u;
label_1e8744:
    // 0x1e8744: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1e8744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1e8748: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e874c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e8750: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1e8750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1e8754:
    // 0x1e8754: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e8754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e8758: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1e8758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_1e875c:
    // 0x1e875c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e875cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1e8760:
    // 0x1e8760: 0xc07a3ae  jal         func_1E8EB8
    ctx->pc = 0x1E8760u;
    SET_GPR_U32(ctx, 31, 0x1E8768u);
    ctx->pc = 0x1E8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8760u;
    // 0x1e8764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EB8u, 0x1E8760u, 0x1E8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8768u;
label_1e8768:
    // 0x1e8768: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e8768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e876c:
    // 0x1e876c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e876cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8770: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e8770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8774: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e8774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8778: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e8778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e877c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e877cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8780: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1e8780u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8788: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1e8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e878c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E878Cu;
        // 0x1e8790: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8794u;
    // 0x1e8794: 0x0  nop
    ctx->pc = 0x1e8794u;
    // NOP
    ctx->pc = 0x1e8798u;
}
