#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: initFence__5cR409
// Address: 0x799a20 - 0x799d58
void initFence__5cR409_0x799a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initFence__5cR409_0x799a20");
#endif

    switch (ctx->pc) {
        case 0x799a90u: goto label_799a90;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799b18u: goto label_799b18;
        case 0x799b40u: goto label_799b40;
        case 0x799b70u: goto label_799b70;
        case 0x799b98u: goto label_799b98;
        case 0x799bc8u: goto label_799bc8;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c48u: goto label_799c48;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d18u: goto label_799d18;
        case 0x799d24u: goto label_799d24;
        default: break;
    }

    ctx->pc = 0x799a20u;

    // 0x799a20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x799a24: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799a28: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799a2c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799a30: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799a34: 0x2448c030  addiu       $t0, $v0, -0x3FD0
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950960));
    // 0x799a38: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799a3c: 0x24694c38  addiu       $t1, $v1, 0x4C38
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x799a40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799a44: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a50: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0x8045c030  lb          $a1, -0x3FD0($v0)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79C030u));
    // 0x799a5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799a64: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799a68: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x799a68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x799a6c: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x799a70: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x799a70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x799a74: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x799a78: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x799a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x799a7c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x799A7Cu;
    {
        const bool branch_taken_0x799a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A7Cu;
        // 0x799a80: 0x3c15007a  lui         $s5, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a7c) {
            ctx->pc = 0x799AB8u;
            goto label_799ab8;
        }
    }
    ctx->pc = 0x799A84u;
    // 0x799a84: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x799a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a88: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799a8c: 0x0  nop
    ctx->pc = 0x799a8cu;
    // NOP
label_799a90:
    // 0x799a90: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x799a94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799a9c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799aa0: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799aa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799AA4u;
    {
        const bool branch_taken_0x799aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa4) {
            ctx->pc = 0x799AB8u;
            goto label_799ab8;
        }
    }
    ctx->pc = 0x799AACu;
    // 0x799aac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799ab0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AB0u;
            // 0x799ab4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a90;
        }
    }
    ctx->pc = 0x799AB8u;
label_799ab8:
    // 0x799ab8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799abc: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799ABCu;
    SET_GPR_U32(ctx, 31, 0x799AC4u);
    ctx->pc = 0x799AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ABCu;
    // 0x799ac0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799ABCu, 0x799AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC4u;
label_799ac4:
    // 0x799ac4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x799ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x799ac8: 0x26484c38  addiu       $t0, $s2, 0x4C38
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
    // 0x799acc: 0x2603c038  addiu       $v1, $s0, -0x3FC8
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950968));
    // 0x799ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad4: 0x8202c038  lb          $v0, -0x3FC8($s0)
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950968)));
    // 0x799ad8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799AD8u;
    {
        const bool branch_taken_0x799ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad8) {
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799AE0u;
    // 0x799ae0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799ae8:
    // 0x799ae8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799aec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799af0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799af4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799af8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799afc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799AFCu;
    {
        const bool branch_taken_0x799afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799afc) {
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799B04u;
    // 0x799b04: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b08: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B08u;
    {
        const bool branch_taken_0x799b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b08) {
            ctx->pc = 0x799B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B08u;
            // 0x799b0c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ae8;
        }
    }
    ctx->pc = 0x799B10u;
label_799b10:
    // 0x799b10: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799B10u;
    SET_GPR_U32(ctx, 31, 0x799B18u);
    ctx->pc = 0x799B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B10u;
    // 0x799b14: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799B10u, 0x799B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x799b1c: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x799b20: 0x2663c040  addiu       $v1, $s3, -0x3FC0
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950976));
    // 0x799b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b28: 0x8262c040  lb          $v0, -0x3FC0($s3)
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294950976)));
    // 0x799b2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b38: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b3c: 0x0  nop
    ctx->pc = 0x799b3cu;
    // NOP
label_799b40:
    // 0x799b40: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799b44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799b48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799b4c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799b50: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799b54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B54u;
    {
        const bool branch_taken_0x799b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B54u;
        // 0x799b58: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b54) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B5Cu;
    // 0x799b5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B60u;
            // 0x799b64: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799B68u;
    SET_GPR_U32(ctx, 31, 0x799B70u);
    ctx->pc = 0x799B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B68u;
    // 0x799b6c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799B68u, 0x799B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B70u;
label_799b70:
    // 0x799b70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x799b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x799b74: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x799b78: 0x26a3c050  addiu       $v1, $s5, -0x3FB0
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950992));
    // 0x799b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b80: 0x82a2c050  lb          $v0, -0x3FB0($s5)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294950992)));
    // 0x799b84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799B84u;
    {
        const bool branch_taken_0x799b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B84u;
        // 0x799b88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b84) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799B8Cu;
    // 0x799b8c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b90: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b94: 0x0  nop
    ctx->pc = 0x799b94u;
    // NOP
label_799b98:
    // 0x799b98: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799b9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799ba0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799ba4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799ba8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BACu;
    {
        const bool branch_taken_0x799bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BACu;
        // 0x799bb0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bac) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799BB4u;
    // 0x799bb4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bb8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BB8u;
            // 0x799bbc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b98;
        }
    }
    ctx->pc = 0x799BC0u;
label_799bc0:
    // 0x799bc0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799bd0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799D24u;
            goto label_799d24;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799bdc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x799BDCu;
    {
        const bool branch_taken_0x799bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bdc) {
            ctx->pc = 0x799D28u;
            goto label_799d28;
        }
    }
    ctx->pc = 0x799BE4u;
    // 0x799be4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x799be8: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x799BE8u;
    {
        const bool branch_taken_0x799be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799be8) {
            ctx->pc = 0x799BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BE8u;
            // 0x799bec: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D2Cu;
            goto label_799d2c;
        }
    }
    ctx->pc = 0x799BF0u;
    // 0x799bf0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x799BF0u;
    {
        const bool branch_taken_0x799bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF0u;
        // 0x799bf4: 0x3c10005f  lui         $s0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf0) {
            ctx->pc = 0x799D24u;
            goto label_799d24;
        }
    }
    ctx->pc = 0x799BF8u;
    // 0x799bf8: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x799bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c00: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C00u;
    {
        const bool branch_taken_0x799c00 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c00) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799C08u;
    // 0x799c08: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799c0c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799c10: 0x24a59d58  addiu       $a1, $a1, -0x62A8
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942040));
    // 0x799c14: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799C14u;
    SET_GPR_U32(ctx, 31, 0x799C1Cu);
    ctx->pc = 0x799C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C14u;
    // 0x799c18: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799C14u, 0x799C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x799c20: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799c24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799c28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799C2Cu;
    {
        const bool branch_taken_0x799c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c2c) {
            ctx->pc = 0x799C48u;
            goto label_799c48;
        }
    }
    ctx->pc = 0x799C34u;
    // 0x799c34: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799c38: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799c3c: 0x24a5ade0  addiu       $a1, $a1, -0x5220
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946272));
    // 0x799c40: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799C40u;
    SET_GPR_U32(ctx, 31, 0x799C48u);
    ctx->pc = 0x799C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C40u;
    // 0x799c44: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799C40u, 0x799C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C48u;
label_799c48:
    // 0x799c48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x799c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799c50: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799c54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799c5c: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x799c60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799c64: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x799c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c68: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x799c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799c6c: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x799c70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x799c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c78: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799c7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c80: 0x8e42c180  lw          $v0, -0x3E80($s2)
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C180u));
    // 0x799c84: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x799c88: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x799c8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799c90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799c94: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x799c98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799c9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799ca0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ca4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x799ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799ca8: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA8u;
    // 0x799cac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x799cb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x799cb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799cb8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799cb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x799cbc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x799cbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x799cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc4: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cd0: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x799CD0u;
    SET_GPR_U32(ctx, 31, 0x799CD8u);
    ctx->pc = 0x799CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD0u;
    // 0x799cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799CD0u, 0x799CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD8u;
label_799cd8:
    // 0x799cd8: 0x8e42c180  lw          $v0, -0x3E80($s2)
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951296)));
    // 0x799cdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ce0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799ce0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ce8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x799cec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799cf0: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x799cf4: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x799CF4u;
    SET_GPR_U32(ctx, 31, 0x799CFCu);
    ctx->pc = 0x799CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF4u;
    // 0x799cf8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x799CF4u, 0x799CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CFCu;
label_799cfc:
    // 0x799cfc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x799cfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x799d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d04: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d08: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x799d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x799d0c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d10: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799D10u;
    SET_GPR_U32(ctx, 31, 0x799D18u);
    ctx->pc = 0x799D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D10u;
    // 0x799d14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799D10u, 0x799D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D18u;
label_799d18:
    // 0x799d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d1c: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x799D1Cu;
    SET_GPR_U32(ctx, 31, 0x799D24u);
    ctx->pc = 0x799D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D1Cu;
    // 0x799d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799D1Cu, 0x799D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D24u;
label_799d24:
    // 0x799d24: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799d28:
    // 0x799d28: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799d2c:
    // 0x799d2c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d34: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d38: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x799d38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d40: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x799d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799d44: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x799d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799d48: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x799d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x799D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D4Cu;
        // 0x799d50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D54u;
    // 0x799d54: 0x0  nop
    ctx->pc = 0x799d54u;
    // NOP
    ctx->pc = 0x799d58u;
}
} // namespace gh_r409
