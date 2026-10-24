#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079AF58
// Address: 0x79af58 - 0x79b0b0
void func_0079AF58_0x79af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AF58_0x79af58");
#endif

    switch (ctx->pc) {
        case 0x79af90u: goto label_79af90;
        case 0x79afa0u: goto label_79afa0;
        case 0x79afb0u: goto label_79afb0;
        case 0x79afc8u: goto label_79afc8;
        case 0x79afdcu: goto label_79afdc;
        case 0x79b034u: goto label_79b034;
        case 0x79b058u: goto label_79b058;
        case 0x79b064u: goto label_79b064;
        case 0x79b06cu: goto label_79b06c;
        case 0x79b078u: goto label_79b078;
        default: break;
    }

    ctx->pc = 0x79af58u;

    // 0x79af58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79af5c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79af60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79af64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79af68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79af6c: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x79af70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79af74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79af74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af78: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79af7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79af7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af80: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79af84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79af88: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AF88u;
    SET_GPR_U32(ctx, 31, 0x79AF90u);
    ctx->pc = 0x79AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF88u;
    // 0x79af8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AF88u, 0x79AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF90u;
label_79af90:
    // 0x79af90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79af94: 0x2c630014  sltiu       $v1, $v1, 0x14
    ctx->pc = 0x79af94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x79af98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AF98u;
    {
        const bool branch_taken_0x79af98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF98u;
        // 0x79af9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af98) {
            ctx->pc = 0x79AFA8u;
            goto label_79afa8;
        }
    }
    ctx->pc = 0x79AFA0u;
label_79afa0:
    // 0x79afa0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x79AFA0u;
    {
        const bool branch_taken_0x79afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA0u;
        // 0x79afa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afa0) {
            ctx->pc = 0x79B08Cu;
            goto label_79b08c;
        }
    }
    ctx->pc = 0x79AFA8u;
label_79afa8:
    // 0x79afa8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AFA8u;
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x79AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA8u;
    // 0x79afac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AFA8u, 0x79AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79afb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79afb8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x79afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x79afbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AFBCu;
    {
        const bool branch_taken_0x79afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFBCu;
        // 0x79afc0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afbc) {
            ctx->pc = 0x79AFD4u;
            goto label_79afd4;
        }
    }
    ctx->pc = 0x79AFC4u;
    // 0x79afc4: 0x0  nop
    ctx->pc = 0x79afc4u;
    // NOP
label_79afc8:
    // 0x79afc8: 0x2c420201  sltiu       $v0, $v0, 0x201
    ctx->pc = 0x79afc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x79afcc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79AFCCu;
    {
        const bool branch_taken_0x79afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFCCu;
        // 0x79afd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afcc) {
            ctx->pc = 0x79AFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afa0;
        }
    }
    ctx->pc = 0x79AFD4u;
label_79afd4:
    // 0x79afd4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x79AFD4u;
    SET_GPR_U32(ctx, 31, 0x79AFDCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x79AFD4u, 0x79AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFDCu;
label_79afdc:
    // 0x79afdc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79afe0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x79afe4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x79afe4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79afe8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79AFE8u;
    {
        const bool branch_taken_0x79afe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79afe8) {
            ctx->pc = 0x79AFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AFE8u;
            // 0x79afec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AFF0u;
            goto label_79aff0;
        }
    }
    ctx->pc = 0x79AFF0u;
label_79aff0:
    // 0x79aff0: 0x2010  mfhi        $a0
    ctx->pc = 0x79aff0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79aff4: 0x2492000b  addiu       $s2, $a0, 0xB
    ctx->pc = 0x79aff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
    // 0x79aff8: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x79affc: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x79affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x79b000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b004: 0x652806  srlv        $a1, $a1, $v1
    ctx->pc = 0x79b004u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x79b008: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x79b00c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b010: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x79b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x79b014: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79B014u;
    {
        const bool branch_taken_0x79b014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B014u;
        // 0x79b018: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b014) {
            ctx->pc = 0x79AFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79afc8;
        }
    }
    ctx->pc = 0x79B01Cu;
    // 0x79b01c: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x79b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79b020: 0x26918658  addiu       $s1, $s4, -0x79A8
    ctx->pc = 0x79b020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79b024: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x79b024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x79b028: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b02c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B02Cu;
    SET_GPR_U32(ctx, 31, 0x79B034u);
    ctx->pc = 0x79B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B02Cu;
    // 0x79b030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B02Cu, 0x79B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B034u;
label_79b034:
    // 0x79b034: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x79b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b038: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79b038u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79b03c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79b03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79b040: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b044: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79b044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x79b048: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b04c: 0xa3b20000  sb          $s2, 0x0($sp)
    ctx->pc = 0x79b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x79b050: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x79B050u;
    SET_GPR_U32(ctx, 31, 0x79B058u);
    ctx->pc = 0x79B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B050u;
    // 0x79b054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79B050u, 0x79B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B058u;
label_79b058:
    // 0x79b058: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79b058u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b05c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B05Cu;
    SET_GPR_U32(ctx, 31, 0x79B064u);
    ctx->pc = 0x79B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B05Cu;
    // 0x79b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B05Cu, 0x79B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B064u;
label_79b064:
    // 0x79b064: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B064u;
    SET_GPR_U32(ctx, 31, 0x79B06Cu);
    ctx->pc = 0x79B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B064u;
    // 0x79b068: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B064u, 0x79B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B06Cu;
label_79b06c:
    // 0x79b06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b070: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B070u;
    SET_GPR_U32(ctx, 31, 0x79B078u);
    ctx->pc = 0x79B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B070u;
    // 0x79b074: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B070u, 0x79B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B078u;
label_79b078:
    // 0x79b078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b07c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b088: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x79b088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_79b08c:
    // 0x79b08c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b090: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b094: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b098: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b09c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b09cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b0a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x79B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0A4u;
        // 0x79b0a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B0ACu;
    // 0x79b0ac: 0x0  nop
    ctx->pc = 0x79b0acu;
    // NOP
    ctx->pc = 0x79b0b0u;
}
} // namespace gh_r700
