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

// Function: ForwardAnimParamPairByIndex_27EA50
// Address: 0x27ea50 - 0x27edc8
void ForwardAnimParamPairByIndex_27EA50_0x27ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardAnimParamPairByIndex_27EA50_0x27ea50");
#endif

    switch (ctx->pc) {
        case 0x27edbcu: goto label_27edbc;
        default: break;
    }

    ctx->pc = 0x27ea50u;

    // 0x27ea50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ea54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x27ea54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea58: 0x2ca20032  sltiu       $v0, $a1, 0x32
    ctx->pc = 0x27ea58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x27ea5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27EA5Cu;
    {
        const bool branch_taken_0x27ea5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA5Cu;
        // 0x27ea60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea5c) {
            ctx->pc = 0x27EA80u;
            goto label_27ea80;
        }
    }
    ctx->pc = 0x27EA64u;
    // 0x27ea64: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27ea68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27ea6c: 0x244282e0  addiu       $v0, $v0, -0x7D20
    ctx->pc = 0x27ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935264));
    // 0x27ea70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ea74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ea78: 0x800008  jr          $a0
    ctx->pc = 0x27EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EA80u: goto label_27ea80;
            case 0x27EA90u: goto label_27ea90;
            case 0x27EAA0u: goto label_27eaa0;
            case 0x27EAB0u: goto label_27eab0;
            case 0x27EAC0u: goto label_27eac0;
            case 0x27EAD0u: goto label_27ead0;
            case 0x27EAE0u: goto label_27eae0;
            case 0x27EAF0u: goto label_27eaf0;
            case 0x27EB00u: goto label_27eb00;
            case 0x27EB10u: goto label_27eb10;
            case 0x27EB20u: goto label_27eb20;
            case 0x27EB30u: goto label_27eb30;
            case 0x27EB40u: goto label_27eb40;
            case 0x27EB50u: goto label_27eb50;
            case 0x27EB60u: goto label_27eb60;
            case 0x27EB70u: goto label_27eb70;
            case 0x27EB80u: goto label_27eb80;
            case 0x27EB90u: goto label_27eb90;
            case 0x27EBA0u: goto label_27eba0;
            case 0x27EBB0u: goto label_27ebb0;
            case 0x27EBC0u: goto label_27ebc0;
            case 0x27EBD0u: goto label_27ebd0;
            case 0x27EBE0u: goto label_27ebe0;
            case 0x27EBF0u: goto label_27ebf0;
            case 0x27EC00u: goto label_27ec00;
            case 0x27EC10u: goto label_27ec10;
            case 0x27EC20u: goto label_27ec20;
            case 0x27EC30u: goto label_27ec30;
            case 0x27EC40u: goto label_27ec40;
            case 0x27EC50u: goto label_27ec50;
            case 0x27EC60u: goto label_27ec60;
            case 0x27EC70u: goto label_27ec70;
            case 0x27EC80u: goto label_27ec80;
            case 0x27EC90u: goto label_27ec90;
            case 0x27ECA0u: goto label_27eca0;
            case 0x27ECB0u: goto label_27ecb0;
            case 0x27ECC0u: goto label_27ecc0;
            case 0x27ECD0u: goto label_27ecd0;
            case 0x27ECE0u: goto label_27ece0;
            case 0x27ECF0u: goto label_27ecf0;
            case 0x27ED00u: goto label_27ed00;
            case 0x27ED10u: goto label_27ed10;
            case 0x27ED20u: goto label_27ed20;
            case 0x27ED30u: goto label_27ed30;
            case 0x27ED40u: goto label_27ed40;
            case 0x27ED50u: goto label_27ed50;
            case 0x27ED60u: goto label_27ed60;
            case 0x27ED70u: goto label_27ed70;
            case 0x27ED80u: goto label_27ed80;
            case 0x27ED90u: goto label_27ed90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EA78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27EA80u;
label_27ea80:
    // 0x27ea80: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ea84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x27ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27ea88: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x27EA88u;
    {
        const bool branch_taken_0x27ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA88u;
        // 0x27ea8c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea88) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EA90u;
label_27ea90:
    // 0x27ea90: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ea94: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x27ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27ea98: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x27EA98u;
    {
        const bool branch_taken_0x27ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA98u;
        // 0x27ea9c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea98) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAA0u;
label_27eaa0:
    // 0x27eaa0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eaa4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x27eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27eaa8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x27EAA8u;
    {
        const bool branch_taken_0x27eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAA8u;
        // 0x27eaac: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaa8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAB0u;
label_27eab0:
    // 0x27eab0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eab4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x27eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x27eab8: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x27EAB8u;
    {
        const bool branch_taken_0x27eab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAB8u;
        // 0x27eabc: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eab8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAC0u;
label_27eac0:
    // 0x27eac0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eac4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x27eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27eac8: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x27EAC8u;
    {
        const bool branch_taken_0x27eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAC8u;
        // 0x27eacc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eac8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAD0u;
label_27ead0:
    // 0x27ead0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ead4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x27ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27ead8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x27EAD8u;
    {
        const bool branch_taken_0x27ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAD8u;
        // 0x27eadc: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ead8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAE0u;
label_27eae0:
    // 0x27eae0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eae4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x27eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x27eae8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x27EAE8u;
    {
        const bool branch_taken_0x27eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAE8u;
        // 0x27eaec: 0x8c44002c  lw          $a0, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eae8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EAF0u;
label_27eaf0:
    // 0x27eaf0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eaf4: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x27eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x27eaf8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x27EAF8u;
    {
        const bool branch_taken_0x27eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAF8u;
        // 0x27eafc: 0x8c44006c  lw          $a0, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaf8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB00u;
label_27eb00:
    // 0x27eb00: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb04: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x27eb08: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x27EB08u;
    {
        const bool branch_taken_0x27eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB08u;
        // 0x27eb0c: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb08) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB10u;
label_27eb10:
    // 0x27eb10: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb14: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x27eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x27eb18: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x27EB18u;
    {
        const bool branch_taken_0x27eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB18u;
        // 0x27eb1c: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb18) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB20u;
label_27eb20:
    // 0x27eb20: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb24: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x27eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x27eb28: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x27EB28u;
    {
        const bool branch_taken_0x27eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB28u;
        // 0x27eb2c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb28) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB30u;
label_27eb30:
    // 0x27eb30: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb34: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x27eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x27eb38: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x27EB38u;
    {
        const bool branch_taken_0x27eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB38u;
        // 0x27eb3c: 0x8c4400a8  lw          $a0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb38) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB40u;
label_27eb40:
    // 0x27eb40: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb44: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x27eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x27eb48: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x27EB48u;
    {
        const bool branch_taken_0x27eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB48u;
        // 0x27eb4c: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb48) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB50u;
label_27eb50:
    // 0x27eb50: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb54: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x27eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x27eb58: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x27EB58u;
    {
        const bool branch_taken_0x27eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB58u;
        // 0x27eb5c: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb58) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB60u;
label_27eb60:
    // 0x27eb60: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb64: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x27eb68: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x27EB68u;
    {
        const bool branch_taken_0x27eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB68u;
        // 0x27eb6c: 0x8c4400b8  lw          $a0, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb68) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB70u;
label_27eb70:
    // 0x27eb70: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb74: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x27eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x27eb78: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x27EB78u;
    {
        const bool branch_taken_0x27eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB78u;
        // 0x27eb7c: 0x8c4400d8  lw          $a0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb78) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB80u;
label_27eb80:
    // 0x27eb80: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb84: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x27eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x27eb88: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x27EB88u;
    {
        const bool branch_taken_0x27eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB88u;
        // 0x27eb8c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb88) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EB90u;
label_27eb90:
    // 0x27eb90: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eb94: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x27eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27eb98: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x27EB98u;
    {
        const bool branch_taken_0x27eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB98u;
        // 0x27eb9c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb98) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBA0u;
label_27eba0:
    // 0x27eba0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eba4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x27eba8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x27EBA8u;
    {
        const bool branch_taken_0x27eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBA8u;
        // 0x27ebac: 0x8c440078  lw          $a0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eba8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBB0u;
label_27ebb0:
    // 0x27ebb0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ebb4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x27ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x27ebb8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x27EBB8u;
    {
        const bool branch_taken_0x27ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBB8u;
        // 0x27ebbc: 0x8c44007c  lw          $a0, 0x7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebb8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBC0u;
label_27ebc0:
    // 0x27ebc0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ebc4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x27ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x27ebc8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x27EBC8u;
    {
        const bool branch_taken_0x27ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBC8u;
        // 0x27ebcc: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebc8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBD0u;
label_27ebd0:
    // 0x27ebd0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ebd4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x27ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x27ebd8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x27EBD8u;
    {
        const bool branch_taken_0x27ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBD8u;
        // 0x27ebdc: 0x8c44008c  lw          $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebd8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBE0u;
label_27ebe0:
    // 0x27ebe0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ebe4: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x27ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27ebe8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x27EBE8u;
    {
        const bool branch_taken_0x27ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBE8u;
        // 0x27ebec: 0x8c440094  lw          $a0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebe8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EBF0u;
label_27ebf0:
    // 0x27ebf0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ebf4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x27ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27ebf8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x27EBF8u;
    {
        const bool branch_taken_0x27ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBF8u;
        // 0x27ebfc: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebf8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC00u;
label_27ec00:
    // 0x27ec00: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec04: 0x8c430170  lw          $v1, 0x170($v0)
    ctx->pc = 0x27ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x27ec08: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27EC08u;
    {
        const bool branch_taken_0x27ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC08u;
        // 0x27ec0c: 0x8c440174  lw          $a0, 0x174($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec08) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC10u;
label_27ec10:
    // 0x27ec10: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec14: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x27ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x27ec18: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27EC18u;
    {
        const bool branch_taken_0x27ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC18u;
        // 0x27ec1c: 0x8c44017c  lw          $a0, 0x17C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec18) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC20u;
label_27ec20:
    // 0x27ec20: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec24: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x27ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x27ec28: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x27EC28u;
    {
        const bool branch_taken_0x27ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC28u;
        // 0x27ec2c: 0x8c440184  lw          $a0, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec28) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC30u;
label_27ec30:
    // 0x27ec30: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec34: 0x8c430188  lw          $v1, 0x188($v0)
    ctx->pc = 0x27ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x27ec38: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x27EC38u;
    {
        const bool branch_taken_0x27ec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC38u;
        // 0x27ec3c: 0x8c44018c  lw          $a0, 0x18C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec38) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC40u;
label_27ec40:
    // 0x27ec40: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec44: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x27ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x27ec48: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x27EC48u;
    {
        const bool branch_taken_0x27ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC48u;
        // 0x27ec4c: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec48) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC50u;
label_27ec50:
    // 0x27ec50: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec54: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x27ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x27ec58: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27EC58u;
    {
        const bool branch_taken_0x27ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC58u;
        // 0x27ec5c: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec58) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC60u;
label_27ec60:
    // 0x27ec60: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec64: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x27ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x27ec68: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x27EC68u;
    {
        const bool branch_taken_0x27ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC68u;
        // 0x27ec6c: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec68) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC70u;
label_27ec70:
    // 0x27ec70: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec74: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x27ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x27ec78: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x27EC78u;
    {
        const bool branch_taken_0x27ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC78u;
        // 0x27ec7c: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec78) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC80u;
label_27ec80:
    // 0x27ec80: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec84: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x27ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x27ec88: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x27EC88u;
    {
        const bool branch_taken_0x27ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC88u;
        // 0x27ec8c: 0x8c44015c  lw          $a0, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec88) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27EC90u;
label_27ec90:
    // 0x27ec90: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ec94: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x27ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x27ec98: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27EC98u;
    {
        const bool branch_taken_0x27ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC98u;
        // 0x27ec9c: 0x8c440164  lw          $a0, 0x164($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec98) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECA0u;
label_27eca0:
    // 0x27eca0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27eca4: 0x8c430168  lw          $v1, 0x168($v0)
    ctx->pc = 0x27eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x27eca8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27ECA8u;
    {
        const bool branch_taken_0x27eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECA8u;
        // 0x27ecac: 0x8c44016c  lw          $a0, 0x16C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eca8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECB0u;
label_27ecb0:
    // 0x27ecb0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ecb4: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x27ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x27ecb8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27ECB8u;
    {
        const bool branch_taken_0x27ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECB8u;
        // 0x27ecbc: 0x8c4400e4  lw          $a0, 0xE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecb8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECC0u;
label_27ecc0:
    // 0x27ecc0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ecc4: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x27ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x27ecc8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27ECC8u;
    {
        const bool branch_taken_0x27ecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECC8u;
        // 0x27eccc: 0x8c4400ec  lw          $a0, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecc8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECD0u;
label_27ecd0:
    // 0x27ecd0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ecd4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x27ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27ecd8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27ECD8u;
    {
        const bool branch_taken_0x27ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECD8u;
        // 0x27ecdc: 0x8c4400f4  lw          $a0, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecd8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECE0u;
label_27ece0:
    // 0x27ece0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ece4: 0x8c4300f8  lw          $v1, 0xF8($v0)
    ctx->pc = 0x27ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x27ece8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27ECE8u;
    {
        const bool branch_taken_0x27ece8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECE8u;
        // 0x27ecec: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ece8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ECF0u;
label_27ecf0:
    // 0x27ecf0: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ecf4: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x27ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x27ecf8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27ECF8u;
    {
        const bool branch_taken_0x27ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECF8u;
        // 0x27ecfc: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecf8) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED00u;
label_27ed00:
    // 0x27ed00: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed04: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x27ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x27ed08: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27ED08u;
    {
        const bool branch_taken_0x27ed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED08u;
        // 0x27ed0c: 0x8c44010c  lw          $a0, 0x10C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed08) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED10u;
label_27ed10:
    // 0x27ed10: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed14: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x27ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x27ed18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27ED18u;
    {
        const bool branch_taken_0x27ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED18u;
        // 0x27ed1c: 0x8c440114  lw          $a0, 0x114($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed18) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED20u;
label_27ed20:
    // 0x27ed20: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed24: 0x8c430118  lw          $v1, 0x118($v0)
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x27ed28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27ED28u;
    {
        const bool branch_taken_0x27ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED28u;
        // 0x27ed2c: 0x8c44011c  lw          $a0, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed28) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED30u;
label_27ed30:
    // 0x27ed30: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed34: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x27ed38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27ED38u;
    {
        const bool branch_taken_0x27ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED38u;
        // 0x27ed3c: 0x8c440124  lw          $a0, 0x124($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed38) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED40u;
label_27ed40:
    // 0x27ed40: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed44: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x27ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x27ed48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27ED48u;
    {
        const bool branch_taken_0x27ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED48u;
        // 0x27ed4c: 0x8c44012c  lw          $a0, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed48) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED50u;
label_27ed50:
    // 0x27ed50: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed54: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x27ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x27ed58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27ED58u;
    {
        const bool branch_taken_0x27ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED58u;
        // 0x27ed5c: 0x8c440134  lw          $a0, 0x134($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed58) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED60u;
label_27ed60:
    // 0x27ed60: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed64: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x27ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x27ed68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27ED68u;
    {
        const bool branch_taken_0x27ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED68u;
        // 0x27ed6c: 0x8c44013c  lw          $a0, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed68) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED70u;
label_27ed70:
    // 0x27ed70: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed74: 0x8c430140  lw          $v1, 0x140($v0)
    ctx->pc = 0x27ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x27ed78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27ED78u;
    {
        const bool branch_taken_0x27ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED78u;
        // 0x27ed7c: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed78) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED80u;
label_27ed80:
    // 0x27ed80: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed84: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x27ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x27ed88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED88u;
    {
        const bool branch_taken_0x27ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED88u;
        // 0x27ed8c: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed88) {
            ctx->pc = 0x27ED9Cu;
            goto label_27ed9c;
        }
    }
    ctx->pc = 0x27ED90u;
label_27ed90:
    // 0x27ed90: 0x8ce20304  lw          $v0, 0x304($a3)
    ctx->pc = 0x27ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 772)));
    // 0x27ed94: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27ed98: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x27ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_27ed9c:
    // 0x27ed9c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x27ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27eda0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x27eda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27eda4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x27eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eda8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27eda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27edac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x27edacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27edb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27edb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edb4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27EDB4u;
    SET_GPR_U32(ctx, 31, 0x27EDBCu);
    ctx->pc = 0x27EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDB4u;
    // 0x27edb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27EDB4u, 0x27EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDBCu;
label_27edbc:
    // 0x27edbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27edc0: 0x3e00008  jr          $ra
    ctx->pc = 0x27EDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDC0u;
        // 0x27edc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EDC8u;
}
