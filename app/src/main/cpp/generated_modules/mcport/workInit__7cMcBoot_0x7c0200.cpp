#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: workInit__7cMcBoot
// Address: 0x7c0200 - 0x7c0300
void workInit__7cMcBoot_0x7c0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("workInit__7cMcBoot_0x7c0200");
#endif

    switch (ctx->pc) {
        case 0x7c0248u: goto label_7c0248;
        case 0x7c0270u: goto label_7c0270;
        case 0x7c02a0u: goto label_7c02a0;
        case 0x7c02a8u: goto label_7c02a8;
        case 0x7c02b8u: goto label_7c02b8;
        case 0x7c02ccu: goto label_7c02cc;
        case 0x7c02dcu: goto label_7c02dc;
        default: break;
    }

    ctx->pc = 0x7c0200u;

    // 0x7c0200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c0204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c020c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x7c020cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x7c0210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c0210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c0218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c021c: 0x24c64230  addiu       $a2, $a2, 0x4230
    ctx->pc = 0x7c021cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16944));
    // 0x7c0220: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x7c0220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x7c0224: 0x24045000  addiu       $a0, $zero, 0x5000
    ctx->pc = 0x7c0224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c0228: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x7c0228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c022c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7c022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7c0230: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x7c0230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c0234: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x7c0234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c0238: 0xa20000f8  sb          $zero, 0xF8($s0)
    ctx->pc = 0x7c0238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c023c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x7c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x7c0240: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C0240u;
    SET_GPR_U32(ctx, 31, 0x7C0248u);
    ctx->pc = 0x7C0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0240u;
    // 0x7c0244: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C0240u, 0x7C0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0248u;
label_7c0248:
    // 0x7c0248: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C0248u;
    {
        const bool branch_taken_0x7c0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0248u;
        // 0x7c024c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0248) {
            ctx->pc = 0x7C025Cu;
            goto label_7c025c;
        }
    }
    ctx->pc = 0x7C0250u;
    // 0x7c0250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c0250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0254: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x7C0254u;
    {
        const bool branch_taken_0x7c0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0254u;
        // 0x7c0258: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0254) {
            ctx->pc = 0x7C02E8u;
            goto label_7c02e8;
        }
    }
    ctx->pc = 0x7C025Cu;
label_7c025c:
    // 0x7c025c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x7c025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x7c0260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c0260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0264: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x7c0264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x7c0268: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x7c0268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x7c026c: 0x0  nop
    ctx->pc = 0x7c026cu;
    // NOP
label_7c0270:
    // 0x7c0270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c0270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c0274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c0274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c0278: 0x0  nop
    ctx->pc = 0x7c0278u;
    // NOP
    // 0x7c027c: 0x0  nop
    ctx->pc = 0x7c027cu;
    // NOP
    // 0x7c0280: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C0280u;
    {
        const bool branch_taken_0x7c0280 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0280u;
        // 0x7c0284: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0280) {
            ctx->pc = 0x7C0270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0270;
        }
    }
    ctx->pc = 0x7C0288u;
    // 0x7c0288: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x7c0288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x7c028c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C028Cu;
    {
        const bool branch_taken_0x7c028c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C028Cu;
        // 0x7c0290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c028c) {
            ctx->pc = 0x7C02C4u;
            goto label_7c02c4;
        }
    }
    ctx->pc = 0x7C0294u;
    // 0x7c0294: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c0294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c0298: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C0298u;
    SET_GPR_U32(ctx, 31, 0x7C02A0u);
    ctx->pc = 0x7C029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0298u;
    // 0x7c029c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C0298u, 0x7C02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C02A0u;
label_7c02a0:
    // 0x7c02a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c02a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c02a4: 0x0  nop
    ctx->pc = 0x7c02a4u;
    // NOP
label_7c02a8:
    // 0x7c02a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c02ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c02acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c02b0: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C02B0u;
    SET_GPR_U32(ctx, 31, 0x7C02B8u);
    ctx->pc = 0x7C02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C02B0u;
    // 0x7c02b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C02B0u, 0x7C02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C02B8u;
label_7c02b8:
    // 0x7c02b8: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x7c02b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c02bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C02BCu;
    {
        const bool branch_taken_0x7c02bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C02BCu;
        // 0x7c02c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c02bc) {
            ctx->pc = 0x7C02A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c02a8;
        }
    }
    ctx->pc = 0x7C02C4u;
label_7c02c4:
    // 0x7c02c4: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C02C4u;
    SET_GPR_U32(ctx, 31, 0x7C02CCu);
    ctx->pc = 0x7C02C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C02C4u;
    // 0x7c02c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C02C4u, 0x7C02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C02CCu;
label_7c02cc:
    // 0x7c02cc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c02d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c02d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c02d4: 0xc1f213a  jal         func_7C84E8
    ctx->pc = 0x7C02D4u;
    SET_GPR_U32(ctx, 31, 0x7C02DCu);
    ctx->pc = 0x7C02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C02D4u;
    // 0x7c02d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C84E8u, 0x7C02D4u, 0x7C02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C02DCu;
label_7c02dc:
    // 0x7c02dc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c02e0: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x7c02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x7c02e4: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x7c02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_7c02e8:
    // 0x7c02e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c02e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c02ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c02ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c02f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c02f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c02f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C02F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C02F4u;
        // 0x7c02f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C02F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C02FCu;
    // 0x7c02fc: 0x0  nop
    ctx->pc = 0x7c02fcu;
    // NOP
    ctx->pc = 0x7c0300u;
}
} // namespace gh_mcport
