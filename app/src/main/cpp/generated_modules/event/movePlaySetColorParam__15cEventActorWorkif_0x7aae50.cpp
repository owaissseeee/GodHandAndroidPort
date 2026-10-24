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
// Function: movePlaySetColorParam__15cEventActorWorkif
// Address: 0x7aae50 - 0x7aafb8
void movePlaySetColorParam__15cEventActorWorkif_0x7aae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySetColorParam__15cEventActorWorkif_0x7aae50");
#endif

    switch (ctx->pc) {
        case 0x7aae98u: goto label_7aae98;
        case 0x7aaeacu: goto label_7aaeac;
        case 0x7aaf34u: goto label_7aaf34;
        case 0x7aaf54u: goto label_7aaf54;
        default: break;
    }

    ctx->pc = 0x7aae50u;

    // 0x7aae50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7aae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7aae54: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7aae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7aae58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7aae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7aae5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7aae5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aae60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7aae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7aae64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7aae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7aae68: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x7aae68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7aae6c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x7aae6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x7aae70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7aae70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aae74: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7aae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7aae78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7aae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7aae7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aae80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x7aae80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x7aae84: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x7aae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x7aae88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7aae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7aae8c: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x7aae8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x7aae90: 0xc1eae0c  jal         func_7AB830
    ctx->pc = 0x7AAE90u;
    SET_GPR_U32(ctx, 31, 0x7AAE98u);
    ctx->pc = 0x7AAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAE90u;
    // 0x7aae94: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB830u, 0x7AAE90u, 0x7AAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAE98u;
label_7aae98:
    // 0x7aae98: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aae9c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x7aae9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x7aaea0: 0x24845248  addiu       $a0, $a0, 0x5248
    ctx->pc = 0x7aaea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    // 0x7aaea4: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7AAEA4u;
    SET_GPR_U32(ctx, 31, 0x7AAEACu);
    ctx->pc = 0x7AAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAEA4u;
    // 0x7aaea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7AAEA4u, 0x7AAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAEACu;
label_7aaeac:
    // 0x7aaeac: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7AAEACu;
    {
        const bool branch_taken_0x7aaeac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aaeac) {
            ctx->pc = 0x7AAF0Cu;
            goto label_7aaf0c;
        }
    }
    ctx->pc = 0x7AAEB4u;
    // 0x7aaeb4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x7aaeb4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aaeb8: 0x0  nop
    ctx->pc = 0x7aaeb8u;
    // NOP
    // 0x7aaebc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7aaebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7aaec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7aaec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7aaec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aaec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aaec8: 0x0  nop
    ctx->pc = 0x7aaec8u;
    // NOP
    // 0x7aaecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x7aaeccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7aaed0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x7aaed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7aaed4: 0x0  nop
    ctx->pc = 0x7aaed4u;
    // NOP
    // 0x7aaed8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x7AAED8u;
    {
        const bool branch_taken_0x7aaed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7aaed8) {
            ctx->pc = 0x7AAEECu;
            goto label_7aaeec;
        }
    }
    ctx->pc = 0x7AAEE0u;
    // 0x7aaee0: 0xe674001c  swc1        $f20, 0x1C($s3)
    ctx->pc = 0x7aaee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x7aaee4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7AAEE4u;
    {
        const bool branch_taken_0x7aaee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAEE4u;
        // 0x7aaee8: 0xae700020  sw          $s0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaee4) {
            ctx->pc = 0x7AAF94u;
            goto label_7aaf94;
        }
    }
    ctx->pc = 0x7AAEECu;
label_7aaeec:
    // 0x7aaeec: 0x56800009  bnel        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AAEECu;
    {
        const bool branch_taken_0x7aaeec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aaeec) {
            ctx->pc = 0x7AAEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AAEECu;
            // 0x7aaef0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AAF14u;
            goto label_7aaf14;
        }
    }
    ctx->pc = 0x7AAEF4u;
    // 0x7aaef4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x7aaef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7aaef8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AAEF8u;
    {
        const bool branch_taken_0x7aaef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aaef8) {
            ctx->pc = 0x7AAF0Cu;
            goto label_7aaf0c;
        }
    }
    ctx->pc = 0x7AAF00u;
    // 0x7aaf00: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x7aaf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x7aaf04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7AAF04u;
    {
        const bool branch_taken_0x7aaf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAF04u;
        // 0x7aaf08: 0xae700020  sw          $s0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaf04) {
            ctx->pc = 0x7AAF94u;
            goto label_7aaf94;
        }
    }
    ctx->pc = 0x7AAF0Cu;
label_7aaf0c:
    // 0x7aaf0c: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x7AAF0Cu;
    {
        const bool branch_taken_0x7aaf0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAF0Cu;
        // 0x7aaf10: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaf0c) {
            ctx->pc = 0x7AAF8Cu;
            goto label_7aaf8c;
        }
    }
    ctx->pc = 0x7AAF14u;
label_7aaf14:
    // 0x7aaf14: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x7aaf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x7aaf18: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x7aaf18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7aaf1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7aaf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aaf20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7aaf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aaf24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7aaf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7aaf28: 0x8451001a  lh          $s1, 0x1A($v0)
    ctx->pc = 0x7aaf28u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x7aaf2c: 0xc1eae18  jal         func_7AB860
    ctx->pc = 0x7AAF2Cu;
    SET_GPR_U32(ctx, 31, 0x7AAF34u);
    ctx->pc = 0x7AAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAF2Cu;
    // 0x7aaf30: 0x90520019  lbu         $s2, 0x19($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB860u, 0x7AAF2Cu, 0x7AAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAF34u;
label_7aaf34:
    // 0x7aaf34: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x7aaf34u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aaf38: 0x0  nop
    ctx->pc = 0x7aaf38u;
    // NOP
    // 0x7aaf3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aaf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aaf40: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aaf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aaf44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aaf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aaf48: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x7aaf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7aaf4c: 0xc1eba56  jal         func_7AE958
    ctx->pc = 0x7AAF4Cu;
    SET_GPR_U32(ctx, 31, 0x7AAF54u);
    ctx->pc = 0x7AAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAF4Cu;
    // 0x7aaf50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE958u, 0x7AAF4Cu, 0x7AAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAF54u;
label_7aaf54:
    // 0x7aaf54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aaf54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aaf58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7aaf58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7aaf5c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7AAF5Cu;
    {
        const bool branch_taken_0x7aaf5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aaf5c) {
            ctx->pc = 0x7AAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AAF5Cu;
            // 0x7aaf60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AAF64u;
            goto label_7aaf64;
        }
    }
    ctx->pc = 0x7AAF64u;
label_7aaf64:
    // 0x7aaf64: 0xae740020  sw          $s4, 0x20($s3)
    ctx->pc = 0x7aaf64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 20));
    // 0x7aaf68: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x7aaf68u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7aaf6c: 0x1012  mflo        $v0
    ctx->pc = 0x7aaf6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x7aaf70: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x7aaf70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x7aaf74: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x7aaf74u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aaf78: 0x0  nop
    ctx->pc = 0x7aaf78u;
    // NOP
    // 0x7aaf7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7aaf7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7aaf80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x7aaf80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x7aaf84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AAF84u;
    {
        const bool branch_taken_0x7aaf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAF84u;
        // 0x7aaf88: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aaf84) {
            ctx->pc = 0x7AAF94u;
            goto label_7aaf94;
        }
    }
    ctx->pc = 0x7AAF8Cu;
label_7aaf8c:
    // 0x7aaf8c: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x7aaf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x7aaf90: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x7aaf90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_7aaf94:
    // 0x7aaf94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7aaf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7aaf98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7aaf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7aaf9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7aaf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7aafa0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7aafa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aafa4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7aafa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aafa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aafa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aafac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x7aafacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7aafb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AAFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAFB0u;
        // 0x7aafb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AAFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AAFB8u;
}
} // namespace gh_event
