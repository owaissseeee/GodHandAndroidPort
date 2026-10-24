#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: EventTask__5cR501P5cR501
// Address: 0x79a970 - 0x79ab08
void EventTask__5cR501P5cR501_0x79a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventTask__5cR501P5cR501_0x79a970");
#endif

    switch (ctx->pc) {
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aae4u: goto label_79aae4;
        default: break;
    }

    ctx->pc = 0x79a970u;

    // 0x79a970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a974: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a978: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a97c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x79a980: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a98c: 0x24527a2c  addiu       $s2, $v0, 0x7A2C
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x79a990: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a994: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79a998: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a99c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a9a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x79a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x79a9a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a9ac: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A9ACu;
    {
        const bool branch_taken_0x79a9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ACu;
        // 0x79a9b0: 0x3c15007a  lui         $s5, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9ac) {
            ctx->pc = 0x79AAC8u;
            goto label_79aac8;
        }
    }
    ctx->pc = 0x79A9B4u;
    // 0x79a9b4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a9b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a9bc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A9BCu;
    SET_GPR_U32(ctx, 31, 0x79A9C4u);
    ctx->pc = 0x79A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9BCu;
    // 0x79a9c0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A9BCu, 0x79A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C4u;
label_79a9c4:
    // 0x79a9c4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x79a9c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79a9cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a9d0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x79a9d4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79a9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79a9d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a9dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79a9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79a9e0: 0x26046af0  addiu       $a0, $s0, 0x6AF0
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    // 0x79a9e4: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x79a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x79a9e8: 0xc0a5916  jal         func_296458
    ctx->pc = 0x79A9E8u;
    SET_GPR_U32(ctx, 31, 0x79A9F0u);
    ctx->pc = 0x79A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E8u;
    // 0x79a9ec: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296458u, 0x79A9E8u, 0x79A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9F0u;
label_79a9f0:
    // 0x79a9f0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x79a9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79A9F4u;
    {
        const bool branch_taken_0x79a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F4u;
        // 0x79a9f8: 0x3c140074  lui         $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f4) {
            ctx->pc = 0x79AA90u;
            goto label_79aa90;
        }
    }
    ctx->pc = 0x79A9FCu;
    // 0x79a9fc: 0x0  nop
    ctx->pc = 0x79a9fcu;
    // NOP
label_79aa00:
    // 0x79aa00: 0xc0a5f08  jal         func_297C20
    ctx->pc = 0x79AA00u;
    SET_GPR_U32(ctx, 31, 0x79AA08u);
    ctx->pc = 0x79AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA00u;
    // 0x79aa04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C20u, 0x79AA00u, 0x79AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA08u;
label_79aa08:
    // 0x79aa08: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79AA08u;
    {
        const bool branch_taken_0x79aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA08u;
        // 0x79aa0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa08) {
            ctx->pc = 0x79AA80u;
            goto label_79aa80;
        }
    }
    ctx->pc = 0x79AA10u;
    // 0x79aa10: 0x24050217  addiu       $a1, $zero, 0x217
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x79aa14: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x79AA14u;
    SET_GPR_U32(ctx, 31, 0x79AA1Cu);
    ctx->pc = 0x79AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA14u;
    // 0x79aa18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x79AA14u, 0x79AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA1Cu;
label_79aa1c:
    // 0x79aa1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x79aa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa20: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AA80u;
            goto label_79aa80;
        }
    }
    ctx->pc = 0x79AA28u;
    // 0x79aa28: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x79aa2c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79AA2Cu;
    {
        const bool branch_taken_0x79aa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0x262402a8  addiu       $a0, $s1, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa2c) {
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79AA34u;
    // 0x79aa34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79aa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa38: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aa3c: 0x0  nop
    ctx->pc = 0x79aa3cu;
    // NOP
label_79aa40:
    // 0x79aa40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x79aa44: 0x8ce500f0  lw          $a1, 0xF0($a3)
    ctx->pc = 0x79aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x79aa48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x79aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x79aa4c: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x79aa50: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79aa54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x79aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79aa58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AA58u;
    {
        const bool branch_taken_0x79aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA58u;
        // 0x79aa5c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa58) {
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79AA60u;
    // 0x79aa60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aa64: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x79AA64u;
    {
        const bool branch_taken_0x79aa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa64) {
            ctx->pc = 0x79AA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA64u;
            // 0x79aa68: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa40;
        }
    }
    ctx->pc = 0x79AA6Cu;
label_79aa6c:
    // 0x79aa6c: 0x8ce200f0  lw          $v0, 0xF0($a3)
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x79aa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79aa78: 0xc1e6e6c  jal         func_79B9B0
    ctx->pc = 0x79AA78u;
    SET_GPR_U32(ctx, 31, 0x79AA80u);
    ctx->pc = 0x79AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA78u;
    // 0x79aa7c: 0xe6200394  swc1        $f0, 0x394($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9B0u, 0x79AA78u, 0x79AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA80u;
label_79aa80:
    // 0x79aa80: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79aa84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa88: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AA88u;
    SET_GPR_U32(ctx, 31, 0x79AA90u);
    ctx->pc = 0x79AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA88u;
    // 0x79aa8c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AA88u, 0x79AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA90u;
label_79aa90:
    // 0x79aa90: 0x26506af0  addiu       $s0, $s2, 0x6AF0
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 27376));
    // 0x79aa94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa98: 0xc1e8106  jal         func_7A0418
    ctx->pc = 0x79AA98u;
    SET_GPR_U32(ctx, 31, 0x79AAA0u);
    ctx->pc = 0x79AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA98u;
    // 0x79aa9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0418u, 0x79AA98u, 0x79AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAA0u;
label_79aaa0:
    // 0x79aaa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79aaa4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x79AAA4u;
    {
        const bool branch_taken_0x79aaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA4u;
        // 0x79aaa8: 0x8e827a8c  lw          $v0, 0x7A8C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaa4) {
            ctx->pc = 0x79AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa00;
        }
    }
    ctx->pc = 0x79AAACu;
    // 0x79aaac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79aab0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x79aab4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79aab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79aabc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x79aac0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79AAC0u;
    SET_GPR_U32(ctx, 31, 0x79AAC8u);
    ctx->pc = 0x79AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAC0u;
    // 0x79aac4: 0xae827a8c  sw          $v0, 0x7A8C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79AAC0u, 0x79AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAC8u;
label_79aac8:
    // 0x79aac8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79aacc: 0x26a5b4c0  addiu       $a1, $s5, -0x4B40
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948032));
    // 0x79aad0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79AAD0u;
    SET_GPR_U32(ctx, 31, 0x79AAD8u);
    ctx->pc = 0x79AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAD0u;
    // 0x79aad4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AAD0u, 0x79AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD8u;
label_79aad8:
    // 0x79aad8: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79aadc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AADCu;
    SET_GPR_U32(ctx, 31, 0x79AAE4u);
    ctx->pc = 0x79AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AADCu;
    // 0x79aae0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AADCu, 0x79AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE4u;
label_79aae4:
    // 0x79aae4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79aae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79aae8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79aae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aaec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79aaecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aaf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79aaf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aaf4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79aaf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aaf8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79aaf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB00u;
        // 0x79ab04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB08u;
}
} // namespace gh_r501
