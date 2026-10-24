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

// Function: func_00115030
// Address: 0x115030 - 0x115310
void func_00115030_0x115030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00115030_0x115030");
#endif

    switch (ctx->pc) {
        case 0x11506cu: goto label_11506c;
        case 0x115074u: goto label_115074;
        case 0x115088u: goto label_115088;
        case 0x1150b4u: goto label_1150b4;
        case 0x1150bcu: goto label_1150bc;
        case 0x1150ecu: goto label_1150ec;
        case 0x115110u: goto label_115110;
        case 0x115150u: goto label_115150;
        case 0x1151d0u: goto label_1151d0;
        case 0x1151f0u: goto label_1151f0;
        case 0x115204u: goto label_115204;
        case 0x115278u: goto label_115278;
        case 0x115280u: goto label_115280;
        case 0x115294u: goto label_115294;
        case 0x11529cu: goto label_11529c;
        case 0x1152c0u: goto label_1152c0;
        case 0x1152ccu: goto label_1152cc;
        case 0x1152d8u: goto label_1152d8;
        case 0x1152ecu: goto label_1152ec;
        case 0x1152f4u: goto label_1152f4;
        default: break;
    }

    ctx->pc = 0x115030u;

    // 0x115030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x115030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x115034: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x115034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x115038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11503c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x115040: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115044: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x115044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x115048: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11504c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x115050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x115054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x115058: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x11505c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11505cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x115060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115064: 0xc0a480c  jal         func_292030
    ctx->pc = 0x115064u;
    SET_GPR_U32(ctx, 31, 0x11506Cu);
    ctx->pc = 0x115068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115064u;
    // 0x115068: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x115064u, 0x11506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11506Cu;
label_11506c:
    // 0x11506c: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11506Cu;
    SET_GPR_U32(ctx, 31, 0x115074u);
    ctx->pc = 0x115070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11506Cu;
    // 0x115070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11506Cu, 0x115074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115074u;
label_115074:
    // 0x115074: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x115074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x115078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x115078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11507c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x115080: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x115080u;
    SET_GPR_U32(ctx, 31, 0x115088u);
    ctx->pc = 0x115084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115080u;
    // 0x115084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x115080u, 0x115088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115088u;
label_115088:
    // 0x115088: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x115088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11508c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11508Cu;
    {
        const bool branch_taken_0x11508c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11508Cu;
        // 0x115090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11508c) {
            ctx->pc = 0x1150A4u;
            goto label_1150a4;
        }
    }
    ctx->pc = 0x115094u;
    // 0x115094: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x115094u;
    {
        const bool branch_taken_0x115094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115094u;
        // 0x115098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115094) {
            ctx->pc = 0x1151FCu;
            goto label_1151fc;
        }
    }
    ctx->pc = 0x11509Cu;
    // 0x11509c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x11509Cu;
    {
        const bool branch_taken_0x11509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11509c) {
            ctx->pc = 0x1152D0u;
            goto label_1152d0;
        }
    }
    ctx->pc = 0x1150A4u;
label_1150a4:
    // 0x1150a4: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1150a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1150a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1150a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150ac: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x1150ACu;
    SET_GPR_U32(ctx, 31, 0x1150B4u);
    ctx->pc = 0x1150B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150ACu;
    // 0x1150b0: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x1150ACu, 0x1150B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150B4u;
label_1150b4:
    // 0x1150b4: 0xc049396  jal         func_124E58
    ctx->pc = 0x1150B4u;
    SET_GPR_U32(ctx, 31, 0x1150BCu);
    ctx->pc = 0x1150B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150B4u;
    // 0x1150b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1150B4u, 0x1150BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150BCu;
label_1150bc:
    // 0x1150bc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1150bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1150c0: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x1150c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1150c4: 0x8c4308c8  lw          $v1, 0x8C8($v0)
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2248)));
    // 0x1150c8: 0x8c4408cc  lw          $a0, 0x8CC($v0)
    ctx->pc = 0x1150c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2252)));
    // 0x1150cc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1150ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1150d0: 0xae250698  sw          $a1, 0x698($s1)
    ctx->pc = 0x1150d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 5));
    // 0x1150d4: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1150D4u;
    {
        const bool branch_taken_0x1150d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150D4u;
        // 0x1150d8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150d4) {
            ctx->pc = 0x1151D0u;
            goto label_1151d0;
        }
    }
    ctx->pc = 0x1150DCu;
    // 0x1150dc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1150dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1150e0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1150e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1150e4: 0xc051e62  jal         func_147988
    ctx->pc = 0x1150E4u;
    SET_GPR_U32(ctx, 31, 0x1150ECu);
    ctx->pc = 0x1150E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150E4u;
    // 0x1150e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1150E4u, 0x1150ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150ECu;
label_1150ec:
    // 0x1150ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1150ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1150f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1150f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1150f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1150f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1150f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1150f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150fc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1150fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x115100: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x115100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115104: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x115104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115108: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x115108u;
    SET_GPR_U32(ctx, 31, 0x115110u);
    ctx->pc = 0x11510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115108u;
    // 0x11510c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x115108u, 0x115110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115110u;
label_115110:
    // 0x115110: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x115110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x115114: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x115114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115118: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x115118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x11511c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11511cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x115120: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x115120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115124: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x115124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115128: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x115128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11512c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x115130: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x115130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115134: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x115134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x115138: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x115138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11513c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x115140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115144: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x115144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x115148: 0xc073cd0  jal         func_1CF340
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x11514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115148u;
    // 0x11514c: 0x8e240698  lw          $a0, 0x698($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF340u, 0x115148u, 0x115150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115150u;
label_115150:
    // 0x115150: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x115154: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x115158: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x11515c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11515Cu;
    {
        const bool branch_taken_0x11515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11515c) {
            ctx->pc = 0x115160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11515Cu;
            // 0x115160: 0x8e240698  lw          $a0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x115164u;
    // 0x115164: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x115164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115168: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x115168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11516c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x11516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115170: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x115170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x115174: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x115174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115178: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x115178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11517c: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x11517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_115180:
    // 0x115180: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x115184: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x115188: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x115188u;
    {
        const bool branch_taken_0x115188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x115188) {
            ctx->pc = 0x11518Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115188u;
            // 0x11518c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1151ACu;
            goto label_1151ac;
        }
    }
    ctx->pc = 0x115190u;
    // 0x115190: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x115190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115194: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x115194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x115198: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x115198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11519c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11519cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1151a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1151a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1151a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1151a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1151a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1151a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1151ac:
    // 0x1151ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1151acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151b0: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x1151b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1151b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151b8: 0x8c450900  lw          $a1, 0x900($v0)
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2304)));
    // 0x1151bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1151bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1151c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1151c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1151c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1151C8u;
    SET_GPR_U32(ctx, 31, 0x1151D0u);
    ctx->pc = 0x1151CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151C8u;
    // 0x1151cc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1151d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1151d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1151d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1151d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1151e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1151e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1151E8u;
    SET_GPR_U32(ctx, 31, 0x1151F0u);
    ctx->pc = 0x1151ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151E8u;
    // 0x1151ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1151E8u, 0x1151F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151F0u;
label_1151f0:
    // 0x1151f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1151f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1151f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1151f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1151f8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1151f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1151fc:
    // 0x1151fc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1151FCu;
    SET_GPR_U32(ctx, 31, 0x115204u);
    ctx->pc = 0x115200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151FCu;
    // 0x115200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1151FCu, 0x115204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115204u;
label_115204:
    // 0x115204: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x115204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x115208: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x115208u;
    {
        const bool branch_taken_0x115208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115208) {
            ctx->pc = 0x115264u;
            goto label_115264;
        }
    }
    ctx->pc = 0x115210u;
    // 0x115210: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x115210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x115214: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x115214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x115218: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115218u;
    {
        const bool branch_taken_0x115218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x115218) {
            ctx->pc = 0x11521Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115218u;
            // 0x11521c: 0x8e240698  lw          $a0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11523Cu;
            goto label_11523c;
        }
    }
    ctx->pc = 0x115220u;
    // 0x115220: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x115220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115224: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x115224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x115228: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11522c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11522cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x115230: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x115230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115234: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x115234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x115238: 0x8e240698  lw          $a0, 0x698($s1)
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_11523c:
    // 0x11523c: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x115240: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x115244: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115244u;
    {
        const bool branch_taken_0x115244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x115244) {
            ctx->pc = 0x115264u;
            goto label_115264;
        }
    }
    ctx->pc = 0x11524Cu;
    // 0x11524c: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x11524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115250: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x115250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x115254: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x115254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115258: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x115258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11525c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115260: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x115260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_115264:
    // 0x115264: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x115264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x115268: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x115268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11526c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11526cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x115270: 0xc04939a  jal         func_124E68
    ctx->pc = 0x115270u;
    SET_GPR_U32(ctx, 31, 0x115278u);
    ctx->pc = 0x115274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115270u;
    // 0x115274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x115270u, 0x115278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115278u;
label_115278:
    // 0x115278: 0xc055f06  jal         func_157C18
    ctx->pc = 0x115278u;
    SET_GPR_U32(ctx, 31, 0x115280u);
    ctx->pc = 0x11527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115278u;
    // 0x11527c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x115278u, 0x115280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115280u;
label_115280:
    // 0x115280: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115280u;
    {
        const bool branch_taken_0x115280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115280) {
            ctx->pc = 0x1152ACu;
            goto label_1152ac;
        }
    }
    ctx->pc = 0x115288u;
    // 0x115288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11528c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11528Cu;
    SET_GPR_U32(ctx, 31, 0x115294u);
    ctx->pc = 0x115290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11528Cu;
    // 0x115290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11528Cu, 0x115294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115294u;
label_115294:
    // 0x115294: 0xc04aa36  jal         func_12A8D8
    ctx->pc = 0x115294u;
    SET_GPR_U32(ctx, 31, 0x11529Cu);
    ctx->pc = 0x115298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115294u;
    // 0x115298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8D8u, 0x115294u, 0x11529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11529Cu;
label_11529c:
    // 0x11529c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11529cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1152a0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1152a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1152a4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1152a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1152a8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1152a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1152ac:
    // 0x1152ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1152acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1152b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1152b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1152b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1152B8u;
    SET_GPR_U32(ctx, 31, 0x1152C0u);
    ctx->pc = 0x1152BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152B8u;
    // 0x1152bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1152B8u, 0x1152C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152C0u;
label_1152c0:
    // 0x1152c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1152c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1152c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1152C4u;
    SET_GPR_U32(ctx, 31, 0x1152CCu);
    ctx->pc = 0x1152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152C4u;
    // 0x1152c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1152C4u, 0x1152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152CCu;
label_1152cc:
    // 0x1152cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1152d0:
    // 0x1152d0: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1152D0u;
    SET_GPR_U32(ctx, 31, 0x1152D8u);
    ctx->pc = 0x1152D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152D0u;
    // 0x1152d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1152D0u, 0x1152D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152D8u;
label_1152d8:
    // 0x1152d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1152D8u;
    {
        const bool branch_taken_0x1152d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152D8u;
        // 0x1152dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152d8) {
            ctx->pc = 0x1152F4u;
            goto label_1152f4;
        }
    }
    ctx->pc = 0x1152E0u;
    // 0x1152e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152e4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1152E4u;
    SET_GPR_U32(ctx, 31, 0x1152ECu);
    ctx->pc = 0x1152E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152E4u;
    // 0x1152e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1152E4u, 0x1152ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152ECu;
label_1152ec:
    // 0x1152ec: 0xc04aa36  jal         func_12A8D8
    ctx->pc = 0x1152ECu;
    SET_GPR_U32(ctx, 31, 0x1152F4u);
    ctx->pc = 0x1152F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152ECu;
    // 0x1152f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8D8u, 0x1152ECu, 0x1152F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152F4u;
label_1152f4:
    // 0x1152f4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1152f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1152f8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1152f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1152fc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1152fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115300: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x115300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115304: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x115304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115308: 0x3e00008  jr          $ra
    ctx->pc = 0x115308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115310u;
}
