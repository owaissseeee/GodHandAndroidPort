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
// Function: sceMcOpen
// Address: 0x7cd7b8 - 0x7cd8e0
void sceMcOpen_0x7cd7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcOpen_0x7cd7b8");
#endif

    switch (ctx->pc) {
        case 0x7cd810u: goto label_7cd810;
        case 0x7cd834u: goto label_7cd834;
        case 0x7cd850u: goto label_7cd850;
        case 0x7cd894u: goto label_7cd894;
        case 0x7cd8a4u: goto label_7cd8a4;
        default: break;
    }

    ctx->pc = 0x7cd7b8u;

    // 0x7cd7b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7cd7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7cd7bc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd7c0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7cd7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7cd7c4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cd7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cd7c8: 0x24561980  addiu       $s6, $v0, 0x1980
    ctx->pc = 0x7cd7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cd7cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cd7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cd7d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7cd7d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd7d4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cd7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cd7d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7cd7d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd7dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cd7e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x7cd7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd7e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7cd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7cd7e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cd7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cd7ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cd7f0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x7cd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cd7f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD7F4u;
    {
        const bool branch_taken_0x7cd7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD7F4u;
        // 0x7cd7f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd7f4) {
            ctx->pc = 0x7CD804u;
            goto label_7cd804;
        }
    }
    ctx->pc = 0x7CD7FCu;
    // 0x7cd7fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x7CD7FCu;
    {
        const bool branch_taken_0x7cd7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD7FCu;
        // 0x7cd800: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd7fc) {
            ctx->pc = 0x7CD8B8u;
            goto label_7cd8b8;
        }
    }
    ctx->pc = 0x7CD804u;
label_7cd804:
    // 0x7cd804: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cd804u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cd808: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CD808u;
    SET_GPR_U32(ctx, 31, 0x7CD810u);
    ctx->pc = 0x7CD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD808u;
    // 0x7cd80c: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CD808u, 0x7CD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD810u;
label_7cd810:
    // 0x7cd810: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x7CD810u;
    {
        const bool branch_taken_0x7cd810 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD810u;
        // 0x7cd814: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd810) {
            ctx->pc = 0x7CD8B8u;
            goto label_7cd8b8;
        }
    }
    ctx->pc = 0x7CD818u;
    // 0x7cd818: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD818u;
    {
        const bool branch_taken_0x7cd818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cd818) {
            ctx->pc = 0x7CD82Cu;
            goto label_7cd82c;
        }
    }
    ctx->pc = 0x7CD820u;
    // 0x7cd820: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x7cd820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cd824: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CD824u;
    {
        const bool branch_taken_0x7cd824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD824u;
        // 0x7cd828: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd824) {
            ctx->pc = 0x7CD83Cu;
            goto label_7cd83c;
        }
    }
    ctx->pc = 0x7CD82Cu;
label_7cd82c:
    // 0x7cd82c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD82Cu;
    SET_GPR_U32(ctx, 31, 0x7CD834u);
    ctx->pc = 0x7CD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD82Cu;
    // 0x7cd830: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD82Cu, 0x7CD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD834u;
label_7cd834:
    // 0x7cd834: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7CD834u;
    {
        const bool branch_taken_0x7cd834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD834u;
        // 0x7cd838: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd834) {
            ctx->pc = 0x7CD8B8u;
            goto label_7cd8b8;
        }
    }
    ctx->pc = 0x7CD83Cu;
label_7cd83c:
    // 0x7cd83c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7cd83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd840: 0x26101a44  addiu       $s0, $s0, 0x1A44
    ctx->pc = 0x7cd840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6724));
    // 0x7cd844: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x7cd844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x7cd848: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CD848u;
    SET_GPR_U32(ctx, 31, 0x7CD850u);
    ctx->pc = 0x7CD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD848u;
    // 0x7cd84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CD848u, 0x7CD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD850u;
label_7cd850:
    // 0x7cd850: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x7cd850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x7cd854: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x7cd854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x7cd858: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cd858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cd85c: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cd85cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cd860: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x7cd860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x7cd864: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7cd864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd868: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x7cd868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x7cd86c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x7cd86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd870: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x7cd870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7cd874: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cd874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cd878: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cd878u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cd87c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7cd87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7cd880: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cd880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cd884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cd884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cd888: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7cd888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7cd88c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CD88Cu;
    SET_GPR_U32(ctx, 31, 0x7CD894u);
    ctx->pc = 0x7CD890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD88Cu;
    // 0x7cd890: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CD88Cu, 0x7CD894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD894u;
label_7cd894:
    // 0x7cd894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CD894u;
    {
        const bool branch_taken_0x7cd894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD894u;
        // 0x7cd898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd894) {
            ctx->pc = 0x7CD8ACu;
            goto label_7cd8ac;
        }
    }
    ctx->pc = 0x7CD89Cu;
    // 0x7cd89c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD89Cu;
    SET_GPR_U32(ctx, 31, 0x7CD8A4u);
    ctx->pc = 0x7CD8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD89Cu;
    // 0x7cd8a0: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD89Cu, 0x7CD8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD8A4u;
label_7cd8a4:
    // 0x7cd8a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD8A4u;
    {
        const bool branch_taken_0x7cd8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD8A4u;
        // 0x7cd8a8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd8a4) {
            ctx->pc = 0x7CD8B8u;
            goto label_7cd8b8;
        }
    }
    ctx->pc = 0x7CD8ACu;
label_7cd8ac:
    // 0x7cd8ac: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd8b0: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cd8b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cd8b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cd8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cd8b8:
    // 0x7cd8b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7cd8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7cd8bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7cd8bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cd8c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7cd8c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cd8c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7cd8c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cd8c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7cd8c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cd8cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cd8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd8d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cd8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd8d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cd8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD8D8u;
        // 0x7cd8dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD8E0u;
}
} // namespace gh_mcport
