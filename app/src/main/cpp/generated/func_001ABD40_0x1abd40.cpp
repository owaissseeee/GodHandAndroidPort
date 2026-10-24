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

// Function: func_001ABD40
// Address: 0x1abd40 - 0x1abe08
void func_001ABD40_0x1abd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABD40_0x1abd40");
#endif

    switch (ctx->pc) {
        case 0x1abd54u: goto label_1abd54;
        case 0x1abdd8u: goto label_1abdd8;
        default: break;
    }

    ctx->pc = 0x1abd40u;

    // 0x1abd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abd44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1abd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abd4c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1ABD4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD54u);
    ctx->pc = 0x1ABD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD4Cu;
    // 0x1abd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1ABD4Cu, 0x1ABD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD54u;
label_1abd54:
    // 0x1abd54: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1abd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1abd58: 0x26020630  addiu       $v0, $s0, 0x630
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1abd5c: 0x24637e60  addiu       $v1, $v1, 0x7E60
    ctx->pc = 0x1abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32352));
    // 0x1abd60: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1abd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1abd64: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x1abd64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd68: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x1abd68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd6c: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x1abd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd70: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x1abd70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd74: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x1abd74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd78: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x1abd78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd7c: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x1abd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd80: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x1abd80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd84: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x1abd84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd88: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x1abd88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd8c: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x1abd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd90: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x1abd90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd94: 0xfa000740  sqc2        $vf0, 0x740($s0)
    ctx->pc = 0x1abd94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1856), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd98: 0xfa000750  sqc2        $vf0, 0x750($s0)
    ctx->pc = 0x1abd98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1872), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1abd9c: 0xa2000630  sb          $zero, 0x630($s0)
    ctx->pc = 0x1abd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1584), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abda0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abda4: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1abda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x1abda8: 0x2603063c  addiu       $v1, $s0, 0x63C
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1596));
    // 0x1abdac: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1abdacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abdb0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1abdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abdb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1abdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1abdb8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1abdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1abdbc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1abdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1abdc0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1abdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1abdc4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1abdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1abdc8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1abdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1abdcc: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1abdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x1abdd0: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x1abdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x1abdd4: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1abdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_1abdd8:
    // 0x1abdd8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1abdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1abddc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1abde0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1abde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1abde4: 0x0  nop
    ctx->pc = 0x1abde4u;
    // NOP
    // 0x1abde8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ABDE8u;
    {
        const bool branch_taken_0x1abde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDE8u;
        // 0x1abdec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abde8) {
            ctx->pc = 0x1ABDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abdd8;
        }
    }
    ctx->pc = 0x1ABDF0u;
    // 0x1abdf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abdf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDFCu;
        // 0x1abe00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE04u;
    // 0x1abe04: 0x0  nop
    ctx->pc = 0x1abe04u;
    // NOP
    ctx->pc = 0x1abe08u;
}
