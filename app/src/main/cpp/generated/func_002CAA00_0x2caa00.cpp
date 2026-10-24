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

// Function: func_002CAA00
// Address: 0x2caa00 - 0x2cab58
void func_002CAA00_0x2caa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CAA00_0x2caa00");
#endif

    switch (ctx->pc) {
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caad0u: goto label_2caad0;
        case 0x2cab04u: goto label_2cab04;
        case 0x2cab24u: goto label_2cab24;
        case 0x2cab40u: goto label_2cab40;
        default: break;
    }

    ctx->pc = 0x2caa00u;

    // 0x2caa00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2caa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2caa04: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x2caa04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x2caa08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2caa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2caa0c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x2caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x2caa10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2caa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2caa14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2caa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2caa18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2caa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2caa1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa24: 0x3c05ffef  lui         $a1, 0xFFEF
    ctx->pc = 0x2caa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
    // 0x2caa28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2caa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2caa2c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x2caa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x2caa30: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2caa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2caa34: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2caa34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x2caa38: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x2caa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2caa3c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2caa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2caa40: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2caa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2caa44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2caa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2caa48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2caa48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2caa4c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2caa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2caa50: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x2caa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x2caa54: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2caa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2caa58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2caa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2caa5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2caa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2caa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2caa64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2caa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2caa68: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2caa68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x2caa6c: 0xae2400ac  sw          $a0, 0xAC($s1)
    ctx->pc = 0x2caa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 4));
label_2caa70:
    // 0x2caa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2caa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa74: 0xc0b2f16  jal         func_2CBC58
    ctx->pc = 0x2CAA74u;
    SET_GPR_U32(ctx, 31, 0x2CAA7Cu);
    ctx->pc = 0x2CAA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA74u;
    // 0x2caa78: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC58u, 0x2CAA74u, 0x2CAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA7Cu;
label_2caa7c:
    // 0x2caa7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2caa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa80: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2caa80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2caa84: 0x28a20034  slti        $v0, $a1, 0x34
    ctx->pc = 0x2caa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2caa88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CAA88u;
    {
        const bool branch_taken_0x2caa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA88u;
        // 0x2caa8c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa88) {
            ctx->pc = 0x2CAA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caa70;
        }
    }
    ctx->pc = 0x2CAA90u;
    // 0x2caa90: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2caa94: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CAA94u;
    {
        const bool branch_taken_0x2caa94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa94) {
            ctx->pc = 0x2CAA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAA94u;
            // 0x2caa98: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAC4u;
            goto label_2caac4;
        }
    }
    ctx->pc = 0x2CAA9Cu;
    // 0x2caa9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2caaa0:
    // 0x2caaa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2caaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2caaa4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAAA4u;
    {
        const bool branch_taken_0x2caaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caaa4) {
            ctx->pc = 0x2CAAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAA4u;
            // 0x2caaa8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAB8u;
            goto label_2caab8;
        }
    }
    ctx->pc = 0x2CAAACu;
    // 0x2caaac: 0xc0b390c  jal         func_2CE430
    ctx->pc = 0x2CAAACu;
    SET_GPR_U32(ctx, 31, 0x2CAAB4u);
    ctx->pc = 0x2CAAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAACu;
    // 0x2caab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE430u, 0x2CAAACu, 0x2CAAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAB4u;
label_2caab4:
    // 0x2caab4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2caab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2caab8:
    // 0x2caab8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CAAB8u;
    {
        const bool branch_taken_0x2caab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caab8) {
            ctx->pc = 0x2CAABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAAB8u;
            // 0x2caabc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caaa0;
        }
    }
    ctx->pc = 0x2CAAC0u;
    // 0x2caac0: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2caac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2caac4:
    // 0x2caac4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CAAC4u;
    {
        const bool branch_taken_0x2caac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAC4u;
        // 0x2caac8: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caac4) {
            ctx->pc = 0x2CAB30u;
            goto label_2cab30;
        }
    }
    ctx->pc = 0x2CAACCu;
    // 0x2caacc: 0x9202005f  lbu         $v0, 0x5F($s0)
    ctx->pc = 0x2caaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
label_2caad0:
    // 0x2caad0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAAD0u;
    {
        const bool branch_taken_0x2caad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caad0) {
            ctx->pc = 0x2CAAF4u;
            goto label_2caaf4;
        }
    }
    ctx->pc = 0x2CAAD8u;
    // 0x2caad8: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x2caad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x2caadc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAADCu;
    {
        const bool branch_taken_0x2caadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caadc) {
            ctx->pc = 0x2CAAF4u;
            goto label_2caaf4;
        }
    }
    ctx->pc = 0x2CAAE4u;
    // 0x2caae4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2caae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2caae8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2caae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2caaec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAAECu;
    {
        const bool branch_taken_0x2caaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAECu;
        // 0x2caaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caaec) {
            ctx->pc = 0x2CAB14u;
            goto label_2cab14;
        }
    }
    ctx->pc = 0x2CAAF4u;
label_2caaf4:
    // 0x2caaf4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2caaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2caaf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2caaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2caafc: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CAAFCu;
    SET_GPR_U32(ctx, 31, 0x2CAB04u);
    ctx->pc = 0x2CAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAFCu;
    // 0x2cab00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CAAFCu, 0x2CAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB04u;
label_2cab04:
    // 0x2cab04: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2cab08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2cab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2cab0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAB0Cu;
    {
        const bool branch_taken_0x2cab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB0Cu;
        // 0x2cab10: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab0c) {
            ctx->pc = 0x2CAB24u;
            goto label_2cab24;
        }
    }
    ctx->pc = 0x2CAB14u;
label_2cab14:
    // 0x2cab14: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2cab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2cab18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cab18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cab1c: 0xc0b3540  jal         func_2CD500
    ctx->pc = 0x2CAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CAB24u);
    ctx->pc = 0x2CAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB1Cu;
    // 0x2cab20: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD500u, 0x2CAB1Cu, 0x2CAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB24u;
label_2cab24:
    // 0x2cab24: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2cab24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2cab28: 0x5600ffe9  bnel        $s0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CAB28u;
    {
        const bool branch_taken_0x2cab28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab28) {
            ctx->pc = 0x2CAB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB28u;
            // 0x2cab2c: 0x9202005f  lbu         $v0, 0x5F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caad0;
        }
    }
    ctx->pc = 0x2CAB30u;
label_2cab30:
    // 0x2cab30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2cab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cab34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab38: 0xc0b2c1c  jal         func_2CB070
    ctx->pc = 0x2CAB38u;
    SET_GPR_U32(ctx, 31, 0x2CAB40u);
    ctx->pc = 0x2CAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB38u;
    // 0x2cab3c: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB070u, 0x2CAB38u, 0x2CAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB40u;
label_2cab40:
    // 0x2cab40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cab40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cab44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cab48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cab48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cab50: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB50u;
        // 0x2cab54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAB58u;
}
