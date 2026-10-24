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

// Function: func_00327A50
// Address: 0x327a50 - 0x327b58
void func_00327A50_0x327a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327A50_0x327a50");
#endif

    switch (ctx->pc) {
        case 0x327a50u: goto label_327a50;
        case 0x327a54u: goto label_327a54;
        case 0x327a58u: goto label_327a58;
        case 0x327a5cu: goto label_327a5c;
        case 0x327a60u: goto label_327a60;
        case 0x327a64u: goto label_327a64;
        case 0x327a68u: goto label_327a68;
        case 0x327a6cu: goto label_327a6c;
        case 0x327a70u: goto label_327a70;
        case 0x327a74u: goto label_327a74;
        case 0x327a78u: goto label_327a78;
        case 0x327a7cu: goto label_327a7c;
        case 0x327a80u: goto label_327a80;
        case 0x327a84u: goto label_327a84;
        case 0x327a88u: goto label_327a88;
        case 0x327a8cu: goto label_327a8c;
        case 0x327a90u: goto label_327a90;
        case 0x327a94u: goto label_327a94;
        case 0x327a98u: goto label_327a98;
        case 0x327a9cu: goto label_327a9c;
        case 0x327aa0u: goto label_327aa0;
        case 0x327aa4u: goto label_327aa4;
        case 0x327aa8u: goto label_327aa8;
        case 0x327aacu: goto label_327aac;
        case 0x327ab0u: goto label_327ab0;
        case 0x327ab4u: goto label_327ab4;
        case 0x327ab8u: goto label_327ab8;
        case 0x327abcu: goto label_327abc;
        case 0x327ac0u: goto label_327ac0;
        case 0x327ac4u: goto label_327ac4;
        case 0x327ac8u: goto label_327ac8;
        case 0x327accu: goto label_327acc;
        case 0x327ad0u: goto label_327ad0;
        case 0x327ad4u: goto label_327ad4;
        case 0x327ad8u: goto label_327ad8;
        case 0x327adcu: goto label_327adc;
        case 0x327ae0u: goto label_327ae0;
        case 0x327ae4u: goto label_327ae4;
        case 0x327ae8u: goto label_327ae8;
        case 0x327aecu: goto label_327aec;
        case 0x327af0u: goto label_327af0;
        case 0x327af4u: goto label_327af4;
        case 0x327af8u: goto label_327af8;
        case 0x327afcu: goto label_327afc;
        case 0x327b00u: goto label_327b00;
        case 0x327b04u: goto label_327b04;
        case 0x327b08u: goto label_327b08;
        case 0x327b0cu: goto label_327b0c;
        case 0x327b10u: goto label_327b10;
        case 0x327b14u: goto label_327b14;
        case 0x327b18u: goto label_327b18;
        case 0x327b1cu: goto label_327b1c;
        case 0x327b20u: goto label_327b20;
        case 0x327b24u: goto label_327b24;
        case 0x327b28u: goto label_327b28;
        case 0x327b2cu: goto label_327b2c;
        case 0x327b30u: goto label_327b30;
        case 0x327b34u: goto label_327b34;
        case 0x327b38u: goto label_327b38;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b40u: goto label_327b40;
        case 0x327b44u: goto label_327b44;
        case 0x327b48u: goto label_327b48;
        case 0x327b4cu: goto label_327b4c;
        case 0x327b50u: goto label_327b50;
        case 0x327b54u: goto label_327b54;
        default: break;
    }

    ctx->pc = 0x327a50u;

label_327a50:
    // 0x327a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_327a54:
    // 0x327a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_327a58:
    // 0x327a58: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x327a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_327a5c:
    // 0x327a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_327a60:
    // 0x327a60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_327a64:
    // 0x327a64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_327a68:
    // 0x327a68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327a6c:
    // 0x327a6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_327a70:
    // 0x327a70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x327a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327a74:
    // 0x327a74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_327a78:
    // 0x327a78: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x327a78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_327a7c:
    // 0x327a7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x327a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_327a80:
    // 0x327a80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_327a84:
    // 0x327a84: 0xc0ca40a  jal         func_329028
label_327a88:
    if (ctx->pc == 0x327A88u) {
        ctx->pc = 0x327A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A84u;
        // 0x327a88: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A8Cu;
        goto label_327a8c;
    }
    ctx->pc = 0x327A84u;
    SET_GPR_U32(ctx, 31, 0x327A8Cu);
    ctx->pc = 0x327A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A84u;
    // 0x327a88: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x327A84u, 0x327A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A8Cu;
label_327a8c:
    // 0x327a8c: 0x260707ff  addiu       $a3, $s0, 0x7FF
    ctx->pc = 0x327a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_327a90:
    // 0x327a90: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x327a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_327a94:
    // 0x327a94: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x327a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327a98:
    // 0x327a98: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x327a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_327a9c:
    // 0x327a9c: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x327a9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_327aa0:
    // 0x327aa0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_327aa4:
    // 0x327aa4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x327aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_327aa8:
    // 0x327aa8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x327aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_327aac:
    // 0x327aac: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x327aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_327ab0:
    // 0x327ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x327ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_327ab4:
    // 0x327ab4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x327ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_327ab8:
    // 0x327ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327abc:
    // 0x327abc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x327abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_327ac0:
    // 0x327ac0: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x327ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_327ac4:
    // 0x327ac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_327ac8:
    // 0x327ac8: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x327ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_327acc:
    // 0x327acc: 0xae67002c  sw          $a3, 0x2C($s3)
    ctx->pc = 0x327accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 7));
label_327ad0:
    // 0x327ad0: 0xae66005c  sw          $a2, 0x5C($s3)
    ctx->pc = 0x327ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 6));
label_327ad4:
    // 0x327ad4: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x327ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_327ad8:
    // 0x327ad8: 0xa2750001  sb          $s5, 0x1($s3)
    ctx->pc = 0x327ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_327adc:
    // 0x327adc: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x327adcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_327ae0:
    // 0x327ae0: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x327ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_327ae4:
    // 0x327ae4: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x327ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_327ae8:
    // 0x327ae8: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x327ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_327aec:
    // 0x327aec: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_327af0:
    if (ctx->pc == 0x327AF0u) {
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AECu;
        // 0x327af0: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AF4u;
        goto label_327af4;
    }
    ctx->pc = 0x327AECu;
    {
        const bool branch_taken_0x327aec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AECu;
        // 0x327af0: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327aec) {
            ctx->pc = 0x327B2Cu;
            goto label_327b2c;
        }
    }
    ctx->pc = 0x327AF4u;
label_327af4:
    // 0x327af4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x327af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_327af8:
    // 0x327af8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_327afc:
    // 0x327afc: 0x40f809  jalr        $v0
label_327b00:
    if (ctx->pc == 0x327B00u) {
        ctx->pc = 0x327B04u;
        goto label_327b04;
    }
    ctx->pc = 0x327AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AFCu, 0x327B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327B04u;
label_327b04:
    // 0x327b04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_327b08:
    // 0x327b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327b0c:
    // 0x327b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x327b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_327b10:
    // 0x327b10: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_327b14:
    // 0x327b14: 0x40f809  jalr        $v0
label_327b18:
    if (ctx->pc == 0x327B18u) {
        ctx->pc = 0x327B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B14u;
        // 0x327b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B1Cu;
        goto label_327b1c;
    }
    ctx->pc = 0x327B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327B1Cu);
        ctx->pc = 0x327B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B14u;
        // 0x327b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B14u, 0x327B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327B1Cu;
label_327b1c:
    // 0x327b1c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_327b20:
    // 0x327b20: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x327b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
label_327b24:
    // 0x327b24: 0xae700040  sw          $s0, 0x40($s3)
    ctx->pc = 0x327b24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 16));
label_327b28:
    // 0x327b28: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x327b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
label_327b2c:
    // 0x327b2c: 0xa2750000  sb          $s5, 0x0($s3)
    ctx->pc = 0x327b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_327b30:
    // 0x327b30: 0xa2600044  sb          $zero, 0x44($s3)
    ctx->pc = 0x327b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 0));
label_327b34:
    // 0x327b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327b38:
    // 0x327b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_327b3c:
    // 0x327b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327b40:
    // 0x327b40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_327b44:
    // 0x327b44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x327b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327b48:
    // 0x327b48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x327b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_327b4c:
    // 0x327b4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x327b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327b50:
    // 0x327b50: 0x80ca410  j           func_329040
label_327b54:
    if (ctx->pc == 0x327B54u) {
        ctx->pc = 0x327B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B50u;
        // 0x327b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B58u;
        goto label_fallthrough_0x327b50;
    }
    ctx->pc = 0x327B50u;
    ctx->pc = 0x327B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B50u;
    // 0x327b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x327B50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x327b50:
    ctx->pc = 0x327B58u;
}
