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
// Function: movePlay__C21cEventAdditionalLight
// Address: 0x7ac1c0 - 0x7ac2e8
void movePlay__C21cEventAdditionalLight_0x7ac1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C21cEventAdditionalLight_0x7ac1c0");
#endif

    switch (ctx->pc) {
        case 0x7ac1f8u: goto label_7ac1f8;
        case 0x7ac204u: goto label_7ac204;
        case 0x7ac228u: goto label_7ac228;
        case 0x7ac260u: goto label_7ac260;
        case 0x7ac278u: goto label_7ac278;
        case 0x7ac284u: goto label_7ac284;
        case 0x7ac2a8u: goto label_7ac2a8;
        case 0x7ac2c0u: goto label_7ac2c0;
        default: break;
    }

    ctx->pc = 0x7ac1c0u;

    // 0x7ac1c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7ac1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7ac1c4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7ac1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7ac1c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7ac1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7ac1cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ac1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac1d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7ac1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7ac1d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7ac1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac1d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7ac1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7ac1dc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7ac1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7ac1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac1e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7ac1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7ac1e8: 0x8e330014  lw          $s3, 0x14($s1)
    ctx->pc = 0x7ac1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7ac1ec: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x7AC1ECu;
    {
        const bool branch_taken_0x7ac1ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC1ECu;
        // 0x7ac1f0: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac1ec) {
            ctx->pc = 0x7AC238u;
            goto label_7ac238;
        }
    }
    ctx->pc = 0x7AC1F4u;
    // 0x7ac1f4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x7ac1f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7ac1f8:
    // 0x7ac1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ac1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac1fc: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7AC1FCu;
    SET_GPR_U32(ctx, 31, 0x7AC204u);
    ctx->pc = 0x7AC200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC1FCu;
    // 0x7ac200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7AC1FCu, 0x7AC204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC204u;
label_7ac204:
    // 0x7ac204: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AC204u;
    {
        const bool branch_taken_0x7ac204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ac204) {
            ctx->pc = 0x7AC208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC204u;
            // 0x7ac208: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC22Cu;
            goto label_7ac22c;
        }
    }
    ctx->pc = 0x7AC20Cu;
    // 0x7ac20c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x7ac20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ac210: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC210u;
    {
        const bool branch_taken_0x7ac210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ac210) {
            ctx->pc = 0x7AC214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC210u;
            // 0x7ac214: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC22Cu;
            goto label_7ac22c;
        }
    }
    ctx->pc = 0x7AC218u;
    // 0x7ac218: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AC218u;
    {
        const bool branch_taken_0x7ac218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x7AC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC218u;
        // 0x7ac21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac218) {
            ctx->pc = 0x7AC228u;
            goto label_7ac228;
        }
    }
    ctx->pc = 0x7AC220u;
    // 0x7ac220: 0xc1eb0ba  jal         func_7AC2E8
    ctx->pc = 0x7AC220u;
    SET_GPR_U32(ctx, 31, 0x7AC228u);
    ctx->pc = 0x7AC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC220u;
    // 0x7ac224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC2E8u, 0x7AC220u, 0x7AC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC228u;
label_7ac228:
    // 0x7ac228: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7ac228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7ac22c:
    // 0x7ac22c: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x7ac22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7ac230: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7AC230u;
    {
        const bool branch_taken_0x7ac230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC230u;
        // 0x7ac234: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac230) {
            ctx->pc = 0x7AC1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac1f8;
        }
    }
    ctx->pc = 0x7AC238u;
label_7ac238:
    // 0x7ac238: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ac238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ac23c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7ac23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ac240: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x7ac240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x7ac244: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x7ac244u;
    { uint32_t bits = FAST_READ32(0x7B5294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ac248: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ac248u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ac24c: 0x0  nop
    ctx->pc = 0x7ac24cu;
    // NOP
    // 0x7ac250: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x7AC250u;
    {
        const bool branch_taken_0x7ac250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ac250) {
            ctx->pc = 0x7AC254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC250u;
            // 0x7ac254: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC264u;
            goto label_7ac264;
        }
    }
    ctx->pc = 0x7AC258u;
    // 0x7ac258: 0xc1eaf7a  jal         func_7ABDE8
    ctx->pc = 0x7AC258u;
    SET_GPR_U32(ctx, 31, 0x7AC260u);
    ctx->pc = 0x7AC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC258u;
    // 0x7ac25c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ABDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ABDE8u, 0x7AC258u, 0x7AC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC260u;
label_7ac260:
    // 0x7ac260: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x7ac260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_7ac264:
    // 0x7ac264: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x7AC264u;
    {
        const bool branch_taken_0x7ac264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC264u;
        // 0x7ac268: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac264) {
            ctx->pc = 0x7AC2B8u;
            goto label_7ac2b8;
        }
    }
    ctx->pc = 0x7AC26Cu;
    // 0x7ac26c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x7ac26cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ac270: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x7ac270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7ac274: 0x0  nop
    ctx->pc = 0x7ac274u;
    // NOP
label_7ac278:
    // 0x7ac278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ac278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac27c: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7AC27Cu;
    SET_GPR_U32(ctx, 31, 0x7AC284u);
    ctx->pc = 0x7AC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC27Cu;
    // 0x7ac280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7AC27Cu, 0x7AC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC284u;
label_7ac284:
    // 0x7ac284: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AC284u;
    {
        const bool branch_taken_0x7ac284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ac284) {
            ctx->pc = 0x7AC288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC284u;
            // 0x7ac288: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC2ACu;
            goto label_7ac2ac;
        }
    }
    ctx->pc = 0x7AC28Cu;
    // 0x7ac28c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x7ac28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7ac290: 0x50550006  beql        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AC290u;
    {
        const bool branch_taken_0x7ac290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x7ac290) {
            ctx->pc = 0x7AC294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AC290u;
            // 0x7ac294: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AC2ACu;
            goto label_7ac2ac;
        }
    }
    ctx->pc = 0x7AC298u;
    // 0x7ac298: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AC298u;
    {
        const bool branch_taken_0x7ac298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x7AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC298u;
        // 0x7ac29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac298) {
            ctx->pc = 0x7AC2A8u;
            goto label_7ac2a8;
        }
    }
    ctx->pc = 0x7AC2A0u;
    // 0x7ac2a0: 0xc1eb0cc  jal         func_7AC330
    ctx->pc = 0x7AC2A0u;
    SET_GPR_U32(ctx, 31, 0x7AC2A8u);
    ctx->pc = 0x7AC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC2A0u;
    // 0x7ac2a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC330u, 0x7AC2A0u, 0x7AC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC2A8u;
label_7ac2a8:
    // 0x7ac2a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7ac2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7ac2ac:
    // 0x7ac2ac: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x7ac2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7ac2b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7AC2B0u;
    {
        const bool branch_taken_0x7ac2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC2B0u;
        // 0x7ac2b4: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac2b0) {
            ctx->pc = 0x7AC278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac278;
        }
    }
    ctx->pc = 0x7AC2B8u;
label_7ac2b8:
    // 0x7ac2b8: 0xc1eb16c  jal         func_7AC5B0
    ctx->pc = 0x7AC2B8u;
    SET_GPR_U32(ctx, 31, 0x7AC2C0u);
    ctx->pc = 0x7AC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC2B8u;
    // 0x7ac2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC5B0u, 0x7AC2B8u, 0x7AC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC2C0u;
label_7ac2c0:
    // 0x7ac2c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7ac2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ac2c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7ac2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ac2c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7ac2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ac2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7ac2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ac2d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7ac2d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ac2d4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7ac2d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ac2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC2DCu;
        // 0x7ac2e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC2E4u;
    // 0x7ac2e4: 0x0  nop
    ctx->pc = 0x7ac2e4u;
    // NOP
    ctx->pc = 0x7ac2e8u;
}
} // namespace gh_event
