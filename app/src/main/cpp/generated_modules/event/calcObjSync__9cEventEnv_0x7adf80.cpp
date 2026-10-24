#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: calcObjSync__9cEventEnv
// Address: 0x7adf80 - 0x7ae118
void calcObjSync__9cEventEnv_0x7adf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcObjSync__9cEventEnv_0x7adf80");
#endif

    switch (ctx->pc) {
        case 0x7adfdcu: goto label_7adfdc;
        case 0x7ae00cu: goto label_7ae00c;
        case 0x7ae028u: goto label_7ae028;
        case 0x7ae040u: goto label_7ae040;
        default: break;
    }

    ctx->pc = 0x7adf80u;

    // 0x7adf80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7adf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7adf84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7adf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7adf88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7adf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7adf8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7adf8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adf90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7adf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7adf94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7adf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7adf98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7adf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7adf9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7adf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7adfa0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x7adfa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x7adfa4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x7adfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7adfa8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x7adfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x7adfac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7adfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7adfb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7adfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7adfb4: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x7adfb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x7adfb8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7adfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7adfbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x7adfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x7adfc0: 0x5460004b  bnel        $v1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x7ADFC0u;
    {
        const bool branch_taken_0x7adfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7adfc0) {
            ctx->pc = 0x7ADFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADFC0u;
            // 0x7adfc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE0F0u;
            goto label_7ae0f0;
        }
    }
    ctx->pc = 0x7ADFC8u;
    // 0x7adfc8: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x7adfc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7adfcc: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7adfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7adfd0: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x7adfd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x7adfd4: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7ADFD4u;
    SET_GPR_U32(ctx, 31, 0x7ADFDCu);
    ctx->pc = 0x7ADFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADFD4u;
    // 0x7adfd8: 0x248458d8  addiu       $a0, $a0, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7ADFD4u, 0x7ADFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADFDCu;
label_7adfdc:
    // 0x7adfdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7adfdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adfe0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7adfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7adfe4: 0x1242001e  beq         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7ADFE4u;
    {
        const bool branch_taken_0x7adfe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x7ADFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADFE4u;
        // 0x7adfe8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adfe4) {
            ctx->pc = 0x7AE060u;
            goto label_7ae060;
        }
    }
    ctx->pc = 0x7ADFECu;
    // 0x7adfec: 0x16540009  bne         $s2, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADFECu;
    {
        const bool branch_taken_0x7adfec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x7ADFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADFECu;
        // 0x7adff0: 0x3c11007b  lui         $s1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adfec) {
            ctx->pc = 0x7AE014u;
            goto label_7ae014;
        }
    }
    ctx->pc = 0x7ADFF4u;
    // 0x7adff4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7adff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7adff8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x7adff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7adffc: 0x24425248  addiu       $v0, $v0, 0x5248
    ctx->pc = 0x7adffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21064));
    // 0x7ae000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ae000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae004: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7AE004u;
    SET_GPR_U32(ctx, 31, 0x7AE00Cu);
    ctx->pc = 0x7AE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE004u;
    // 0x7ae008: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7AE004u, 0x7AE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE00Cu;
label_7ae00c:
    // 0x7ae00c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x7AE00Cu;
    {
        const bool branch_taken_0x7ae00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE00Cu;
        // 0x7ae010: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae00c) {
            ctx->pc = 0x7AE098u;
            goto label_7ae098;
        }
    }
    ctx->pc = 0x7AE014u;
label_7ae014:
    // 0x7ae014: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x7ae014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7ae018: 0x26304f80  addiu       $s0, $s1, 0x4F80
    ctx->pc = 0x7ae018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20352));
    // 0x7ae01c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7ae01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae020: 0xc1ea620  jal         func_7A9880
    ctx->pc = 0x7AE020u;
    SET_GPR_U32(ctx, 31, 0x7AE028u);
    ctx->pc = 0x7AE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE020u;
    // 0x7ae024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9880u, 0x7AE020u, 0x7AE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE028u;
label_7ae028:
    // 0x7ae028: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7ae028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7ae02c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x7ae02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7ae030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ae030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae034: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x7ae034u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x7ae038: 0xc1ea632  jal         func_7A98C8
    ctx->pc = 0x7AE038u;
    SET_GPR_U32(ctx, 31, 0x7AE040u);
    ctx->pc = 0x7AE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE038u;
    // 0x7ae03c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A98C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A98C8u, 0x7AE038u, 0x7AE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE040u;
label_7ae040:
    // 0x7ae040: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7ae040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7ae044: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x7ae044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7ae048: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x7ae048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7ae04c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7ae04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7ae050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7ae050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7ae054: 0x80630009  lb          $v1, 0x9($v1)
    ctx->pc = 0x7ae054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x7ae058: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE058u;
    {
        const bool branch_taken_0x7ae058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x7AE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE058u;
        // 0x7ae05c: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae058) {
            ctx->pc = 0x7AE068u;
            goto label_7ae068;
        }
    }
    ctx->pc = 0x7AE060u;
label_7ae060:
    // 0x7ae060: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7AE060u;
    {
        const bool branch_taken_0x7ae060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE060u;
        // 0x7ae064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae060) {
            ctx->pc = 0x7AE0F0u;
            goto label_7ae0f0;
        }
    }
    ctx->pc = 0x7AE068u;
label_7ae068:
    // 0x7ae068: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE068u;
    {
        const bool branch_taken_0x7ae068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE068u;
        // 0x7ae06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae068) {
            ctx->pc = 0x7AE078u;
            goto label_7ae078;
        }
    }
    ctx->pc = 0x7AE070u;
    // 0x7ae070: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x7AE070u;
    {
        const bool branch_taken_0x7ae070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE070u;
        // 0x7ae074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae070) {
            ctx->pc = 0x7AE0F0u;
            goto label_7ae0f0;
        }
    }
    ctx->pc = 0x7AE078u;
label_7ae078:
    // 0x7ae078: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x7ae078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7ae07c: 0x26234f80  addiu       $v1, $s1, 0x4F80
    ctx->pc = 0x7ae07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20352));
    // 0x7ae080: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x7ae080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7ae084: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x7ae084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7ae088: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x7ae088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae08c: 0xe7300b  movn        $a2, $a3, $a3
    ctx->pc = 0x7ae08cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x7ae090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7ae090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7ae094: 0xc4540010  lwc1        $f20, 0x10($v0)
    ctx->pc = 0x7ae094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7ae098:
    // 0x7ae098: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AE098u;
    {
        const bool branch_taken_0x7ae098 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x7AE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE098u;
        // 0x7ae09c: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae098) {
            ctx->pc = 0x7AE0B4u;
            goto label_7ae0b4;
        }
    }
    ctx->pc = 0x7AE0A0u;
    // 0x7ae0a0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x7ae0a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ae0a4: 0x0  nop
    ctx->pc = 0x7ae0a4u;
    // NOP
    // 0x7ae0a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7ae0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7ae0ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7AE0ACu;
    {
        const bool branch_taken_0x7ae0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ae0ac) {
            ctx->pc = 0x7AE0CCu;
            goto label_7ae0cc;
        }
    }
    ctx->pc = 0x7AE0B4u;
label_7ae0b4:
    // 0x7ae0b4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x7ae0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x7ae0b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ae0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ae0bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x7ae0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ae0c0: 0x0  nop
    ctx->pc = 0x7ae0c0u;
    // NOP
    // 0x7ae0c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7ae0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7ae0c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x7ae0c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_7ae0cc:
    // 0x7ae0cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ae0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ae0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ae0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ae0d4: 0x0  nop
    ctx->pc = 0x7ae0d4u;
    // NOP
    // 0x7ae0d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7ae0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7ae0dc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x7ae0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ae0e0: 0x0  nop
    ctx->pc = 0x7ae0e0u;
    // NOP
    // 0x7ae0e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x7AE0E4u;
    {
        const bool branch_taken_0x7ae0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x7AE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE0E4u;
        // 0x7ae0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae0e4) {
            ctx->pc = 0x7AE0F0u;
            goto label_7ae0f0;
        }
    }
    ctx->pc = 0x7AE0ECu;
    // 0x7ae0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ae0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ae0f0:
    // 0x7ae0f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7ae0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ae0f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7ae0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ae0f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7ae0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ae0fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7ae0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ae100: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7ae100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae108: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x7ae108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7ae10c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE10Cu;
        // 0x7ae110: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE114u;
    // 0x7ae114: 0x0  nop
    ctx->pc = 0x7ae114u;
    // NOP
    ctx->pc = 0x7ae118u;
}
} // namespace gh_event
