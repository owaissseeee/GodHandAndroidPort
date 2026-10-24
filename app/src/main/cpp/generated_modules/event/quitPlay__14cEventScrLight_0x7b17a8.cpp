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
// Function: quitPlay__14cEventScrLight
// Address: 0x7b17a8 - 0x7b1860
void quitPlay__14cEventScrLight_0x7b17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__14cEventScrLight_0x7b17a8");
#endif

    switch (ctx->pc) {
        case 0x7b1804u: goto label_7b1804;
        case 0x7b1810u: goto label_7b1810;
        case 0x7b1834u: goto label_7b1834;
        default: break;
    }

    ctx->pc = 0x7b17a8u;

    // 0x7b17a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b17a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b17ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7b17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x7b17b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b17b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b17b4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7b17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7b17b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b17bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7b17bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7b17c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b17c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b17c4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x7b17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x7b17c8: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x7b17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x7b17cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7b17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7b17d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7b17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7b17d4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x7b17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x7b17d8: 0x8ca36b34  lw          $v1, 0x6B34($a1)
    ctx->pc = 0x7b17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27444)));
    // 0x7b17dc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x7b17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x7b17e0: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x7B17E0u;
    {
        const bool branch_taken_0x7b17e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b17e0) {
            ctx->pc = 0x7B17E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B17E0u;
            // 0x7b17e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B184Cu;
            goto label_7b184c;
        }
    }
    ctx->pc = 0x7B17E8u;
    // 0x7b17e8: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7b17e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x7b17ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b17ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b17f0: 0x26304700  addiu       $s0, $s1, 0x4700
    ctx->pc = 0x7b17f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18176));
    // 0x7b17f4: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x7b17f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x7b17f8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x7b17f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x604778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604778u, _value); } while (0);
    // 0x7b17fc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B17FCu;
    SET_GPR_U32(ctx, 31, 0x7B1804u);
    ctx->pc = 0x7B1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B17FCu;
    // 0x7b1800: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B17FCu, 0x7B1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1804u;
label_7b1804:
    // 0x7b1804: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7b1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7b1808: 0x26107010  addiu       $s0, $s0, 0x7010
    ctx->pc = 0x7b1808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28688));
    // 0x7b180c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x7b180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_7b1810:
    // 0x7b1810: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x7b1810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x7b1814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7b1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7b1818: 0x0  nop
    ctx->pc = 0x7b1818u;
    // NOP
    // 0x7b181c: 0x0  nop
    ctx->pc = 0x7b181cu;
    // NOP
    // 0x7b1820: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7B1820u;
    {
        const bool branch_taken_0x7b1820 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7B1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1820u;
        // 0x7b1824: 0x2610ff90  addiu       $s0, $s0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1820) {
            ctx->pc = 0x7B1810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b1810;
        }
    }
    ctx->pc = 0x7B1828u;
    // 0x7b1828: 0x26244700  addiu       $a0, $s1, 0x4700
    ctx->pc = 0x7b1828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18176));
    // 0x7b182c: 0xc0b6102  jal         func_2D8408
    ctx->pc = 0x7B182Cu;
    SET_GPR_U32(ctx, 31, 0x7B1834u);
    ctx->pc = 0x7B1830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B182Cu;
    // 0x7b1830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8408u, 0x7B182Cu, 0x7B1834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1834u;
label_7b1834:
    // 0x7b1834: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7b1834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7b1838: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x7b1838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x7b183c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x7b183cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x7b1840: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x7b1840u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x7b1844: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x7b1844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C40u, _value); } while (0);
    // 0x7b1848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b1848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b184c:
    // 0x7b184c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b184cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b1850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b1854: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1854u;
        // 0x7b1858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B185Cu;
    // 0x7b185c: 0x0  nop
    ctx->pc = 0x7b185cu;
    // NOP
    ctx->pc = 0x7b1860u;
}
} // namespace gh_event
