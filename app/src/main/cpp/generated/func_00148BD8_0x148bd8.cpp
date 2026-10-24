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

// Function: func_00148BD8
// Address: 0x148bd8 - 0x148d30
void func_00148BD8_0x148bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148BD8_0x148bd8");
#endif

    switch (ctx->pc) {
        case 0x148c34u: goto label_148c34;
        case 0x148c88u: goto label_148c88;
        case 0x148cc0u: goto label_148cc0;
        default: break;
    }

    ctx->pc = 0x148bd8u;

    // 0x148bd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x148bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x148bdc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x148bdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148be0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x148be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x148be4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x148be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148be8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x148be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x148bec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x148becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bf0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x148bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x148bf4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x148bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bf8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x148bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x148bfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x148bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x148c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x148c04: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x148c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x148c08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x148c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x148c0c: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x148c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x148c10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148c14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c18: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x148c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x148c1c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x148c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x148c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148c24: 0x8e620388  lw          $v0, 0x388($s3)
    ctx->pc = 0x148c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 904)));
    // 0x148c28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x148c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x148c2c: 0xc0544e6  jal         func_151398
    ctx->pc = 0x148C2Cu;
    SET_GPR_U32(ctx, 31, 0x148C34u);
    ctx->pc = 0x148C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C2Cu;
    // 0x148c30: 0x9454000a  lhu         $s4, 0xA($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x148C2Cu, 0x148C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C34u;
label_148c34:
    // 0x148c34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x148c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c38: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x148c3c: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x148c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x148c40: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x148C40u;
    {
        const bool branch_taken_0x148c40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C40u;
        // 0x148c44: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c40) {
            ctx->pc = 0x148D00u;
            goto label_148d00;
        }
    }
    ctx->pc = 0x148C48u;
    // 0x148c48: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x148c4c: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x148c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x148c50: 0x26630300  addiu       $v1, $s3, 0x300
    ctx->pc = 0x148c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x148c54: 0x2a8fc  dsll32      $s5, $v0, 3
    ctx->pc = 0x148c54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 3));
    // 0x148c58: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148c5c: 0x341efff8  ori         $fp, $zero, 0xFFF8
    ctx->pc = 0x148c5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x148c60: 0x1ef6f8  dsll        $fp, $fp, 27
    ctx->pc = 0x148c60u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 27);
    // 0x148c64: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x148c64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x148c68: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x148c68u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x148c6c: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x148c6cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x148c70: 0x1ef178  dsll        $fp, $fp, 5
    ctx->pc = 0x148c70u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 5);
    // 0x148c74: 0x37de001f  ori         $fp, $fp, 0x1F
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)31);
    // 0x148c78: 0x3c179fff  lui         $s7, 0x9FFF
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40959 << 16));
    // 0x148c7c: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x148c7cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x148c80: 0x17b9b8  dsll        $s7, $s7, 6
    ctx->pc = 0x148c80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 6);
    // 0x148c84: 0x36f7003f  ori         $s7, $s7, 0x3F
    ctx->pc = 0x148c84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)63);
label_148c88:
    // 0x148c88: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x148c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148c8c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x148c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x148c90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148c94: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x148c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x148c98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148c9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x148c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x148ca0: 0x90620016  lbu         $v0, 0x16($v1)
    ctx->pc = 0x148ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x148ca4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x148ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x148ca8: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x148CA8u;
    {
        const bool branch_taken_0x148ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CA8u;
        // 0x148cac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ca8) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148CB0u;
    // 0x148cb0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x148cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148cb4: 0x244464a0  addiu       $a0, $v0, 0x64A0
    ctx->pc = 0x148cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    // 0x148cb8: 0xc0544da  jal         func_151368
    ctx->pc = 0x148CB8u;
    SET_GPR_U32(ctx, 31, 0x148CC0u);
    ctx->pc = 0x148CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CB8u;
    // 0x148cbc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x148CB8u, 0x148CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CC0u;
label_148cc0:
    // 0x148cc0: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x148cc4: 0x2197e  dsrl32      $v1, $v0, 5
    ctx->pc = 0x148cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x148cc8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148ccc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x148cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x148cd0: 0x82640387  lb          $a0, 0x387($s3)
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 903)));
    // 0x148cd4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x148cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x148cd8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148cdc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x148cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x148ce0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x148ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148ce4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x148ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x148ce8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x148ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x148cec: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148cecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_148cf0:
    // 0x148cf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148cf4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x148cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x148cf8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x148CF8u;
    {
        const bool branch_taken_0x148cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CF8u;
        // 0x148cfc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cf8) {
            ctx->pc = 0x148C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148c88;
        }
    }
    ctx->pc = 0x148D00u;
label_148d00:
    // 0x148d00: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x148d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x148d04: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x148d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148d08: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x148d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148d0c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x148d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148d10: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x148d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148d14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148d14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148d18: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x148d18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148d1c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x148d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148d20: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x148d20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148d28: 0x3e00008  jr          $ra
    ctx->pc = 0x148D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D28u;
        // 0x148d2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148D30u;
}
