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

// Function: cosf
// Address: 0x3a18f0 - 0x3a19d8
void cosf_0x3a18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cosf_0x3a18f0");
#endif

    switch (ctx->pc) {
        case 0x3a1928u: goto label_3a1928;
        case 0x3a1954u: goto label_3a1954;
        case 0x3a1994u: goto label_3a1994;
        case 0x3a19acu: goto label_3a19ac;
        case 0x3a19bcu: goto label_3a19bc;
        case 0x3a19ccu: goto label_3a19cc;
        default: break;
    }

    ctx->pc = 0x3a18f0u;

    // 0x3a18f0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a18f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a18f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a18f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a18f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a18f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a18fc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a1900: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a1904: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x3a1904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x3a1908: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a1908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a190c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x3a190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x3a1910: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a1914: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1914u;
    {
        const bool branch_taken_0x3a1914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1914u;
        // 0x3a1918: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1914) {
            ctx->pc = 0x3A1930u;
            goto label_3a1930;
        }
    }
    ctx->pc = 0x3A191Cu;
    // 0x3a191c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3a191cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a1920: 0xc0e8f20  jal         func_3A3C80
    ctx->pc = 0x3A1920u;
    SET_GPR_U32(ctx, 31, 0x3A1928u);
    ctx->pc = 0x3A3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3C80u, 0x3A1920u, 0x3A1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1928u;
label_3a1928:
    // 0x3a1928: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3A1928u;
    {
        const bool branch_taken_0x3a1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1928u;
        // 0x3a192c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1928) {
            ctx->pc = 0x3A19D0u;
            goto label_3a19d0;
        }
    }
    ctx->pc = 0x3A1930u;
label_3a1930:
    // 0x3a1930: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x3a1930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x3a1934: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1938: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a193c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A193Cu;
    {
        const bool branch_taken_0x3a193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a193c) {
            ctx->pc = 0x3A194Cu;
            goto label_3a194c;
        }
    }
    ctx->pc = 0x3A1944u;
    // 0x3a1944: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A1944u;
    {
        const bool branch_taken_0x3a1944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1944u;
        // 0x3a1948: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1944) {
            ctx->pc = 0x3A19CCu;
            goto label_3a19cc;
        }
    }
    ctx->pc = 0x3A194Cu;
label_3a194c:
    // 0x3a194c: 0xc0e8dda  jal         func_3A3768
    ctx->pc = 0x3A194Cu;
    SET_GPR_U32(ctx, 31, 0x3A1954u);
    ctx->pc = 0x3A1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A194Cu;
    // 0x3a1950: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3768u, 0x3A194Cu, 0x3A1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1954u;
label_3a1954:
    // 0x3a1954: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3a1954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3a1958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a195c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A195Cu;
    {
        const bool branch_taken_0x3a195c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A195Cu;
        // 0x3a1960: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a195c) {
            ctx->pc = 0x3A199Cu;
            goto label_3a199c;
        }
    }
    ctx->pc = 0x3A1964u;
    // 0x3a1964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1964u;
    {
        const bool branch_taken_0x3a1964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1964u;
        // 0x3a1968: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1964) {
            ctx->pc = 0x3A197Cu;
            goto label_3a197c;
        }
    }
    ctx->pc = 0x3A196Cu;
    // 0x3a196c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A196Cu;
    {
        const bool branch_taken_0x3a196c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A196Cu;
        // 0x3a1970: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a196c) {
            ctx->pc = 0x3A198Cu;
            goto label_3a198c;
        }
    }
    ctx->pc = 0x3A1974u;
    // 0x3a1974: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A1974u;
    {
        const bool branch_taken_0x3a1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1974u;
        // 0x3a1978: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1974) {
            ctx->pc = 0x3A19C4u;
            goto label_3a19c4;
        }
    }
    ctx->pc = 0x3A197Cu;
label_3a197c:
    // 0x3a197c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A197Cu;
    {
        const bool branch_taken_0x3a197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A197Cu;
        // 0x3a1980: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a197c) {
            ctx->pc = 0x3A19B4u;
            goto label_3a19b4;
        }
    }
    ctx->pc = 0x3A1984u;
    // 0x3a1984: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A1984u;
    {
        const bool branch_taken_0x3a1984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1984u;
        // 0x3a1988: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1984) {
            ctx->pc = 0x3A19C4u;
            goto label_3a19c4;
        }
    }
    ctx->pc = 0x3A198Cu;
label_3a198c:
    // 0x3a198c: 0xc0e8f20  jal         func_3A3C80
    ctx->pc = 0x3A198Cu;
    SET_GPR_U32(ctx, 31, 0x3A1994u);
    ctx->pc = 0x3A1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A198Cu;
    // 0x3a1990: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3C80u, 0x3A198Cu, 0x3A1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1994u;
label_3a1994:
    // 0x3a1994: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A1994u;
    {
        const bool branch_taken_0x3a1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1994u;
        // 0x3a1998: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1994) {
            ctx->pc = 0x3A19D0u;
            goto label_3a19d0;
        }
    }
    ctx->pc = 0x3A199Cu;
label_3a199c:
    // 0x3a199c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x3a199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3a19a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a19a4: 0xc0e91ca  jal         func_3A4728
    ctx->pc = 0x3A19A4u;
    SET_GPR_U32(ctx, 31, 0x3A19ACu);
    ctx->pc = 0x3A19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19A4u;
    // 0x3a19a8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4728u, 0x3A19A4u, 0x3A19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19ACu;
label_3a19ac:
    // 0x3a19ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A19ACu;
    {
        const bool branch_taken_0x3a19ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19ACu;
        // 0x3a19b0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19ac) {
            ctx->pc = 0x3A19CCu;
            goto label_3a19cc;
        }
    }
    ctx->pc = 0x3A19B4u;
label_3a19b4:
    // 0x3a19b4: 0xc0e8f20  jal         func_3A3C80
    ctx->pc = 0x3A19B4u;
    SET_GPR_U32(ctx, 31, 0x3A19BCu);
    ctx->pc = 0x3A19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19B4u;
    // 0x3a19b8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3C80u, 0x3A19B4u, 0x3A19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19BCu;
label_3a19bc:
    // 0x3a19bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A19BCu;
    {
        const bool branch_taken_0x3a19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19BCu;
        // 0x3a19c0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19bc) {
            ctx->pc = 0x3A19CCu;
            goto label_3a19cc;
        }
    }
    ctx->pc = 0x3A19C4u;
label_3a19c4:
    // 0x3a19c4: 0xc0e91ca  jal         func_3A4728
    ctx->pc = 0x3A19C4u;
    SET_GPR_U32(ctx, 31, 0x3A19CCu);
    ctx->pc = 0x3A19C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19C4u;
    // 0x3a19c8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4728u, 0x3A19C4u, 0x3A19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19CCu;
label_3a19cc:
    // 0x3a19cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a19ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a19d0:
    // 0x3a19d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A19D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19D0u;
        // 0x3a19d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A19D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A19D8u;
}
